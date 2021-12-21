                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pll pair<ll,ll>
#define pb push_back
#define pf push_front
#define Pb pop_back;
const int N=1e6+5;
 
ll n, ans=0;
ll subtree[N];
vector<vector<ll>>g;
 
void dfs(ll k, ll par)
{
	subtree[k]=1;
	for(auto it:g[k])
	{
		if(it==par)
			continue;
		dfs(it, k);
		subtree[k]+=subtree[it];
	}
	if(subtree[k]%2==0&&k!=1)
	{
		ans++;
	}
}
    int main()
{
	kuldeepyadav12
	cin>>n;
    g.resize(n+1);
	for(int i=1;i<=n-1;i++)
	{
		ll u, v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	if(n%2)
	{
		cout<<"-1";
		return 0;
	}
	dfs(1, 1);
	cout<<ans;
	return 0;
}


		
	
   

 

    


