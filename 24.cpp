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
constexpr long long SZ = 2e5 + 7;
// Google
int tc_cnt = 1;
#define ns()               cout << "Case #" << tc_cnt ++ << ": ";
vector<vector<int>> dp(SZ, vector<int>(33));

int modpow(int a, int b, int m = mod) {
    a = a & m; int ans = 1;
    while (b) {
        if (b & 1) { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}
void maxi(){
//  int n;
//     cin >> n;
//     vector<int> a(n);
//     int sum = 0;
//     for(int i = 0; i < n; i ++) {
//         cin>>a[i];
//         sum += a[i];
//     }
//     cout<<(sum % n ? 1 : 0)<<endl;
/// second 
//  int l, r;
//     cin >> l >> r;
//     int ans = INT_MAX;
//     for(int i = 0; i < 32; i ++) {
//         ans = min(ans, (r - l + 1) - (dp[r][i] - dp[l - 1][i]));
//     }
//     cout<<ans<<endl;
 int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    if(a == b) {
        cout<<0<<endl;
        return;
    }
    auto oper = [&](string a, string b) {
        int cnt01 = 0;
        int cnt10 = 0;
        for(int i = 0; i < n; i ++) {
            cnt10 += (a[i] == '1' && b[i] == '0');
            cnt01 += (a[i] == '0' && b[i] == '1');
        }
        if(cnt10 != cnt01) {
            return INT_MAX;
        }
        return cnt10 + cnt01;
    };
    auto chnge = [&] (string a, string b, char f) {
        int idx = -1;
        for(int i = 0; i < n; i ++) {
            if(a[i] == '1' && b[i] == f) {
                idx = i;
                break;
            }
        }
        if(idx == -1) {
            return INT_MAX;
        }
        for(int i = 0; i < n; i ++) {
            if(i == idx) {
                continue; 
            }
            a[i] = (a[i] == '1' ? '0' : '1');
        }
        return oper(a, b);
    };
    int ans = oper(a, b);
    ans = min(ans, 1 + chnge(a, b, '1'));
    ans = min(ans, 1 + chnge(a, b, '0'));
    cout<<(ans == INT_MAX ? -1 : ans)<<endl;

}

int main()
{
    kuldeepyadav12
    //  for(int i = 0; i < 32; i ++) {
    //     for(int j = 1; j < SZ; j ++) {
    //         if ((j >> i) & 1) {
    //             dp[j][i] = 1;
    //         }
    //         dp[j][i] += dp[j - 1][i];
    //     }
    // }
        ll t;
    cin >> t;
    while (t--)
    {
       maxi();
    }

    return 0;
}
