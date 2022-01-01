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
#define all(v) (v).begin(),(v).end()
#define Pb pop_back
#define mod (ll)1000000007
#define sz(X) (int)X.size()
#define fo(i,a,b) for(i=a;i<=b;i++)
typedef vector<ll> vll;
constexpr long long SZ = 2e5 + 7;
// Google
int tc_cnt = 1;
#define ns()               cout << "Case #" << tc_cnt ++ << ": ";
// vector<vector<int>> dp(SZ, vector<int>(33));

int modpow(int a, int b, int m = mod) {
    a = a & m; int ans = 1;
    while (b) {
        if (b & 1) { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
void maxi(){
//  ll a[3];
//  for(int i=0;i<3;i++){
//      cin>>a[i];
//  }
//  bool ans;
//  sort(a,a+3);
//  if(a[0]==a[1]){
//      if(a[2]&1){
//          ans=false;
//      }
//      else{
//          ans=true;
//      }}
//     else if(a[1]==a[2]){
//      if(a[0]&1){
//          ans=false;
//      }
//      else{
//          ans=true;
//      }}
//      else if(a[2]==a[0]+a[1]){
//          ans= true;
//      }
//      else{
//          ans=false;
//      }
//     if(ans){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
//   ll n;
//   cin>>n;
//   vector<ll>v(n,0);
//   for(int i=0;i<n;i++){
//    cin>>v[i];
//   }
//     string s;
//  cin>>s;
// //  vector<pair<ll,ll>>v1(n);
// //  for(int i=0;i<n;i++){
// //     v1[i].first=v[i];
// //     v1[1].second= s[i]-'0';
// //  }
// vector<pair<ll,ll>>zeros;
// vector<pair<ll,ll>>one;
// for(int i=0;i<n;i++){
//     if(s[i]=='0'){
//         zeros.pb(make_pair(v[i],i));
//     }
//     else{
//         one.pb(make_pair(v[i],i));
//     }
// }
// sort(zeros.begin(), zeros.end());
// sort(one.begin(), one.end());
// ll boolpon=0;
// for(int i=0;i<zeros.size();i++){
//     zeros[i].first=i+1;
//     boolpon=i+1;

// }
// for(int i=boolpon;i<one.size();i++){
//     one[i].first=i;
    

// }
// sort(zeros.begin(), zeros.end(),sortbysec);
// sort(one.begin(), one.end(),sortbysec);
   long long int n,x,rr,y;
      cin>>n;
   long long int i,j,a[n],b[n],r=0,m=0;
   for(i=0;i<n;i++)
   {
     cin>>a[i];
   }
   string s; cin>>s;
   for(i=0;i<n;i++)
   {
     if(s[i]=='0')
     m++;
   }
   
 pair<long long int,long long int>p[m];
 
 y=0;
 for(i=0;i<n;i++)
   {
     if(s[i]=='0')
    {
      p[y].first=a[i];
      p[y].second=i;
      y++;
    }
   }
   
   sort(p,p+m);
   r=1; rr=0;
   for(i=0;i<n;i++)
   {
     if(s[i]=='0')
     {
    x=p[rr].second;
    b[x]=r;
    r++; rr++;
     }
   }
   
   
   
   
   
 pair<long long int
,long long int>pp[n-m];
 
 
 y=0;
 
 for(i=0;i<n;i++)
   {
     if(s[i]=='1')
    {
      pp[y].first=a[i];
      pp[y].second=i;
      y++;
    }
   }
   
   sort(pp,pp+n-m);
   rr=0;
   for(i=0;i<n;i++)
   {
     if(s[i]=='1')
     {
    x=pp[rr].second;
    b[x]=r;
    r++; rr++;
     }
   }
   
   for(i=0;i<n;i++)
   {cout<<b[i]<<" ";}
   cout<<endl;
  }


int main()
{
    kuldeepyadav12
        ll t;
    cin >> t;
    while (t--)
    {
       maxi();
    }

    return 0;
}
