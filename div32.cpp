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
//  ll a,b;
//  cin>>a>>b;
//  if(a==0){
//     cout<<1<< endl;
//     return;
//  }
//  else if(b==0){
//      cout<<a+1<<endl;
//      return ;
//  }
//  else {
//      cout<<a+2*b+1<<endl;
//      return;
//  }
// ll n;
// cin>>n;
// vector<ll>v(n);
// for(ll i= 0; i < n; i++){
//     cin>>v[i];
// }
// sort(v.begin(), v.end());
// if(v.size()==1){
//     if(v[0]<=1){
//       cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
//     return;
// }
//   for(ll i=n-1;i>=1;i--)
//     {
//         if(v[i]-v[i-1]>1)
//         {
//             cout<<"NO"<<endl;
//             return;
//         }
//         v[i-1]=v[i]-v[i-1];
//     }
//     cout<<"YES"<<endl;
   ll n;
   cin>>n;
   vector<ll>arr(n);
   for(ll i= 0; i < n; i++){
       cin >>arr[i];
   }
    ll max_ending_here = arr[0];
 
   
    ll min_ending_here = arr[0];
 
   
    ll max_so_far = arr[0];
    ll start=0,end=0;
    ll startmin=0;
   
    for (ll i = 1; i < n; i++)
    {
        int temp = max({arr[i], arr[i] * max_ending_here, arr[i] * min_ending_here});
        
        min_ending_here = min({arr[i], arr[i] * max_ending_here, arr[i] * min_ending_here});
       
        max_ending_here = temp;
        max_so_far = max(max_so_far, max_ending_here);
        if(max_so_far==max_ending_here&&arr[i]==temp){
           start=i;
            end=i;
        }
        
        else if(max_so_far==max_ending_here){
            end=i;
        }
    }
    cout<<start<<" "<<n-1-end<<endl;
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
