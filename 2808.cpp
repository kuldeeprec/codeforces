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
const int N = 1e5 + 5;
const int mod = 1000000007;
pair<ll, ll> a[N];
ll ipow(ll x, ll y)
{
    ll ret = 1;
    for (; y; y >>= 1)
    {
        if (y & 1)
            (ret *= x) %= mod;
        (x *= x) %= mod;
    }
    return ret;
}
void maxi()
{
    //     ll n,k;
    //   cin >> n >> k;
    //         for(int i = 0;i < n;i++)
    //             cin >> a[i].first, a[i].second = i;
    //         int id[n + 5] = {}, G = 0;
    //         for(int i = 0;i < n;i++) {
    //             id[i] = ++G;
    //             int j = i + 1;
    //             while(j < n && a[j].first > a[j - 1].first)
    //                 id[j] = G, j++;
    //             i = j - 1;
    //         }
    //         sort(a, a + n);
    //         int cnt = 1;
    //         for(int i = 1;i < n;i++)
    //             if(id[a[i].second] != id[a[i - 1].second])
    //                 cnt++;
    //         if(cnt <= k)
    //             cout << "YES\n";
    //         else
    //             cout << "NO\n";

    ll n, k;

    cin >> n >> k;

    ll ret = 0, x = 1, y = (mod + ipow(2, n - 1) + 2 * (n & 1) - 1) % mod;
    for (int i = 0; i < k; i++)
    {
        (ret += !(n & 1) * x * ipow(2, (k - i - 1) * n)) %= mod;
        (x *= y) %= mod;
    }
    (ret += x) %= mod;

    cout << ret << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        maxi();
    }

    return 0;
}