
#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> dp;
int lps(vector<int>&s1, vector<int>&s2, int n1, int n2)
{
	if (n1 == 0 || n2 == 0) {
		return 0;
	}
	if (dp[n1][n2] != -1) {
		return dp[n1][n2];
	}
	if (s1[n1 - 1] == s2[n2 - 1]) {
		return dp[n1][n2] = 1 + lps(s1, s2, n1 - 1, n2 - 1);
	}
	else {
		return dp[n1][n2] = max(lps(s1, s2, n1 - 1, n2),
								lps(s1, s2, n1, n2 - 1));
	}
}


int32_t main()
{
    int m;
    cin>>m;

	vector<int> a(m);
    for(int i = 0; i < m; i++){
        cin>>a[i];
    }
	int n = m;
	dp.resize(n+1, vector<int>(n+1,-1));;
	vector<int> b(m);
    for(int i = 0; i < m; i++){
        b[i]=a[i];
    }
	reverse(b.begin(), b.end());
	cout << lps(b, a, n, n) << endl;
    
	return 0;
}


