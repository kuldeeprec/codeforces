#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       long long n, k;
	cin >> n >> k;
	if (n >= k && (n + k) % 2 == 0)cout << 0 << "\n";
	else if (n >= k)cout << 1 << "\n";
	else cout << k - n << "\n";
 
    }
    return 0;
}
