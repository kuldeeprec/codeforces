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
// split fuction in c++ mode
vector<string>splitfun(string s,string delimiter){
vector<string>ans;
size_t pos = 0;
string token;
while ((pos = s.find(delimiter)) != string::npos) {
    token = s.substr(0, pos);
    ans.push_back(token);
    s.erase(0, pos + delimiter.length());
}
if(s.length()>0){
ans.push_back(s);
}
return ans;
}
const ll m=2e5;
vector<ll>adj[m+1];
vector<ll> sub(m+1,0), dep(m+1,0), val(m+1,0);
void dfs(int u, int p) {
	sub[u] = 1;
	for (auto c : adj[u]) {
		if (c == p) continue;
		dep[c] = dep[u] + 1;
		dfs(c, u);
		sub[u] += sub[c];
	}
}
void maxi(){
    ll n,k;
    cin>>n>>k;
    for(ll i=1;i<n;i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool>visited(n+1,false);
    dfs(1, 0);
	
	for (int i = 1; i <= n; ++i) {
		val[i] = dep[i] - sub[i] + 1;
	}
	sort(val.begin()+1, val.end(),greater<ll>());
	ll ans = 0;
	for (int i = 1; i <=k; ++i) {
		ans += val[i];
	}
	cout << ans << '\n';
}

int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    // cin >> t;
   
    while (t--)
    {
       maxi();
    }

    return 0;
}
