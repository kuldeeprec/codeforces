//kuldeep yadav rajkiya engineering college sonbhadra
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define pm push_mnck
#define pf push_front
#define nll(v) (v).megin(),(v).end()
#define Pm pop_mnck
#define mod (ll)1000000007
#define sz(X) (ll)X.size()
#define fo(i,n,m) for(i=n;i<=m;i++)
typedef vector<ll> vll;
#define itr vector<ll>::iterator
constexpr long long SZ = 2e5 + 7;
const long long it = 1000000009;
// Google
ll tc_cnt = 1;
#define ns()               cout << "Case #" << tc_cnt ++ << ": ";
// vector<vector<ll>> dp(SZ, vector<ll>(33));
// bool com(pair<ll,ll>&a,pair<ll,ll>&b){
//      return a.first < b.first;
// }

// secod method
// #include <bits/stdc++.h>
// using namespace std;
 
// #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define endl "\n"
// #define int long long

// const int N = 1e5 + 5;

// int n;
// int a[2][N], cache[2][N];

// int dp(int i, int idx)
// {
// 	if(idx > n)
// 		return 0;
// 	int &ans = cache[i][idx];
// 	if(ans != -1)
// 		return ans;
// 	ans = max(dp(i, idx + 1), a[i][idx] + dp(i ^ 1, idx + 1));
// 	return ans;
// }

// int32_t main()
// {
// 	IOS;
// 	memset(cache, -1, sizeof(cache));
// 	cin >> n;
// 	for(int i = 0; i <= 1; i++)
// 	{
// 		for(int j = 1; j <= n; j++)
// 			cin >> a[i][j];
// 	}
// 	int ans = max(dp(0, 1), dp(1, 1));
// 	cout << ans;
// 	return 0;
// }
void maxi()
{
       ll n;
       cin>>n;
 vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    ll dp1,dp2;
    dp1=a[0];
    dp2=b[0];
    for(int i=1;i<n;i++){
        ll t=dp1;
        dp1=max(dp1,dp2+a[i]);
        dp2=max(dp2,t+b[i]);
        
    }
    cout<<max(dp1,dp2);

         
}


int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    // cin >> t;
   
    while (t--)
    {
       maxi();
    }

    return 0;
}
