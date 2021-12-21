#include <bits/stdc++.h>
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define pf push_front
#define Pb pop_back
using namespace std;
const int N = 1e5 + 5;
int n , in[N];
vector<pair<int , int>> g;
int main()
{
    cin >> n;
    for(int i = 1;i < n;i++)
    {
        int u , v;
        cin >> u >> v;
        g.pb({u , v});
        in[u]++ , in[v]++;
    }
    vector<int> ans(n - 1 , -1);
    int x = 0;
    for(int i = 0;i < n - 1;i++)
        if(in[g[i].first] == 1 || in[g[i].second] == 1)
            ans[i] = x++;
    for(int i = 0;i < n - 1;i++)
        if(ans[i] == -1)
            ans[i] = x++;
    for(auto &i : ans)
        cout << i << '\n';
    return 0;
}