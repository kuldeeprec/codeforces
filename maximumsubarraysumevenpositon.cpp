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


void maxi(){
ll n;
cin >> n;
vector<ll>v(n);
for(ll i = 0; i < n; i++){
    cin>>v[i];
}
vector<vector<ll>>dp(n+1,vector<ll>(3));
for(ll i = 0; i < n; i++){
    dp[i+1][0]= max(dp[i+1][0],dp[i][0]+(i&1 ? 0 : v[i]));
    if(i+2<=n) dp[i+2][1]= max(dp[i+2][1],max(dp[i][0],dp[i][1])+ (i&1 ? v[i] : v[i+1]));
    dp[i+1][2]= max(dp[i+1][2],max({dp[i][0],dp[i][1],dp[i][2]})+(i&1 ? 0 : v[i]));
}
cout<<max({dp[n][0],dp[n][1],dp[n][2]})<<endl;;
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

