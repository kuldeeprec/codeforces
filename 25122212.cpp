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
#define ns()               cout << "Case #" << tc_cnt ++ << ": ";

void maxi()
{
  ll n;
  cin>>n;
  ll ans1=1,ans2=n;
  for(ll i=2;i*i<n;i++){
        if(n%i==0){
           if(__gcd(i,n/i)==1){
               ans1=i;
               ans2=n/i;
           }
        }
  }
  cout<<ans1<<" "<<ans2<<endl;
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
