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
// bool com(pair<ll,ll>&a,pair<ll,ll>&b){
//      return a.first < b.first;
// }

void maxi()
{
        ll n;
        cin >> n;
        if (n % 11 == 0) {
            cout << "YES" << endl;
        } else {
            n -= (n % 11) * 111;
            if (n < 0) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
}


int main()
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
