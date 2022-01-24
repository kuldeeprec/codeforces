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
ll countOdd(ll L, ll R){
 
    ll N = (R - L) / 2;
 
    // if either R or L is odd
    if (R % 2 != 0 || L % 2 != 0)
        N += 1;
 
    return N;
}
void maxi()
{
//  ll n,k;
//  cin>>n>> k;
//  vector<pair<ll,ll>>v(n);
//  for(ll i=0;i<n;i++){
//      cin>>v[i].first;
//  }
//  for(ll i=0;i<n;i++){
//      cin>>v[i].second;
//  }
//  ll ans =k;
//  sort(v.begin(),v.end());
//  for(ll i=0;i<n;i++){
//      if(ans>=v[i].first){
//          ans+=v[i].second;
//  }}
//  cout<<ans<<endl;
ll l,r,k;
cin>>l>>r>>k;
if(l==r&&l>1){
    cout<<"YES"<<endl;
    return;
}
ll odd=countOdd(l,r);

if(odd>k){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
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
