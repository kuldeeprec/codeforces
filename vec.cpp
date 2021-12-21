// CPP program
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n = 4;
	int m = 5;

	/*
	Create a vector containing "n"
	vectors each of size "m".
	*/
	vector<int>vec(m);

	
		for(int j = 0; j < m; j++)
		{
			cin>>vec[j];
		}
	

	
		for(int j = 0; j < m; j++)
		{
			cout << vec[j];
		}
		
	
	
return 0;
}
