#include <bits/stdc++.h>
using namespace std;
const int h = 1e5 + 5;
const int mod = 1e9 + 7;
const int N = 2e5 + 5;
int t, n, u[N], s[N];
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi(){
    cin >> n;
        vector<ll> g[n + 5];
        for(int i = 1;i <= n;i++)
            cin >> u[i];
        for(int i = 1;i <= n;i++)
            cin >> s[i];
        for(int i = 1;i <= n;i++)
            g[u[i]].push_back(s[i]);
        ll ans[n + 5] = {};
        for(int i = 1;i <= n;i++) {
            sort(g[i].begin(), g[i].end());
            for(int j = 1;j < g[i].size();j++)
                g[i][j] += g[i][j - 1];
            for(int j = 1;j <= g[i].size();j++) {
                ans[j] += g[i].back();
                int l = g[i].size() % j;
                if(l)
                    ans[j] -= g[i][l - 1];
            }
        }
        for(int i = 1;i <= n;i++)
            cout << ans[i] << " ";
        cout << '\n';
    
    }
 

    
 
    int main()
    {
        kuldeepyadav12
    
        ll t;
         cin>>t;
         while(t--)
            maxi();
        
        return 0;
    }