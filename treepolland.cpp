                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define pf push_front
#define Pb pop_back
#define BiEdge(v,a,b) (v)[(a)].pb(b),(v)[(b)].pb((a))
 int const N = 1e4+5,M = 1005;
ll n,ans,a;
bool vis[N];
vector<vector<ll>>v;
void dfs(ll node,ll par)
{
    for(auto i:v[node])
    {
        if(i == par)
            continue;
        if(!vis[i])
        {
            vis[i] = true;
            dfs(i,node);
        }
    }
}



 int main()
    {
        kuldeepyadav12
    
       cin >> n;
    v.resize(n+2);
    for(int i =1;i<=n;i++)
        cin >> a,BiEdge(v,a,i);
    for(int i =1;i<=n;i++)
        if(!vis[i])
            ans++,dfs(i,-1);
    cout << ans;
        
        return 0;
    }
