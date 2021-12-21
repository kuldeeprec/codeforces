#include <bits/stdc++.h>
using namespace std;
const int h = 1e5 + 5;
const int mod = 1e9 + 7;
const int N=2010;
#define f first
#define s second
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi(){
//  ll n;
//  cin>>n;
//  int flag=0;
//  string s;
//  char prev;
//  cin>>s;
//  prev=s[0];
//  multiset<char>v;
//   v.insert(s[0]);
//  for (ll i = 1; i <n; i++)
// { 
    
//      if(s[i]!=prev){
//       auto it= v.find(s[i]);
//       if (*it==s[i])
//       {
//           flag=1;
//       }
//       else
//       {
//           v.insert(s[i]);
//           prev=s[i];
//       }
      
      
//      }
//      else
//      {
//           v.insert(s[i]);
//           prev=s[i];
//      }
     
//  }
 
//  if (flag==1)
//  {
//      cout<<"NO"<<endl;
//  }
//  else{
//      cout<<"YES"<<endl;
//  }
// ll x;
//   cin>>x;
//  ll ans=0;
//   ll cc=1;
//   for(ll i=1;i<=10;i++){
//     ll cur=x/cc;
//     cur=min(9LL,cur);
//     ans+=cur;
//     cc*=10;
//     cc++;
//   }
//   cout<<ans<<"\n";
//   return;
 
//    int N;
//     cin >> N;
 
//     if (N == 2) {
//         cout << -1 << '\n';
//         return;
//     }
 
//     int current = 1;
 
//     for (int i = 0; i < N; i++)
//         for (int j = 0; j < N; j++) {
//             cout << current << (j < N - 1 ? ' ' : '\n');
//             current += 2;
 
//             if (current > N * N)
//                 current = 2;
//         }
 const int N=200040;ll a[N],b[N],c[N],ans,sum;
 int n;
//   cin>>n;
//   map<ll,ll> m;
//   for(int i=1;i<=n;i++){
//     cin>>a[i];
//     m[a[i]-i]++;
//   }
//   ans=0;
//   for(auto x:m){
//     ans+=((x.s*(x.s-1))/2);
//   }
//   cout<<ans<<"\n";
//   return;
cin>>n;
  string s;
  cin>>s;
  vector<ll>v;
  if(s[0]=='.') v.push_back(0);
  ll cur=0;
  for(int i=0;i<n;i++){
    if(i!=0&&s[i]!=s[i-1]) v.push_back(cur),cur=0;
    cur++;
  }
  v.push_back(cur); 
  if(s.back()=='.') v.push_back(0);
  ll n1=v.size();
  ll pre[n1+1];
  ll suf[n1+1];
  memset(pre,0,sizeof(pre));
  memset(suf,0,sizeof(suf));
  ll cc=v[0];
  for(int i=2;i<n1;i++){
    if(i%2==0){
      ll cur=pre[i-2];
      ll lana=v[i-1];
      ll tot=cc*lana;
      pre[i]=tot+cur;
      cc+=v[i];
    }
  }
  cc=v.back();
  for(int i=n1-3;i>=0;i--){
    if(i%2==0){
      ll cur=suf[i+2];
      ll lana=v[i+1];
      ll tot=cc*lana;
      suf[i]=tot+cur;
      cc+=v[i];
    }
  }
  ans=LLONG_MAX;
  for(int i=0;i<n1;i++){
    // cout<<v[i]<<" ";
    if(i%2==0) ans=min(ans,pre[i]+suf[i]);
  }
  // cout<<"\n";
  // for(int i=0;i<n1;i++) cout<<pre[i]<<" ";
  // cout<<"\n";
  // for(int i=0;i<n1;i++) cout<<suf[i]<<" ";
  // cout<<"\n";
 
  cout<<ans<<"\n";
  return;
}
    
 
    int main()
    {
        kuldeepyadav12
    
        ll t;
         cin>>t;
         while(t--)
            maxi();
        
        return 0;
    }