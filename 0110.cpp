#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 5;
int t, n, a[N];
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--) {
        cin >> n;
        int ans[n + 5] = {};
        stack<int> st;
        for(int i = 0;i < n;i++) {
            cin >> a[i];
            int x = a[i];
            st.push(i);
            while(st.size() && x--) {
                if(i - st.top() + 1 > a[i])
                    break;
                ans[st.top()] = 1;
                st.pop();
            }
        }
        for(int i = 0;i < n;i++)
            cout << ans[i] << " ";
        cout << '\n';
    }
    return 0;
}