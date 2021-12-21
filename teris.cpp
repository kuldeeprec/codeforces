#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
 
int main() {
    int q; cin >> q;
    for (int i = 0; i < q; ++i) {
        int n; cin >> n;
        int f; cin >> f;
        int x = f % 2;
        bool ok = 1;
        for (int i = 1; i < n; ++i) {
            int tmp; cin >> tmp;
            if (tmp % 2 != x) ok = 0;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
