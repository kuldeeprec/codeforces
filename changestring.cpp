//kuldeep yadav rajkiya engineering college sonbhadra
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define S second
#define F first
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    s = "2" + s;

    vector<vector<vector<pair<int, int>>>> dp(n + 1, vector<vector<pair<int, int>>> (2, vector<pair<int, int>> (2)));

    dp[1][1][s[1] - '0'] = {0, 1};
    dp[1][1][(s[1] - '0' + 1) % 2] = {1, 1};

    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < 2; j++) {
            bool u = s[i] - '0';

            dp[i][j][u] = dp[i - 1][(j + 1) % 2][u];

            if (dp[i - 1][(j + 1) % 2][u] > dp[i - 1][0][!u] and j == 1) {
                dp[i][1][u].F = dp[i - 1][0][!u].F;
                dp[i][1][u].S = dp[i - 1][0][!u].S + 1;
            }

            dp[i][j][!u].F = dp[i - 1][(j + 1) % 2][!u].F + 1;
            dp[i][j][!u].S = dp[i - 1][(j + 1) % 2][!u].S;

            if (dp[i - 1][(j + 1) % 2][!u] > dp[i - 1][0][u] and j == 1) {
                dp[i][j][!u].F = dp[i - 1][0][u].F + 1;
                dp[i][j][!u].S = dp[i - 1][0][u].S + 1;
            }
        }
    }

    if (dp[n][0][0] < dp[n][0][1]) {
        cout << dp[n][0][0].F << " " << dp[n][0][0].S;
    }
    else {
        cout << dp[n][0][1].F << " " << dp[n][0][1].S;
    }
}

signed main()
{
   kuldeepyadav12

    int t;
    cin >> t;

    while (t--) {
        solve();
        cout << endl;
    }

    return 0;
}