
 //kuldeep yadav rajkiya engineering college sonbhadra
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long ll;
using namespace std;
const int N = 2e5 + 5;
int n, m, q, a[N], seg[N << 2];
void build(int node, int s, int e) {
    if(s == e) {
        seg[node] = a[s];
        return;
    }
    int mid = s + e >> 1;
    build(node << 1, s, mid);
    build(node << 1 | 1, mid + 1, e);
    seg[node] = min(seg[node << 1], seg[node << 1 | 1]);
}
int query(int node, int s, int e, int l, int r) {
    if(s > r || e < l)
        return 2e9;
    if(l <= s && e <= r)
        return seg[node];
    int mid = s + e >> 1;
    return min(query(node << 1, s, mid, l, r), query(node << 1 | 1, mid + 1, e, l, r));
}
int main() {
      kuldeepyadav12
    cin >> n >> m;
    for(int i = 1;i <= m;i++) {
        cin >> a[i];
        a[i] = n - a[i];
    }
    build(1, 1, m);
    cin >> q;
    while(q--) {
        int srcx, srcy, disx, disy, k;
        cin >> srcx >> srcy >> disx >> disy >> k;
        srcx = n - srcx + 1, disx = n - disx + 1;
        if(abs(srcx - disx) % k == 0 && abs(srcy - disy) % k == 0) {
            srcx %= k;
            if(srcx == 0)
                srcx = k;
            if(srcy > disy)
                swap(srcy, disy);
            if(query(1, 1, m, srcy, disy) >= srcx)
                cout << "YES\n";
            else
                cout << "NO\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}