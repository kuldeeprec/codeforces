// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
#define ll long long 

#define z = 5
// Function to find the count of submatrix
// whose sum is X


// Driver Code
int main()
{
    ll t;
    cin>>t;
    while(t--){
     ll n,m,X,i,j,sum=0,total=0,sub=0;
    cin>>n>>m>>X;
    ll arr[n][m];
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
	ll dp[n + 1][m + 1];

	memset(dp, 0, sizeof(dp));

	// Copying arr to dp and making
	// it indexed 1
	for (ll i = 0; i < n; i++) {

		for (ll j = 0; j < m; j++) {

			dp[i + 1][j + 1] = arr[i][j];
		}
	}

	// Precalculate and store the sum
	// of all rectangles with upper
	// left corner at (0, 0);
	for (ll i = 1; i <= n; i++) {
		for (ll j = 1; j <= m; j++) {

			// Calculating sum in
			// a 2d grid
			dp[i][j] += dp[i - 1][j]
						+ dp[i][j - 1]
						- dp[i - 1][j - 1];
		}
	}

	// Stores the answer
	ll cnt = 0;

	for (ll i = 1; i <= n; i++) {

		for (ll j = 1; j <= m; j++) {

			// Fix upper left corner
			// at {i, j} and perform
			// binary search on all
			// such possible squares

			// Minimum length of square
			ll lo = 1;

			// Maximum length of square
			ll hi = min(n - i, m - j) + 1;

			// Flag to set if sub-square
			// with sum X is found
			bool found = false;

			while (lo <= hi) {
				ll mid = (lo + hi) / 2;

				// Calculate lower
				// right index if upper
				// right corner is at {i, j}
				ll ni = i + mid - 1;
				ll nj = j + mid - 1;

				// Calculate the sum of
				// elements in the submatrix
				// with upper left column
				// {i, j} and lower right
				// column at {ni, nj};
				ll sum = dp[ni][nj]
						- dp[ni][j - 1]
						- dp[i - 1][nj]
						+ dp[i - 1][j - 1];

				if (sum >= X) {

					// If sum X is found
					if (sum = X) {
						found = true;
					}

					hi = mid - 1;

					// If sum > X, then size of
					// the square with sum X
					// must be less than mid
				}
				else {

					// If sum < X, then size of
					// the square with sum X
					// must be greater than mid
					lo = mid + 1;
				}
			}

			// If found, increment
			// count by 1;
			if (found == true) {
				cnt++;
			}
		}
	}
	cout << cnt
		<< endl;
    return 0;
    }
}
