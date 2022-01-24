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
#define sz(X) (ll)X.size()
#define fo(i,n,m) for(i=n;i<=m;i++)
typedef vector<ll> vll;
#define itr vector<ll>::iterator
constexpr long long SZ = 2e5 + 7;
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
bool sortmysec(const pair<ll,ll> &n,
              const pair<ll,ll> &m)
{
    return (n.second < m.second);
}
ll distance(ll x1, ll y1, ll x2, ll y2)
{
	return (y2-y1)*(y2-y1) + (x2-x1)*(x2-x1);
}
 


void maxi()
{
//   ll n ;
//   cin>>n ;
//   vector<pair<ll,ll>>a(n);
//   for(ll i=0;i<n;i++){
//       cin>>a[i].first;
//       cin>>a[i].second;
//   }
// sort(a.begin(),a.end());

// ll ans=0, day=0;
// 	for(ll i=0;i<n;i++)
// 	{
// 		if(min(a[i].first, a[i].second)>=day)
// 			day=min(a[i].first, a[i].second);
// 		else
// 			day=max(a[i].first, a[i].second);
// 	}
// 	cout<<day;
// ll n,k,m;
// cin >> n >> k;
// vll a(n+1);
// 		set<ll> s;
// 		for(ll i = 1; i <= n; i++)
// 		{
// 			cin >> a[i];
// 			s.insert(a[i]);
// 		}
// 		if(s.size() > k)
// 		{
// 			cout << -1 << endl;
// 			return;
// 		}
// 		cout << k * n << endl;
// 		for(ll i = 1; i <= n; i++)
// 		{
// 			for(auto &it:s)
// 				cout << it << " ";
// 			ll cur = s.size();
// 			while(cur < k)
// 			{
// 				cur++;
// 				cout << *s.rbegin() << " ";
// 			}
// 		}
// 		cout << endl;


// drazil factorial
// ll n;
// cin>>n;
// string s;
// cin>>s;
// vector<ll>ans;
// for(ll i = 0; i < n; i++){
//     if(s[i]-'0'>1){ 
//         if(s[i]-'0'==2){
//             ans.push_back(2);
//         }
//         if(s[i]-'0'==3){
//             ans.push_back(3);
//         }
//         if(s[i]-'0'==4){
//             ans.push_back(3);
//             ans.push_back(2);
//             ans.push_back(2);
//         }
//         if(s[i]-'0'==5){
//             ans.push_back(5);
//         }
//         if(s[i]-'0'==6){
//             ans.push_back(5);
//             ans.push_back(3);
//         }
//          if(s[i]-'0'==7){
//             ans.push_back(7);
            
//         }
//          if(s[i]-'0'==8){
//             ans.push_back(7);
//             ans.push_back(2);
//             ans.push_back(2);
//             ans.push_back(2);
//         }
//         if(s[i]-'0'==9){
//             ans.push_back(7);
//             ans.push_back(2);
//             ans.push_back(3);
//             ans.push_back(3);
//         }
        
//     }
// }
// sort(ans.begin(), ans.end());
// for(ll i=ans.size()-1; i>=0; i--){
//     cout<<ans[i];
// }
// cout<<endl;


	ll r, x, y, x2, y2;
	cin>>r>>x>>y>>x2>>y2;
	double dist=distance(x, y, x2, y2);
	dist=sqrtl(dist);
	dist/=(2*r);
	ll ans=ceill(dist);
	cout<<ans;

}
int  main()
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
