//kuldeep yadav rajkiya engineering college sonbhadra
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
// Google
ll tc_count = 1;
#define ns()         cout << "Case #" << tc_count ++ << ": ";
// split fuction in c++ mode
int N, K, z;

ll helper(vector<ll>&a,ll i,ll k,ll zz,vector<vector<ll>>&dp){
      if(i>=N || k==0 ||i<0){
        return 0;
      }
      if(dp[i][zz]!=-1){
         return dp[i][zz];
      }
      ll ans=0;
      if(i<N){
        ans = max(ans,a[i]+helper(a,i+1,k-1,zz,dp));
       
      }
     
      if(zz>0&&i>=0){
        ans= max(ans,a[i]+helper(a,i-1,k-1,zz-1,dp));
      }
      dp[i][zz]=ans;
      return ans;

}

void maxi(){
//   ll n,k;
//   cin>> n >> k;
  
//   string s;
//   cin>>s;
//   sort(s.begin(), s.end());
//   if(s[0]!=s[k-1]){
//       cout<<s[k-1]<<endl;
//       return;
//   }
//   cout<<s[0];
//   if(s[k]!=s[n-1]){
//       for(int i=k;i<n;i++){
//           cout<<s[i];
//       }
//   }
//   else{
//       for(int i=0;i<((n-1)/k);i++){
//           cout<<s[n-1];
//       }
//   }
//   cout<<endl;
  
    cin >> N >> K >> z;
    vector<ll> a(N);
    for (int j = 0; j < N; j++){
      cin >> a[j];
    }
  vector<vector<ll>>dp(100004,vector<ll>(7,-1));
   cout<<a[0]+helper(a,1,K,z,dp)<<endl;


  // int n;
	// cin >> n;
	// vector<ll> a(n);
	// for(int i = 0; i < n; i++){
	// 	cin >> a[i];
	// }
	// if(n == 1){
	// 	cout << 1 << ' ' << 1 << '\n';
	// 	cout << 0 << '\n';
	// 	cout << 1 << ' ' << 1 << '\n';
	// 	cout << 0 << '\n';
	// 	cout << 1 << ' ' << 1 << '\n';
	// 	cout << -a[0] << '\n';		
	// } else {
	// 	cout << 2 << ' ' << n << '\n';
	// 	for(int i = 1; i < n; i++){
	// 		cout << (n-1) * a[i] << ' ';
	// 	}
	// 	cout << '\n';
	// 	cout << 1 << ' ' << n << '\n';
	// 	for(int i = 0; i < n; i++){
	// 		cout << -n * a[i] << ' ';
	// 	}
	// 	cout << '\n';
	// 	cout << 1 << ' ' << 1 << '\n';
	// 	cout << (n-1) * a[0] << '\n';
	// }
  }
  
int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    cin >> t;
   
    while (t--)
    {
       maxi();
    }

    return 0;
}

