
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
int n, m;
	cin >> n >> m;
	int res = 1 ;
	vector<int> a;
	for(int i = 0; i < n; i++){
		int b;
		cin >> b;
		for(int x : a) res = (res * (abs(b - x) % m)) % m;
		a.push_back(b);
		if(res == 0) break;
	}
	cout << res << '\n';

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

 
 
