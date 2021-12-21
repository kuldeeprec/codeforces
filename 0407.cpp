#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 3e5 + 5;
int t;
ll sum(ll x) {
    int sum = 0;
    while(x) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int main() {
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        while(__gcd(n, sum(n)) == 1)
            n++;
        cout << n << '\n';
    }
    return 0;
}
