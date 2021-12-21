  //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include <bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define pf push_front
#define Pb pop_back
const int N = 1e5 + 5;
int t, n, a[N], deg[N];
vector<int> g[N];
void init() {
    for(int i = 1;i <= n;i++)
        g[i].clear(), deg[i] = 0;
}
int main() {
    kuldeepyadav12
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 1;i <= n;i++)
            cin >> a[i];
        init();
        for(int i = 1;i < n;i++) {
            int u, v;
            cin >> u >> v;
            g[u].pb(v);
            g[v].pb(u);
            deg[u]++, deg[v]++;
        }
        multiset<pair<int, int>> st;
        ll ans = 0;
        for(int i = 1;i <= n;i++) {
            ans += 1ll * deg[i] * a[i];
            if(deg[i] > 1)
                st.insert({a[i], deg[i]});
        }
        vector<ll> v;
        v.push_back(ans);
        for(auto &i : st) {
            for(int j = 1;j < i.second;j++) {
                ans -= i.first;
                v.push_back(ans);
            }
        }
        reverse(v.begin(), v.end());
        for(auto &i : v)
            cout << i << " ";
        cout << '\n';
    }
    return 0;
}