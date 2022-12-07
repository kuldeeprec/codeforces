
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
#define ns()         cout << "Case #" << tc_count ++ << ": ";

void maxi(){
//   int n, H, M;
//     cin >> n >> H >> M;
//     vector<int> h(n), m(n);
//     for (int j = 0; j < n; j++){
//       cin >> h[j] >> m[j];
//     }
//     int ct = H * 60 + M;
//     int ans = INT_MAX;
//     for (int j = 0; j < n; j++){
//       int t2 = h[j] * 60 + m[j];
//       if (t2 >= ct){
//         ans = min(ans, t2 - ct);
//       } else {
//         ans = min(ans, t2 + 1440 - ct);
//       }
//     }
//     cout << ans / 60 << ' ' << ans % 60 << endl;
   
// second;
// ll n;
// cin>>n;
// vector<ll>v(n);
// for(int i =0;i<n;i++){
//     cin>>v[i];
// }
// unordered_map<ll,ll>mp;
// for(int i =n-1;i>=0;i--){
//     if(mp[v[i]]>0){
//         cout<<i+1<<endl;
//         return;
//     }
//     mp[v[i]]++;
// }
// cout<<0<<endl;

// ll n;
// cin>>n;
// ll ans=0;
// ll ans2=9;
// ll a=1;
// while(n>0){
//   if(n>=ans2){
//     ans=ans2*a+ans;
//      n=n-ans2;
//      a*=10;
//     ans2--;
//   }
//   else{
//     ans=n*a+ans;
//      n=n-ans2;
//      a*=10;
//     ans2--;
   
//      break;
//   }

 
// }
// cout<<ans<<endl;

int n;
    cin >> n;
    vector<int> a(n);
    bool any = false;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      while (a[i] % 10 != 0 && a[i] % 10 != 2) {
        a[i] += a[i] % 10;
      }
      any |= (a[i] % 10 == 0);
    }
    if (any) {
      cout << (a == vector<int>(n, a[0]) ? "Yes" : "No") << '\n';
      return;
    }
    int val = a[0] % 20;
    bool ok = true;
    for (int i = 0; i < n; i++) {
      ok &= (a[i] % 20 == val);
    }
    cout << (ok ? "Yes" : "No") << '\n';
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

 
 
