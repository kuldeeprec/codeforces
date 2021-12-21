#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define mt              make_tuple
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_s<int>
#define pqs             priority_s<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define range(a,b)		substr(a,b-a+1)
#define w(x)            int x; cin>>x; while(x--)
#define trace(x) 		cerr<<#x<<": "<<x<<" "<<endl;
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


vi ans, down, num;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}
 
vector<vi> adj;

  

int32_t main()
{
	FIO;
	int t;
	cin>>t;
	while(t--){
	
    int n;
	int x;
	cin >> n>>x;
	adj.resize(n+1);

	int node[n+1]={0};
	int weight[n+1];
	weight[1]=x;
     int sum=0;
	for (int i = 1; i < n ; ++i)
	{
		int u, v; cin >> u >> v;
		node[u]++;
		adj[u].pb(v);
	}
	
	queue<int>si;
	si.push(x);
	int s;
	
	vector< pair <int,int> > len;
	int r;
     while(!si.empty())
    {
        
        s = si.front();
    
        si.pop();
 
        
        for (int ch=0;ch<adj[s].size();ch++)
        {      len.push_back( make_pair(ch,node[ch]) ); 
                si.push(ch);

				
            
        }
      sort(len.begin(),len.end(),sortbysec);
	  int w=1;
	  for (int i=0;i<len.size();i++)
        {      
		       down[len[i].ff]= w*down[s];
			   w++;
                

				
            
        }
		len.clear();
	  
    }
	

	for (int i = 1; i <=n; ++i)
		    sum+=weight[i];
			sum=sum%mod;
cout<<sum<<endl;
	}
	return 0;
}