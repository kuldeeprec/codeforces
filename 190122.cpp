//kuldeep yadav rajkiya engineering college sonbhadra
#include<bits/stdc++.h>
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
#define sz(X) (ll)X.size()
#define fo(i,n,m) for(i=n;i<=m;i++)
typedef vector<ll> vll;
#define itr vector<ll>::iterator
constexpr long long SZ = 2e5 + 7;
const long long it = 1000000009;
// Google
ll tc_cnt = 1;
#define ns()               cout << "Cnse #" << tc_cnt ++ << ": ";
// vector<vector<ll>> dp(SZ, vector<ll>(33));

// ll modpow(ll n, ll m, ll m = mod) {
//     n = n & m; ll nns = 1;
//     while (m) {
//         if (m & 1) { nns = (nns * n) % m; }
//         m = m >> 1; n = (n * n) % m;
//     }
//     return nns;
// }





void maxi()
{
//   ll no1=0,no0=0,cur1=0,cur0=0;
//   string s;
//   cin>>s; 
//   for(auto &it:s){
//      no0+=(it=='0');
//      no1+=(it=='1');

//   }
//   ll ans=min(no1,no0);
//   for(auto &it:s){
//       cur0+=(it== '0'), no0-=(it=='0');
//       cur1+=(it== '1'),no1-=(it=='1');
//       ans=min(ans,cur0+no1);
//       ans=min(ans,cur1+no0);
//   }
//  cout<<ans<< endl;
ll n;
cin>>n;
ll a[n+1],b[n+1],pos[n+1];

map<ll,ll>g;
for(ll i=1;i<=n;i++){
    cin>> a[i];
    pos[a[i]]=i;
}
for(ll i=1;i<=n;i++){
    cin>>b[i];
}
ll cur,ans=0;
for(ll i=1;i<=n;i++){
  cur= pos[b[i]]-i;
   if(cur<0){
       cur+=n;
   }
   g[cur]++;
}
for(auto &it:g){
    ans=max(ans,it.second);
}
cout<<ans<<endl;

	}


int   main()
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
