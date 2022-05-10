//kuldeep yadav rajkiya engineering college sonbhadra
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
// Google
ll tc_count = 1;
#define ns()         cout << "Case #" << tc_count ++ << ": ";
vector<vector<ll>>adj;
vector<vector<ll>>ans;
vector<ll>vec;
void dfs(ll cur){
    if(adj[cur].size() == 0){
       ans.push_back(vec);
    }
    bool visited = false;
    for(auto x:adj[cur]){
        if(!visited){
            vec.push_back(x);
            dfs(x);
            visited = true;
        }
        else{
            vec={x};
            dfs(x);
        }
    }
}
void maxi(){
ll n;
cin>>n;
adj.clear();
ans.clear();
vec.clear();
adj.assign(n+1,{});
ll root=-1;
for(ll i=1;i<=n;i++){
    ll x;
    cin>>x;
    if(i==x) {
        root=i;
        continue;
        }
    adj[x].push_back(i);
}

vec = {root};
dfs(root);
cout<<ans.size() <<endl;
for(auto u:ans){
    cout<<u.size()<<endl;
    for(auto i:u){
        cout<<i<<" ";
    }
    cout<<endl;
}

}
int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    cin >> t;
   
    while (t--)
    {
       maxi();
    }

    return 0;
}

