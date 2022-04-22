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
#define ns()               cout << "Case #" << tc_count ++ << ": ";
const long long mex=1e5+1;

ll bfs(vector<vector<ll>> arr, ll v, ll current_element, ll v2, vector<bool>visited,vector<ll>&f,vector<bool>&visited2)
{
	queue<ll>q;
	visited[current_element] = true;
	q.push(current_element);
    ll maxans=0;
	while (!q.empty())
	{
		ll current = q.front();
        ll ans=0;
        if(visited2[current] == false){
         ans=f[current];
         visited2[current] =true;
        }
         
        maxans= max(ans,maxans);
		if (current == v2)
		{
			break;
		}
		for (ll i = 0; i < v; i++)
		{
			if (!visited[i]&& arr[current][i] == 1 && i !=current)
			{
				q.push(i);
				visited[i] = true;
			}
		}
		q.pop();
	}
    return maxans;
	
}

void maxi()
{
    // ns();
   ll n;
   cin>>n;
   vector<ll>f(n+1);
   for(ll i=1;i<=n;i++){
       cin>>f[i];
   }
   vector<vector<ll>>v(n+1,vector<ll>(n+1,-1));
   vector<bool>intiator(n+1,true);
   for(ll i=1;i<=n;i++){
       ll p;
       cin>>p;
       intiator[p]=false;
       v[i][p]=1;
   }
   vector<ll>intial;
   for(ll i=0;i<=n;i++){
       if(intiator[i]){
           intial.push_back(i);
       }
   }
   vector<bool>visited(n+1,false);
   vector<bool>visited2(n+1,false);
   ll maxans=0;
   ll ans2=0;
   sort(intial.begin(),intial.end());
   do {
       for(auto i:intial){
       ll ans= bfs(v,n+1,i,0,visited,f,visited2);
       maxans+=ans;
       }
       for(ll i=0;i<=n;i++){
           visited2[i]=false;
       }
       ans2=max(maxans,ans2);
       maxans=0;
    } while (next_permutation(intial.begin(), intial.end()));
    ns();
    cout<<ans2<<endl;

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
