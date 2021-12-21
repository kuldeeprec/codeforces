// C++ implementation of the approach
#include<bits/stdc++.h>
using namespace std;
int getPairs()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    

	set<int> visited1;

	
	int un[n] ;

	
	un[n - 1] = 0;

	
	int count = 0;
	
	for (int i = n - 1; i > 0; i--)
	{

		
		auto pos = visited1.find(a[i]);
		if (pos != visited1.end())
			un[i - 1] = count;
		else
			un[i - 1] = ++count;

		// Set to true if a[i] is visited
		visited1.insert(a[i]);
	}

	set<int>visited2;

	// To know which a[i] is already visited
	int answer = 0;
	for (int i = 0; i < n - 1; i++)
	{

		// If visited, then the pair would
		// not be unique
		auto pos = visited2.find(a[i]);
		if (pos != visited2.end())
			continue;

		// Calculating total unqiue pairs
		answer += un[i];

		// Set to true if a[i] is visited
		visited2.insert(a[i]);
	}
	return answer;
}

// Driver code
int main()
{
	
}


