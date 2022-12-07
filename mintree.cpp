#include <bits/stdc++.h>

using namespace std;

const int N = 200 * 1000 + 13;

int n;
int a[N], b[N];
vector<int> g[N];
set<int> vals[N];

void init(int v, int p) {
  b[v] = a[v];
  if (p != -1) b[v] ^= b[p];
  for (int u : g[v]) if (u != p)
    init(u, v);
}

int ans;

void calc(int v, int p) {
  bool bad = false;
  vals[v].insert(b[v]);
  for (int u : g[v]) if (u != p) {
    calc(u, v);
    if (vals[v].size() < vals[u].size()) vals[v].swap(vals[u]);
    for (int x : vals[u]) bad |= vals[v].count(x ^ a[v]);
    for (int x : vals[u]) vals[v].insert(x);
    vals[u].clear();
  }
  if (bad) {
    ans += 1;
    vals[v].clear();
  }
}

int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; ++i) cin >> a[i];
  for (int i = 0; i < n - 1; ++i) {
    int x, y;
    cin >> x >> y;
    --x; --y;
    g[x].push_back(y);
    g[y].push_back(x);
  }
  init(0, -1);
  calc(0, -1);
  cout << ans << '\n';
}