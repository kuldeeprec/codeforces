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
// #define mod (ll)1000000007
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
//  ll n,x;
//  cin>>n>>x;
//  vll a(n);
//  for(ll i=0;i< n; i++){
//    cin>>a[i];
//  }
// ll count = 0,required=1;
// bool ans=true;
//  sort(a.begin(), a.end());
//  for(ll i=n-1;i>=0;){
//      if(a[i]>=x){
//              count++;
//              i--;
//      }
//      else{
//          if(a[i]*required>=x){
//              required=1;
//              count++;
//              i--;
//          }
//          else{
//              required++;
//              i--;
//          }
//          }
         

//      }
 
//  cout<<count<<endl;

ll n,m;
cin>>n>>m;
 if(n>m+1 || n*2+2<m)
     cout << -1;
     return;
    if(m==n-1)
    {
        for(int i =0;i<n-1;i++){
         cout << "01";
            cout << 0;
        }
            
    return;
    }
    if(n == m)
    {
        for(int i=0;i<n;i++){
cout << "01";
        }
            
        return;
    }
    ll x = m-n;
    for(int i =0;i<n;i++,x--)
    {
        if(x>0){
cout << "110";
        }
            
        else{
cout << "10";
        }
            
    }
    while(x>0){
 cout << 1;
 x--;
    }
        
    return;  
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
