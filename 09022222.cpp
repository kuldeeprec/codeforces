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
#define nll(v) (v).begin(),(v).end()
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
#define ns()               cout << "Case #" << tc_cnt ++ << ": ";
const long long mex=1e5+1;
void maxi()
{
  ll n;
	cin >> n;
    vector<ll>a(n+1);
    vector<ll>dp(n+1,1);
	for (ll i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	for (ll i = 1; i <= n;i++) {
		for (ll j = i * 2; j <= n; j += i) {
			if (a[i] < a[j]) {
				dp[j] = max(dp[j], dp[i] + 1);
			}
		}
	}
	cout << *max_element(dp.begin(), dp.end()) << endl;
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
