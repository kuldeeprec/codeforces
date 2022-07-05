//kuldeep yadav rajkiya engineering college sonbhadra
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
// Google
ll tc_count = 1;
#define ns()         cout << "Case #" << tc_count ++ << ": ";
// split fuction in c++ mode
const int INF = 2e9 + 1;
void maxi(){
 int n, k;
	cin >> n >> k;
	vector<int> times[4];
	vector<int> sums[4];
	for (int i = 0; i < n; ++i) {
		int t, a, b;
		cin >> t >> a >> b;
		times[a * 2 + b].push_back(t);
	}
	for (int i = 0; i < 4; ++i) {
		sort(times[i].begin(), times[i].end());
		sums[i].push_back(0);
		for (auto it : times[i]) {
			sums[i].push_back(sums[i].back() + it);
		}
	}
	
	int ans = INF;
	for (int cnt = 0; cnt < min(k + 1, int(sums[3].size())); ++cnt) {
		if (k - cnt < int(sums[1].size()) && k - cnt < int(sums[2].size())) {
			ans = min(ans, sums[3][cnt] + sums[1][k - cnt] + sums[2][k - cnt]);
		}
	}
	
	if (ans == INF) ans = -1;
	cout << ans << endl;
  }


int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    // cin >> t;
    while (t--)
    {
       maxi();
    }

    return 0;
}
