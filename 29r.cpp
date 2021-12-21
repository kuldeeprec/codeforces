#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N = 1e5 + 5;
int t, n, l[N], r[N];
ll memo[N][2];
vector<int> g[N];
ll solve(int node, int par, bool f) {
    ll &ans = memo[node][f];
    if(~ans)
        return ans;
    ans = 0;
    for(auto &i : g[node]) {
        if(i == par)
            continue;
        ll ans1 = 0;
        if(f) {
            ans1 = solve(i, node, f) + abs(r[node] - r[i]);
            ans1 = max(ans1, solve(i, node, !f) + abs(r[node] - l[i]));
        } else {
            ans1 = solve(i, node, f) + abs(l[node] - l[i]);
            ans1 = max(ans1, solve(i, node, !f) + abs(l[node] - r[i]));
        }
        ans += ans1;
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 1;i <= n;i++) {
            memo[i][0] = memo[i][1] = -1;
            g[i].clear();
            cin >> l[i] >> r[i];
        }
        for(int i = 1;i < n;i++) {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        cout << max(solve(1, 1, 0), solve(1, 1, 1)) << '\n';
    }
    return 0;
}