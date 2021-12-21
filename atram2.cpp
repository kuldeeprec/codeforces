#include<iostream>
using namespace std;
int a[100500];
int b[100500];
 
int main()
{
	
	int n;
	cin >> n;
	
	int k = 0;
	int max = 0;
	
	for ( int i=1 ; i<=n ; i++ ){
		cin >> a[i] >> b[i];
		k = k - a[i] + b[i];
		if ( k > max ){
			max = k;
		}
	}
	cout << max;
 
 
	return 0;}
