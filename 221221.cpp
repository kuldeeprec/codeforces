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
#define Pb pop_back
#define mod (ll)1000000007
#define sz(X) (int)X.size()
// Google
int tc_cnt = 1;
#define ns()               cout << "Case #" << tc_cnt ++ << ": ";
 

int modpow(int a, int b, int m = mod) {
    a = a & m; int ans = 1;
    while (b) {
        if (b & 1) { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}

void maxi(){
// ll  n, i, j, ans, temp, sum;
// 	string sans, a, s;
//     sans = "NO";
// 		ans = temp = sum = 0;
// 		cin >> a >> s;
// 		n = sz(s);
// 		j = sz(s) - 1;
// 		sans = "";
// 		bool ok = true;
// 		for (i = sz(a) - 1; i >= 0; i--)
// 		{
// 			if (j < 0)
// 			{
// 				ok = false;
// 				break;
// 			}
// 			ll n1, n2;
// 			n1 = a[i] - '0';
// 			n2 = s[j] - '0';
// 			ll res;
// 			char ch = '0';
// 			if (n2 >= n1)
// 			{
// 				res = n2 - n1;
// 				j--;
// 			}
// 			else
// 			{
// 				if (j < 1 or s[j - 1] != '1')
// 				{
// 					ok = false;
// 					break;
// 				}
// 				res = 10 + n2 - n1;
// 				j -= 2;
// 			}
// 			ch += res;
// 			sans += ch;
// 		}
// 		if (!ok)
// 		{
// 			cout << -1 << "\n";
// 			return;
// 		}
// 		while (j >= 0)
// 		{
// 			sans += s[j];
// 			j--;
// 		}
// 		while (sans.back() == '0')sans.pop_back();
// 	    reverse(sans.begin(), sans.end());
// 		cout << sans << "\n";

ll t, n, i, j, temp, sum;
	string sans;
sans = "NO";
		temp = sum = 0;
		cin >> n;
		vector<ll> cnt(n + 1, 0);
		multiset<ll>st;
		for(i=1;i< n; i++)
		{
			ll x;
			cin >> x;
			st.insert(x);
			cnt[x]++;
		}
		vector<ll> ans(n + 1, 0);
		ans[0] = cnt[0];
		for(i=1; i < n; i++)
		{
			ans[i] = ans[i - 1] - cnt[i - 1];
			auto it = st.upper_bound(i - 1);
			if (it == st.begin())
			{
				for(j=i;j<n;j++)ans[j] = -1;
				break;
			}
			it--;
			ans[i] += i - 1 - *it;
			ans[i] += cnt[i];
			st.erase(it);
		}
		for(i=0;i<n;i++)cout<<ans[i] << " ";
		cout << "\n";
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
