// C++ program to check whether given
// matrix is a Toeplitz matrix or not
#include <bits/stdc++.h>
using namespace std;

bool isToeplitz(vector<vector<int>> matrix)
{
	
	// row = number of rows
	// col = number of columns
	int row = matrix.size();
	int col = matrix[0].size();
	
	// HashMap to store key,value pairs
	map<int, int> Map;
	
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			int key = i - j;
			
			// If key value exists in the hashmap,
			if (Map[key])
			{
				
				// We check whether the current
				// value stored in this key
				// matches to element at current
				// index or not. If not, return
				// false
				if (Map[key] != matrix[i][j])
					return false;
			}
			
			// Else we put key,value pair in hashmap
			else
			{
				Map[i - j] = matrix[i][j];
			}
		}
	}
	return true;
}

// Driver code
int main()
{
  int n,m;
  cin>>n>>m;
	vector<vector<int>> arr(n,vector<int>(m));
  for(int i=0;i<n;i++){
    for(int j = 0; j < m; j++){
       cin>>arr[i][j];
    }
  }
		
	// Function call
	string result = (isToeplitz(arr)) ? "Yes" : "No";
	
	cout << result;
	
	return 0;
}

// This code is contributed by divyesh072019
