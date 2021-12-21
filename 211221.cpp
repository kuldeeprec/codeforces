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
#define sz(X) (int)X.size()
// Google
int tc_cnt = 1;
#define ns()               cout << "Case #" << tc_cnt ++ << ": ";
 

int modpow(int a, int b, int m = mod) {
    a = a & m; int ans = 1;
    while (b) {
        if (b & 1) { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}

int mul(int a, int b) {
    int ans = 0;
    while (b) {
        if (b & 1) {
            ans += a;
        }
        b = b >> 1;
        a += a;
        if (a > INT_MAX) {
            a = INT_MAX;
        }
        if (ans > INT_MAX) {
            ans = INT_MAX;
        }
    }
    return ans;
}
void maxi(){
//   string s;
//   cin>>s;
//   int cnt = 0;
//     for (int j = 0; j < s.length(); j++){
//       if (s[j] == 'N'){
//         cnt++;
//       }
//     }
//     if (cnt == 1){
//       cout << "NO" << endl;
//     } else {
//       cout << "YES" << endl;
//     }
// ll n,m;
// cin >> n >> m;
	
// 	ll f[2] = {0};
// 	for(int i = 0; i < 2; i++)
// 	for(int j = 0; j < 2; j++){
// 		ll x, y, z;
// 		cin >> x >> y;
// 		for(int l = 1; l < x; l++) cin >> z;
// 		f[i] = max(f[i], z - y);
// 	}
	
// 	ll ret = max(f[0] * m, f[1] * n);
	
// 	cout << ret << endl;
///problem 3

 int n, k, x;
    cin >> n >> k >> x;
    x--;
    string s;
    cin >> s;
    vector<int> cnt;
    int c = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a') {
            cnt.pb(c);
            c = 0;
        } else {
            c ++;
        }
    }
    cnt.pb(c);

    vector<int> m(sz(cnt));
    m[sz(m) - 1] = 1;
    for (int i = sz(cnt) - 2; i >= 0; --i) {
        m[i] = mul(m[i + 1], k * cnt[i + 1] + 1);
    }
    vector<int> ans(sz(cnt));
    for (int i = 0; i < sz(cnt); ++i) {
        ans[i] = x / m[i];
        x %= m[i];
    }
    for (int i = 0; i < sz(cnt); ++i) {
        for (int j = 0; j < ans[i]; ++j) {
            cout << 'b';
        }
        if (i + 1 != sz(cnt)) {
            cout << 'a';
        }
    }
    cout << endl;
}

int main()
{
    kuldeepyadav12
        ll t;
    cin >> t;
    while (t--)
    {
       maxi();
    }

    return 0;
}
