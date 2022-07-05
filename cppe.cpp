#include <iostream>
using namespace std;
 const int N = 1e6;
 int mod = 1e9 + 7;
int dp[N];

int main() {
	// your code goes here
	dp[0]=1;
	dp[1]=6;
	for(int i=2;i<N;i++){
		dp[i]=((((dp[i-1]+2)%mod)*2)%mod-dp[i-2])%mod;
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<dp[n-1]<<endl;
	}
	return 0;
}