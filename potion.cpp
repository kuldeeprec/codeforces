#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N = 1e6 + 5;
int t, k;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--) {
        cin >> k;
        int g = __gcd(k, 100 - k);
        cout << k / g + (100 - k) / g << '\n';
    }
    return 0;
}