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
string s;
	cin >> s;
	vector<set<int>> poss(26);
	for (int i = 0; i < int(s.size()); ++i) {
		poss[s[i] - 'a'].insert(i);
	}
	
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int tp;
		cin >> tp;
		if (tp == 1) {
			int pos;
			char c;
			cin >> pos >> c;
			--pos;
			poss[s[pos] - 'a'].erase(pos);
			s[pos] = c;
			poss[s[pos] - 'a'].insert(pos);
		} else {
			int l, r;
			cin >> l >> r;
			--l, --r;
			int cnt = 0;
			for (int c = 0; c < 26; ++c) {
				auto it = poss[c].lower_bound(l);
				if (it != poss[c].end() && *it <= r) ++cnt;
			}
			cout << cnt << endl;
		}
	}
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

 
 
