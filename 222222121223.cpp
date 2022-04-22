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
#define ns()               cout << "Case #" << tc_count ++ << ": ";
const long long mex=1e5+1;
// ll bfs(ll n,ll m){
//  vector<ll>dist(2*m,-1);
//  queue<ll>q;
//  q.push(n);
//  dist[n]=0;
//  while(!q.empty()){
//    ll val = q.front();
//    if(val%32768==0){
//        return dist[val];
//    }
//    if(val>0&&val<m && dist[val+1]==-1){
//        dist[val+1]=(dist[val]+1);
//        q.push((val+1));
//    }
//    if(val<m&&dist[2*val]==-1){
//        dist[2*val]=(dist[val]+1);
//        q.push((2*val));
//    }
//    q.pop();
   
//  }
//  return -1;
//   }

void maxi()
{
//   ll n;
//   cin>>n;
//   vector<ll>v;
//   vector<ll>a;
//   for(ll i=0; i < n; i++){
//       ll j;
//       cin>>j;
//       v.push_back(j);
//   }
//    for(ll i=0; i < n; i++){
//       int j;
//       cin>>j;
//       a.push_back(j);
//   }
//   for(ll i=0; i < n; i++){
//       if(v[i]>a[i]){
//           swap(a[i],v[i]);
//       }
//   }
//   ll ans=0;
//   for(ll i=0; i < n-1; i++){
//       ans+=(abs(a[i]-a[i+1])+abs(v[i]-v[i+1]));
//   }
//   cout<<ans<<endl;
// ll n;
// cin>>n;
// vector<ll>v(n);
// vector<ll>ans(n);
// ll small=0;
// for(ll i=0; i < n; i++){
//     cin>>v[i];
// }
//  int p;
//  vector<int>r(32800,-1);
// vector<int>m[32800];
// queue<int>q;
// for(int i = 0; i < 32768; i++)
//     {
//         m[(i+1)%32768].push_back(i);
//         m[(i*2)%32768].push_back(i);
//     }
//     r[0] = 0;
//     q.push(0);
//      while(!q.empty())
//     {
//         p = q.front();
//         q.pop();
//         for(int tmp : m[p])
//             if(r[tmp] == -1)
//             {
//                 r[tmp] = r[p]+1;
//                 q.push(tmp);
//             }
//     }
//     for(ll i=0; i < n; i++){
//         ans[i]=r[v[i]];
//     }
// for(auto i:ans){
//     cout<<i<<" ";
// }
// cout<<endl;
    ll n;
    cin>>n;
   ll allmaxim=0;
    vector<ll> v(n);
    for(auto &p:v){
      cin>>p;
      allmaxim=max(allmaxim,p);
    }
    ll result=1e18;
    for(ll height=allmaxim;height<=allmaxim+3;++height){
      ll second=0, first=0;
      for(auto &p:v){
        second += (height-p)/2;
        first += (height-p)%2;
      }
      ll all=first+second*2;
      ll night=all/3*2;
      if(all%3==1)
        ++night;
      if(all%3==2)
        night+=2;
      result=min(result,max(first*2-1, night));
    }
    cout<<result<<endl;


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
