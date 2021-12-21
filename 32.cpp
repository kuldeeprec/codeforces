// C++ program to return the number of
// square submatrices with all 1s
#include <bits/stdc++.h>
using namespace std;

#define n 3
#define m 3

// Function to return the number of
// square submatrices with all 1s
int countSquareMatrices(int a[][m],
						int N, int M)
{
	// Initialize count variable
	int count = 0;

	for (int i = 1; i < N; i++) {
		for (int j = 1; j < M; j++) {
			// If a[i][j] is equal to 0
	

			// Calculate number of
			// square submatrices
			// ending at (i, j)
			a[i][j] = min(min(a[i - 1][j],
							a[i][j - 1]),
						a[i - 1][j - 1])
					+ 1;
		}
	}

	// Calculate the sum of the array
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			count += a[i][j];

	return count;
}

// Driver code
int main()
{
	int arr[][m] = { { 0, 0, 0 },
					{ 0, 0, 0 },
					{ 0, 0, 0 } };

	cout << countSquareMatrices(arr, n, m);

	return 0;
}
