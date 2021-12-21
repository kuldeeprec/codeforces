#include<bits/stdc++.h>
using namespace std;
#define ll long long 


// Function to create Prefix sum
// matrix from the given matri
void createTable(ll **mtrx,
	ll k, ll p, ll **dp,ll n,ll m)
{
	// Store first value in table
	dp[0][0] = mtrx[0][0];
	
	// Initialize first row of matrix
	for (ll j = 1; j < n; j++) {
		dp[0][j] = mtrx[0][j] +
				dp[0][j - 1];
	}
	
	// Initialize first coloumn of matrix
	for (ll i = 1; i < m; i++) {
		dp[i][0] = mtrx[i][0] +
				dp[i - 1][0];
	}
	
	// Initialize rest table with sum
	for (ll i = 1; i < n; i++) {
		for (ll j = 1; j < m; j++) {
			dp[i][j] = mtrx[i][j] +
			dp[i - 1][j] + dp[i][j - 1] -
						dp[i - 1][j - 1];
		}
	}
}

// Utility Function to count the submatrix
// whose sum is greater than the S
ll countSubMatrixUtil(ll **dp,
						ll k, ll p,ll n,ll m)
{
	ll count = 0;
	ll subMatSum = 0;
	
	// Loop to iterate over all the
	// possible positions of the
	// given matrix mat[][]
	for (ll i = k - 1; i < n; i++) {
		for (ll j = k - 1; j < m;
								j++) {
			if (i == (k - 1) || j == (k - 1)) {
				
				// Condition to check, if K x K
				// is first sub matrix
				if (i == (k - 1) && j == (k - 1)) {
					subMatSum = dp[i][j];
				}
				// Condition to check sub-matrix
				// has no margin at top
				else if (i == (k - 1)) {
					subMatSum = dp[i][j] - dp[i][j - k];
				}
				// Condition when sub matrix
				// has no margin at left
				else {
					subMatSum = dp[i][j] - dp[i - k][j];
				}
			}
			// Condtion when submatrix has
			// margin at top and left
			else {
				subMatSum = dp[i][j] - dp[i - k][j] -
					dp[i][j - k] + dp[i - k][j - k];
			}
			
			// Increament count, If sub matrix
			// sum is greater than S
			if (subMatSum >= p) {
				count++;
			}
		}
	}
	return count;
}
// Function to count submatrix of
// size k x k such that sum if
// greater than or equal to S
ll countSubMatrix(ll **mtrx, ll k, ll p,ll n,ll m)
{
	ll **dp=(ll**)malloc((n*m)*(sizeof(ll)));
     
	
	// For loop to initialize prefix sum
	// matrix with zero, initially
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			dp[i][j] = 0;
		}
	}
	
	// Function to create the
	// prefix sum matrix
	createTable(mtrx, k, p, dp,n,m);
	return countSubMatrixUtil(dp, k, p,n,m);
}

// Driver Code
int main()
{  ll n,m,p,i,j,count=0;
  cin>>n>>m>>p;
    ll **mtrx=(ll**)malloc((n*m)*sizeof(ll));
	for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            cin>>mtrx[i][j];
            if (mtrx[i][j]>=p)
            {
                count++;
            }
            
            
        }
        
    }
	ll k = 3;



	cout << countSubMatrix(mtrx, k, p,n,m);
   
	return 0;
}
