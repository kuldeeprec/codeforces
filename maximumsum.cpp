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
// split fuction in c++ mode
void maxi(){
  int n;
  cin >> n;
  vector<ll> a(n), b(n);
  for (auto& x : a) cin >> x;
  for (auto& x : b) cin >> x;
  vector<ll> pr(n + 1, 0);
  for (int i = 0; i < n; ++i)
    pr[i + 1] = pr[i] + a[i] * b[i];
  ll ans = pr[n];
  for (int c = 0; c < n; ++c) {
    ll cur = a[c] * b[c];
    for (int l = c - 1, r = c + 1; l >= 0 && r < n; --l, ++r) {
      cur += a[l] * b[r];
      cur += a[r] * b[l];
      ans = max(ans, cur + pr[l] + (pr[n] - pr[r + 1]));
    }
    cur = 0;
    for (int l = c, r = c + 1; l >= 0 && r < n; --l, ++r) {
      cur += a[l] * b[r];
      cur += a[r] * b[l];
      ans = max(ans, cur + pr[l] + (pr[n] - pr[r + 1]));
    }
  }
  cout << ans << endl;
  }


int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    // cin >> t;
    while (t--)
    {
       maxi();
    }

    return 0;
}

 
 
