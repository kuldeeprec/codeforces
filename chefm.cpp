#include <iostream>
using namespace std;
#define ll long long 
 
// `M × N` matrix
#define M 5
#define N 5
 
// to store matrix coordinates
typedef pair<int, int> Point;
 
// Function to find the maximum sum `k × k` submatrix
Point findMaxSumSubMatrix(int mat[][N], int k)
{
    // preprocess the input matrix such that `sum[i][j]` stores
    // sum of elements in the matrix from `(0, 0)` to `(i, j)`
    int sum[M][N];
 
    sum[0][0] = mat[0][0];
 
    // preprocess the first row
    for (int j = 1; j < N; j++) {
        sum[0][j] = mat[0][j] + sum[0][j - 1];
    }
 
    // preprocess the first column
    for (int i = 1; i < M; i++) {
        sum[i][0] = mat[i][0] + sum[i - 1][0];
    }
 
    // preprocess the rest of the matrix
    for (int i = 1; i < M; i++)
    {
        for (int j = 1; j < N; j++)
        {
            sum[i][j] = mat[i][j] + sum[i - 1][j] + sum[i][j - 1]
                - sum[i - 1][j - 1];
        }
    }
 
    
 
    int total, max = INT_MIN;
    Point p;
 
    // find the maximum sum submatrix
 
    // start from cell `(k-1, k-1)` and consider each
    // submatrix of size `k × k`
    for (int i = k - 1; i < M; i++)
    {
        for (int j = k - 1; j < N; j++)
        {
            // Note that `(i, j)` is the bottom-right corner coordinates of the
            // square submatrix of size `k`
 
            total = sum[i][j];
            if (i - k >= 0) {
                total = total - sum[i - k][j];
            }
 
            if (j - k >= 0) {
                total = total - sum[i][j - k];
            }
 
            if (i - k >= 0 && j - k >= 0) {
                total = total + sum[i - k][j - k];
            }
 
            if (total > max) {
                max = total, p = make_pair(i, j);
            }
        }
    }
 
    // returns coordinates of the bottom-right corner of the submatrix
    return p;
}
 
int main()
{
   
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,m,k,i,j,sum=0,total=0,sub=0,count=0;
    cin>>n>>m>>k;
    ll a[n][m];
        for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            cin>>a[i][j];
            if (a[i][j]>=k)
            {
                count++;
            }
            
            
        }
        
    }
    
    // submatrix size
    int g = 2;
 
    // `p` contains bottom-right corner coordinates of the submatrix
    Point p = findMaxSumSubMatrix(a, g);
 
    }
 
    
 
    return 0;
}