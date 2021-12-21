//kuldeep yadav,Rajkiya engineering college sonbhadra//
#include <bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define pb push_back
#define pf push_front
#define Pb pop_back
#define mod (ll)1000000007
//   ll calc(ll x)
// {
//     ll sum = 0;
//     while(x)
//         sum+=x%10,x/=10;
//     return sum;
// }
// ll recur(ll n){
//     if(n<=2){
//         return 2;
//     }
//     else
//     {
//         if(n&1){
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
        
//     }
    
// }
void mini()
{
    // ll n,sum=0,count=0;
    // cin>>n;
    // ll a[n];
    // for (ll i = 0; i < n; i++)
    // {
    //      cin>>a[i];
    //      sum+=a[i];
    // }
    
    // sort(a,a+n);
    // if(a[0]==a[n-1]){
    //     cout<<"0"<<endl;
    // }
    // else if(sum%n!=0){
    //     cout<<"-1"<<endl;
    // }
    // else
    // {
    //    for (ll i = 0; i < n; i++)
    // {
    //      if(a[i]>sum/n){
    //          count++;
    //      }
    // } 
    // cout<<count<<endl;
    // }
  
//    ll n;
//     cin >> n;
//     while(calc(n)%4!=0)
//         n++;
//     cout << n;
// ll n,ans=0;
// cin>>n;
// unordered_map<ll,ll>m;
// for (ll i = 0; i < n; i++)
// {
//     ll x;
//     cin>>x;
//     m[x]++;
//     if(m[x]>ans){
//       ans=m[x];
//     }
// }
// // cout<<ans<<endl;
// ll n,m;
// cin >> n >> m;
//         ll sum = 0;
//         for(ll i = 0;i < n;i++) {
//             ll x;
//             cin >> x;
//             sum += x;
//         }
//         sum == m ? cout << "YES\n" : cout << "NO\n";
// ll n;
// cin>>n;
// cout<<n/2+1<<endl;
// ll n,sum=0;
// cin>>n;
// ll a[n];
// for (ll i = 0; i < n; i++)
// {
// cin>>a[i];
// }
// sort(a,a+n);
// for ( ll i = 0; i < n-1; i+=2)
// {
//     sum+=a[i+1]-a[i];
// }
// cout<<sum<<endl;
// ll n;
// cin>>n;
//   ll a[n];
//   set<ll>s;
//   for(ll i=0;i<n;i++)
//   {
//     cin>>a[i];
//     if(s.count(a[i])==0)
//     s.insert(a[i]);
//     else
//     {
//       a[i]=a[i]+1;
//       s.insert(a[i]);
//     }
//   }
 
//   cout<<s.size()<<endl;
// ll n;
// cin>>n;
// cout<<recur(n)<<endl;
// ll b,p,f,h,c,ans=0;
// cin>>b>>p>>f>>h>>c;
// if(h>c){
//   ll a=min(b/2,p);
//   b=b-2*a;
//   ll r=min(b/2,f);
//   ans=h*a+c*r;
// cout<<ans<<endl;
// }
// else
// {
//      ll a=min(b/2,f);
//   b=b-2*a;
//   ll r=min(b/2,p);
//   ans=c*a+h*r;
//   cout<<ans<<endl;
// }
ll n,m;
cin>>n;
ll a[n];
for (ll i = 0; i < n; i++)
{
    cin>>a[i];
}
cin>>m;
ll b[m];
for (ll i = 0; i < m; i++)
{
    cin>>b[i];
}
sort(a,a+n);
sort(b,b+m);
cout<<a[n-1]<<" "<<b[m-1]<<endl;


}
    
    
     
    


int main()
{
    kuldeepyadav12
    //     ll t;
    // cin >> t;
    // while (t--)
    // {
    //     mini();
    // }
    mini();
   
    return 0;
}
