#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N = 1e5 + 5;
int t, n ,m, x, ans[N];
pair<int, int> a[N];
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--) {
        cin >> n >> m >> x;
        for(int i = 0;i < n;i++)
            cin >> a[i].first, a[i].second = i;
        sort(a, a + n, greater<>());
        int j = 1, d = 1;
        for(int i = 0;i < n;i++) {
            ans[a[i].second] = j;
            if((d == 1 && j == m) || (d == -1 && j == 1)) {
                d *= -1;
                continue;
            }
            j += d;
        }
        cout << "YES\n";
        for(int i = 0;i < n;i++)
            cout << ans[i] << " ";
        cout << '\n';
    }
    return 0;
}