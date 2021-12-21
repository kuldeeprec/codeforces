      //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include <bits/stdc++.h>
#define kudeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define S second
#define pb push_back
#define pf push_front
#define Pb pop_back
#define mod 1000000007
#define pll pair<ll,ll>
#define  ll long long 
int const N = 2*1e5+5,M = 1005;
using namespace std;
ll n,k,a,b,x,cnt,sum;
vector<vector<ll>>v;
bool vis[N];
ll fp(ll x,ll y)
{
    if(!y)
        return 1;
    ll res = fp(x,y/2)%mod;
    res = (res*res)%mod;
    if(y&1)
        return (res*x)%mod;
    return res;
}
void dfs(ll node)
{
    vis[node] = true;
    cnt++;
    for(auto i:v[node])
        if(!vis[i])
            dfs(i);
}
int main()
{
    kudeepyadav12
    cin >> n >> k;
    v.resize(n+1);
    for(int i = 0;i<n-1;i++)
    {
        cin >> a >> b >> x;
        if(!x)
            (v)[(a)].pb(b),(v)[(b)].pb((a));
    }
    for(int i = 1;i<=n;i++)
        if(!vis[i])
            cnt = 0,dfs(i),sum=(sum+fp(cnt,k))%mod;
    cout << (fp(n,k) - sum+mod)%mod;
    return 0;
}
