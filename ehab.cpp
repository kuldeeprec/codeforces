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

void maxi(){
	int n;
	cin >> n;
	vector<int> a(n + 1);
	vector<bool> cnt(n + 1);
	for (int i = 1; i <= n; ++i ){
		cin >> a[i];
		cnt[a[i]] = true;
	}
	
	int cur = 1;
	for (int i = 1; i <= n; ++i) {
		while (cnt[cur]) {
			++cur;
		}
		if (a[i] != a[i - 1]) {
			cout << a[i - 1] << ' ';
		} else {
			cout << cur++ << ' ';
		}
	}
	cout << '\n';

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

 
 
