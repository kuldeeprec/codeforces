 //kuldeep yadav rajkiya engineering college sonbhadra
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
// Google
ll tc_count = 1;
void maxi(){
// string s ;
// cin>>s;
// transform(s.begin(), s.end(), s.begin(), ::tolower);
// if(s=="yes"){
//     cout<<"YES"<<endl;
// }
// else{
//     cout<<"NO"<<endl;
// }
// ll n;
// cin>>n;
//  string s;
//  cin>>s;
//  map<char,int>mp;
//  ll ans=0;
//  for(int i=0;i<s.size();i++){
//      if(mp[s[i]]>0){
//        ans+=1;
//        mp[s[i]]++;
//      }
//      else{
//         ans+=2;
//         mp[s[i]]++;
//      }
//  }
//  cout<<ans<<endl;
// third;
// ll n;
// cin>>n;
// vector<ll>a(n);
// for(ll i=0;i<n;i++){
//     cin>>a[i];
// }
// vector<ll>b(n);
// string s;
// for(ll i=0;i<n;i++){
//    cin>>b[i];
//    cin>>s;
//    for(ll j=0;j<b[i];j++){
//       if(s[j]=='U'){
//         if(a[i]==0){
//             a[i]=9;
//         }
//         else{
//             a[i]=a[i]-1;
//         }
//       }
//      else if(s[j]=='D'){
//         if(a[i]==9){
//             a[i]=0;
//         }
//         else{
//             a[i]=a[i]+1;
//         }
//       }
//    }
//    cout<<a[i]<<" ";
// }
// cout<<endl;
  
// forth 
// ll n;
// cin>>n;
// vector<string>s(n);
// map<string, bool>mp;
// for(int i=0;i<n;i++){
//     cin>>s[i];
//     mp[s[i]]=true;
// }


// string ans="";
// for(int i=0;i<n;i++){
//     bool ok=false;
//     for(int j=1;j<s[i].size();j++){
//          if(mp[(s[i].substr(0,j))]==true && mp[(s[i].substr(j,s[i].size()))]==true){
//             ok=true;
//             break;
//          }
//     }
//     if(ok){
//        ans+="1";
//     }
//     else{
//         ans+="0";
//     }
// }
// cout<<ans<<endl;


// }
// ll n;
//  cin>>n;

//  vector<vector<ll>>v(n,vector<ll>(n));
ll n;
cin>>n;
vector<pair<ll,ll>>v(n+1);
for(ll i=1;i<=n;i++){
    ll r;
    v[i].first=i;
    v[i].second=r;
}
sort(v.begin(),v.end(),sortbysec());


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

 
 
