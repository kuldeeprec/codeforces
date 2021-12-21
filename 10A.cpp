#include <bits/stdc++.h>
using namespace std;
const int h = 1e5 + 5;
const int mod = 1e9 + 7;
const int N=2010;
#define ll long long
#define F first
#define S second
#define pb push_back
#define pf push_front
#define Pb pop_back
#define Pf pop_front
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int MAX = 1000001;

void maxi(){
// ll n,i,count=0,c=0,d=0,e=0;
// cin>>n;
// ll a[n];
// vector<ll>v;
// vector<ll>x;
// vector<ll>y;
// for(ll i=0;i<n;i++){
//     cin>>a[i];
//     if(a[i]==1){
//         v.push_back(i+1);
//         c++;
//     }
//    else if(a[i]==2){
//         x.push_back(i+1);
//         d++;
//     }
//    else{
//        y.push_back(i+1);
//        e++;
//    }
// }
// count=min(min(c,d),e);
// cout<<count<<endl;
//  for(ll i=0;i<count;i++){
//       cout<<v[i]<<" "<<x[i]<<" "<<y[i]<<endl;
//     }

    // ll n,x;
    // cin >> n;
    // map<ll,deque<ll>>mp;
    // for(int i =0;i<n;i++) {
    //     cin >> x;
    //     mp[x].pb(i+1);
    // }
    // ll cnt= 5000;
    // if(mp.size()<3)return cout << 0,0;
    // for(auto i:mp) {
    //     ll tmp = i.S.size();
    //     cnt = min(cnt,tmp);
    // }
    // cout << cnt << endl;
    // while(cnt--) {
    //     cout << mp[1].front() << ' ' << mp[2].front() << ' ' << mp[3].front() << endl;
    //     mp[1].Pf(),mp[2].Pf(),mp[3].Pf();
   // ll n,c=0,d=0;
    // cin>>a>>b;
    // if(a>=b){
    //     if(2*b>=a){
    //     d=2*b;
    //     d=d*d;
    //     cout<<d<<endl;}
    //     else
    // {
    //     d=a*a;
    //     cout<<d<<endl;
    // }
    
    // }
    //  if(b>a){
    //     if(2*a>=b){
    //     d=2*a;
    //     d=d*d;
    //     cout<<d<<endl;}
    //     else
    // {
    //     d=b*b;
    //     cout<<d<<endl;
    // }
    
    // }

   
    //  int t , n , a[55] , b[55];
    
    //     cin >> n;
    //     int mn1 = 1e9 , mn2 = 1e9;
    //     for(int i = 0;i < n;i++) {
    //         cin >> a[i];
    //         mn1 = min(mn1 , a[i]);
    //     }
    //     for(int i = 0;i < n;i++) {
    //         cin >> b[i];
    //         mn2 = min(mn2 , b[i]);
    //     }
    //     ll ans = 0;
    //     for(int i = 0;i < n;i++)
    //         ans += max(a[i] - mn1 , b[i] - mn2);
    //     cout << ans << '\n';
    ll n,e=0,o=0;
    cin>>n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
      cin>>a[i];
      if(a[i]%2==0){
          e++;
      }
      else
      {
          o++;
      }
      
    }
    int flag=1;
    if (e < o || (e - o) > 1)
            flag = 0;
    ll k=0;
    for (ll i = 0; i < n; i++)
    {
      
      if(a[i]%2!=i%2){
          k++;
      }
      
      
    }
    if(flag){
        cout<<k/2<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    
    
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
