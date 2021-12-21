#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int mod = 1e9 + 7;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi()
{  
//       int n, q, cnt[55];
// set<pair<int, int>> st[55];

//     cin >> n >> q;
//     for(int i = 1;i <= n;i++) {
//         int x;
//         cin >> x;
//         st[x].insert({i, 0});
//     }
//     for(int i = 1;i <= q;i++) {
//         int t;
//         cin >> t;
//         auto x = st[t].begin();
//         cout << x->first + cnt[t] << " ";
//         cnt[t] = 0;
//         for(int j = 1;j <= 50;j++) {
//             if(st[j].empty() || j == t)
//                 continue;
//             if(st[j].begin()->first < x->first || (st[j].begin()->first == x->first && st[j].begin()->second > x->second))
//                 cnt[j]++;
//         }
//         st[t].erase(x);
//         st[t].insert({1, i});
//     }
ll n;
cin>>n;
  ll q;
  cin>>q;
  ll pos[55];
  for(int i=1;i<=54;i++) pos[i]=LLONG_MAX;
  for(int i=1;i<=n;i++){
    ll x;cin>>x;
    if(pos[x]==LLONG_MAX) pos[x]=i;
  }
  for(int i=0;i<q;i++){
    ll x;
    cin>>x;
    cout<<pos[x]<<" ";
    for(int i=1;i<=50;i++){
      if(pos[i]<pos[x]) pos[i]++;
    }
    pos[x]=1;
  }
  return;

    }
     
       
  
  

 
    int main()
    {
        kuldeepyadav12
        // ll t;
        // cin>>t;
        // while(t--)
            maxi();
        
        return 0;
    }