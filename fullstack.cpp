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

ll log_a_to_base_b(ll a, ll b)
{
	return log(a) / log(b);
}
ll HighestPower(ll N, ll M)
{
	ll start = 0, end = log_a_to_base_b(N, M);
	ll ans = 0;
	while (start <= end) {

		ll mid = start + (end - start) / 2;
		ll temp = (ll)(pow(M, mid));

		if (N % temp == 0) {
			ans = mid;
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	return ans;
}
void maxi(){

  ll n,q;
  cin>>n>>q;
  vector<ll>v(n);
  for(ll i=0;i<n;i++){
      cin>>v[i];
  }
  vector<ll>dp(n+1);
  dp[0]=1;
  ll product=1;
  for(ll i=0;i<n;i++){
     product*=v[i];
     dp[i+1]=product;
  }
  
  while(q--){
      ll  l,r,x;
      cin>>l>>r>>x;
      ll number= dp[r]/dp[l-1];
      cout<<HighestPower(number,x)<<endl;
  }

}

int main()
{
    kuldeepyadav12
        ll t;
   
    cin >> t;
   
    while (t--)
    {
       maxi();
    }

    return 0;
}
