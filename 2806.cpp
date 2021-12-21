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
const int N=2e5+5;

void maxi(){
//     ll a[N],n;
// cin >> n;
//         bool yes = true;
//         for(int i = 0;i < n;i++) {
//             cin >> a[i];
//             if(i)
//                 yes &= (a[i] == a[0]);
//         }
//         yes ? cout << n << '\n' : cout << "1\n
// ll n,x,t; 
//  cin >> n >> x >> t;
//         ll p = min(n, t / x);
//         cout << (n - p) * p + (p - 1) * p / 2 << '\n';
// ll n,q,l,r;

// cin>>n>>q;
// vector<ll>v(n+1,0);
// string s;
// cin>>s;
// for (ll i = 0; i <n; i++)
// {
//   v[i+1]= s[i]-97+v[i]+1;

// }
// while (q--)
// {
//     cin>>l>>r;
//     cout<<v[r]-v[l-1]<<endl;
// }
ll n, k, x, a[N];
vector<ll> v;
cin >> n >> k >> x;
    for(int i = 0;i < n;i++)
        cin >> a[i];
    sort(a, a + n);
    for(int i = 1;i < n;i++) {
        if(a[i] - a[i - 1] > x) {
            ll dif = a[i] - a[i - 1];
            v.push_back((dif + x - 1) / x - 1);
        }
    }
    sort(v.begin(), v.end());
    ll cnt = 0, ans = v.size() + 1;
    for(auto &i : v) {
        if(cnt + i <= k)
            cnt += i, ans--;
    }
    cout << ans;

      }




  
    
     
    


int main()
{
    kuldeepyadav12
    //     ll t;
    // cin >> t;
    // while (t--)
    // {
    //   maxi();
    // }
 maxi();
    return 0;
}
