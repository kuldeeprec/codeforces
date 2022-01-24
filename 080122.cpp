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
bool sortmysec(const pair<ll,ll> &n,
              const pair<ll,ll> &m)
{
    return (n.second < m.second);
}
ll distance(ll x1, ll y1, ll x2, ll y2)
{
	return (y2-y1)*(y2-y1) + (x2-x1)*(x2-x1);
}
 vector<ll>v(100);
 void calculate(){
for(ll i = 4; i <=it; i+=2){
  for(ll j=3;j*j<=i;j+=2){
      if(i%j>=4){
  v[i]=1;
      }
        
  }
}
 }




void maxi()
{

// ll n;
//  cin >> n;
//  ll a[n],b[n];
//     for(ll i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     for(ll i = 0; i < n; i++) {
//         cin >> b[i];
//         a[i] -= b[i];
//     }
//     sort(a, a + n);
//     ll ans = 0;
//     for(ll i = 1; i < n; i++) {
//         ll j = upper_bound(a, a + i, -a[i]) - a;
//         ans += i - j;
//     }
//     cout << ans << endl;

ll n;
		cin >> n;
		if (n == 1) {
			cout << "FastestFinger\n";
		} else if (n % 2) {
			cout << "Ashishgup\n";
		} else {
			n /= 2;
			bool ok = n == 1;
			for (ll i = 2; i * i <= n; ++i) {
				if (n % i == 0 && (n / i % 2 || i % 2)) {
					ok = true;
					break;
				}
			}
			cout << (ok ? "Ashishgup" : "FastestFinger") << "\n";
		}
	}


int   main()
{
     
        ll t;
        t=1;
    cin >> t;
   
    while (t--)
    {
       maxi();
    }

    return 0;
}
