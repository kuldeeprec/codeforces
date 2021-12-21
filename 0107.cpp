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
ll n;
deque<pair<ll, ll>> q;
bool cmp(pair<ll, ll> x, pair<ll, ll> y) {
    if(x.second != y.second)
        return x.second < y.second;
    return x.first > y.first;
}
void maxi(){
//     ll n,x,high=0;
// vector<ll>ans;
//     cin >> n;
//     for(int i=0;i<n;i++)
//     {
//         cin >> x;
//         if(x == 1 && high)
//             ans.pb(high),high = 0;
//         high = max(high,x);
//     }
//     ans.pb(high);
//     cout << ans.size() << endl;
//     for(auto i:ans)
//         cout << i << " ";

  cin >> n;
    for(int i = 0;i < n;i++) {
        ll a, b;
        cin >> a >> b;
        q.push_back({a, b});
    }
    sort(q.begin(), q.end(), cmp);
    
    ll cnt = 0, ans = 0;
    while(q.size()) {
        if(q.back().first + cnt >= q.front().second) {
            ll tmp = q.front().second - cnt;
            cnt += tmp, ans += tmp * 2;
            q.back().first -= tmp;
            if(q.back().first == 0)
                q.pop_back();
            while(q.size() && q.front().second <= cnt) {
                ans += q.front().first;
                cnt += q.front().first;
                q.pop_front();
            }
        } else {
            cnt += q.back().first;
            ans += q.back().first * 2;
            q.pop_back();
        }
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
