#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N = 1e5 + 5;
int n, q, a[N], dp[N][20], pos[N];
vector<int> g[N];
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> q;
    for(int i = 2;i < N;i++) {
        if(g[i].size())
            continue;
        pos[i] = 1e9;
        for(int j = i;j < N;j += i)
            g[j].push_back(i);
    }
    for(int i = 0;i < n;i++)
        cin >> a[i];
    dp[n][0] = n;
    for(int i = n - 1;i >= 0;i--) {
        dp[i][0] = dp[i + 1][0];
        for(auto &j : g[a[i]]) {
            dp[i][0] = min(dp[i][0], pos[j]);
            pos[j] = i;
        }
    }
    for(int i = 1;i < 20;i++)
        for(int j = 0;j <= n;j++)
            dp[j][i] = dp[dp[j][i - 1]][i - 1];
    while(q--) {
        int l, r;
        cin >> l >> r;
        l--, r--;
        int ans = 0;
        for(int i = 19;i >= 0;i--)
            if(dp[l][i] <= r)
                ans += (1 << i), l = dp[l][i];
        cout << ans + 1 << '\n';
    }
    return 0;
}