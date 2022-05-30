//kuldeep yadav,Rajkiya engineering college sonbhadra//
#include <bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define pb push_back
#define pf push_front
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define Pb pop_back
#define mod (ll)1000000007
#define sz(X) (int)X.size()
#define fo(i,a,b) for(i=a;i<=b;i++)
typedef vector<ll> vll;
constexpr long long SZ = 2e5 + 7;
// Google
int tc_cnt = 1;
#define ns()               cout << "Case #" << tc_cnt ++ << ": ";
// vector<vector<int>> dp(SZ, vector<int>(33));

int modpow(int a, int b, int m = mod) {
    a = a & m; int ans = 1;
    while (b) {
        if (b & 1) { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
void maxi(){
    ll t, n, i, j, ans, temp, sum, k;
//     ans = temp = sum = 0;
// cin >> n >> k;
// 		vll a(n + 1, 0);
// 		fo(i, 1, n)
// 		{
// 			cin >> a[i];
// 			sum += a[i];
// 		}
// 		if (sum <= k)
// 		{
// 			cout << 0 << "\n";
// 			return;
// 		}
// 		if (sum == k + 1)
// 		{
// 			cout << 1 << "\n";
// 			return;
// 		}
// 		sort(all1(a));
// 		ll diff = sum - k;
// 		ans = sum - k;
// 		sum = 0;
// 		for (i = n; i > 1; i--)
// 		{
// 			sum += a[i];
// 			ll x;
// 			if (sum - (n - i + 1)*a[1] >= diff)x = 0;
// 			else x = max(ceil(diff - sum + (n - i + 1) * a[1]/n - i + 2), 0LL);
// 			ans = min(ans, x + n - i + 1);
// 		}
// 		cout << ans << "\n";

fo(i, 2, N)
	{
		fact[i] = mod_mul(fact[i - 1], i);
	}
	ifact[N] = inv(fact[N]);
	for (i = N - 1; i > 0; i--)
	{
		ifact[i] = mod_mul(i + 1, ifact[i + 1]);
	}
	
		
		ans = temp = sum = 0;
		cin >> n >> k;
		cin >> s;
		vll a(n + 1, 0);
		fo(i, 1, n)
		{
			a[i] = s[i - 1] - '0';
		}
		vll dp(n + 1, 0);
		bool found = false;
		dp[1] = 1;
		fo(i, 2, n)
		{
			ll cnt = a[i];
			ll ones, zeros;
			ones = zeros = 0;
			if (a[i] == 1)ones++;
			else zeros++;
			dp[i] = dp[i - 1];
			for (j = i - 1; j > 0; j--)
			{
				cnt += a[j];
				if (cnt > k)
				{
					break;
				}
				if (a[j] == 1)ones++;
				else zeros++;
			}
			if (cnt < k)continue;
			ll add;
			if (!found)
			{
				add = (C(ones + zeros, zeros) - 1 + mod) % mod ;
			}
			else
			{
				if (a[i] == 1)
				{
					zeros--;
					if (zeros == -1)add = 0;
					else add = C(ones + zeros, zeros);
				}
				else
				{
					ones--;
					if (ones == -1)add = 0;
					else add = C(ones + zeros, zeros);
				}
			}
			dp[i] = mod_add(dp[i], add);
			found = true;
		}
 
		if (k == 0)ans  = 1;
		cout << dp[n] << "\n";
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
// file for software engineering https://drive.google.com/file/d/1PqydOL2YGkyzubqmNHZF8qSG_eWY3KQz/view?usp=sharing
