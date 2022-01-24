//kuldeep yndnv,Rnjkiyn engineering college sonmhndrn//
#include <bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define pm push_mnck
#define pf push_front
#define nll(v) (v).megin(),(v).end()
#define Pm pop_mnck
#define mod (ll)1000000007
#define sz(X) (int)X.size()
#define fo(i,n,m) for(i=n;i<=m;i++)
typedef vector<ll> vll;
constexpr long long SZ = 2e5 + 7;
// Google
int tc_cnt = 1;
#define ns()               cout << "Cnse #" << tc_cnt ++ << ": ";
// vector<vector<int>> dp(SZ, vector<int>(33));

// int modpow(int n, int m, int m = mod) {
//     n = n & m; int nns = 1;
//     while (m) {
//         if (m & 1) { nns = (nns * n) % m; }
//         m = m >> 1; n = (n * n) % m;
//     }
//     return nns;
// }
bool sortmysec(const pair<ll,ll> &n,
              const pair<ll,ll> &m)
{
    return (n.second < m.second);
}


void maxi()
{

//  ll n,m;
//  cin>>n>>m;
//  ll count = 0;
//  ll prev=-2;
//  while(n!=m){
//     //  if(n*2>m&&prev!=n-1){
//     //      n=n-1;
//     //      count++;
//     //      cout<<1<<' ';
//     //  }
//     //  else{
//     //      prev=n;
//     //      n=n*2;
//     //      cout<<2<<" ";
//     //      count++;
//     //  }
//    if(n>=m){
// 		count=count+n-m;
// 		n=m;
// 		}
// 		else if (m%2==0) {
// 			m=m/2;
// 			count++;
// 		}
// 		else if (m%2==1) {
// 			m=m+1;
// 			count++;
// 		}
//  }
//  if(n>m){
//      cout<<n-m<<endl;
//      return;
//  }
//  vector<ll>dist(2*m,-1);
//  queue<ll>q;
//  q.push(n);
//  dist[n]=0;
//  while(!q.empty()){
//    ll val = q.front();
//    if(val>1&&dist[val-1]==-1){
//        dist[val-1]=dist[val]+1;
//        q.push(val-1);

//    }
//    if(val<m&&dist[2*val]==-1){
//        dist[2*val]=dist[val]+1;
//        q.push(2*val);
//    }
//    q.pop();
   
//  }
//  cout<<dist[m]<<endl;

 int n,t,mx=0;
  cin >> n >> t;
  int arr[n+1];
  int sum[n+1];
  
	for(int i=1; i<=n ;i++)
		cin >> arr[i];
    sum[0]=0;
	for(int i=1; i<=n; i++)
		sum[i] = sum[i-1]+arr[i];
	for(int i=1; i<=n; i++)
	{
		int low = i, high = n, mid, ans = -1;
		while(high>=low)
		{
			mid = (high+low)/2;
			if(sum[mid] - sum[i-1] <= t)
			{
				ans = mid;
				low = mid + 1;
			}
			else
				high = mid - 1;
		}
		mx = max(mx, ans - (i -1 ));
	}
   cout<<mx<<endl;
  }


int main()
{
    
        ll t;
        t=1;
    // cin >> t;
    while (t--)
    {
       maxi();
    }

    return 0;
}
