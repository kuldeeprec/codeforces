#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mod 1000000007
#define sandeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
ll ans;
vector<vi>adj;
vector<ll>dp,chil;
void dfs(int cur,int par){
    dp[cur]=1,chil[cur]=1;
    ll sum=0,cnt=0;
    for(int i=0;i<(adj[cur].size());i++){
    ll node=adj[cur][i];
    if(node!=par){
        dfs(node,cur);
        dp[cur]+=(2*dp[node]%mod),dp[cur]%mod,cnt++,chil[cur]+=chil[node],chil[cur]%mod,chil[cur]+=dp[node],chil[cur]%mod;
        sum+=dp[node];
    }
}
  for(int i=0;i<(adj[cur].size());i++) {
    int node=adj[cur][i];
    if(node!=par){
        
        chil[cur]+=(dp[node]*((sum-dp[node]+mod)%mod))%mod;
        chil[cur]%mod;
    }
}
}
int32_t main()
    {
        sandeepyadav12
    
        int t;
         cin>>t;
         while(t--){
             ans=0;
             int n;
             cin>>n;
             adj.resize(n+1),dp.resize(n+1),chil.resize(n+1);
             for(int i=0;i<n-1;i++){
                 int u,v;
                 cin>>u>>v;
                 adj[u].push_back(v),adj[v].push_back(u);

             }
             dfs(1,1);
             ll ans=chil[1]%mod;
             cout<<ans<<"\n";
             dp.clear(),adj.clear(),chil.clear();
         }
        
        
        return 0;
    }