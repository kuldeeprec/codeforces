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
#define Pb pop_back
#define mod (ll)1000000007
#define sz(X) (int)X.size()
#define fo(i,a,b) for(i=a;i<=b;i++)
typedef vector<ll> vll;
constexpr long long SZ = 2e5 + 7;
// Google
int tc_cnt = 1;
#define ns()               cout << "Case #" << tc_cnt ++ << ": ";
vector<vector<int>> dp(SZ, vector<int>(33));

int modpow(int a, int b, int m = mod) {
    a = a & m; int ans = 1;
    while (b) {
        if (b & 1) { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}
void maxi(){
     ll  i ,j, ans= 0,temp = 0,sum=0;
     string sans,s1,s2;
    //     cin >> s1 >> s2;
    //     if (s2 != "abc")
    //     {
    //         sort(all(s1));
    //         cout << s1 << "\n";
    //     }
    //     else
    //     {
    //         vll cnt(26, 0);
    //         for (auto ch : s1)
    //         {
    //             cnt[ch - 'a']++;
    //         }
    //         if (cnt[0] > 0 and cnt[1] > 0 and cnt[2] > 0)
    //         {
    //             sans = "";
    //             fo(i, 1, cnt[0])sans += 'a';
    //             fo(i, 1, cnt[2])sans += 'c';
    //             fo(i, 1, cnt[1])sans += 'b';
    //             fo(i, 3, 25)
    //             {
    //                 char ch = 'a';
    //                 ch += i;
    //                 fo(j, 1, cnt[i])
    //                 {
    //                     sans += ch;
    //                 }
    //             }
    //             cout << sans << "\n";
    //         }
    //         else
    //         {
    //             sort(all(s1));
    //             cout << s1 << "\n";
    //         }

// }

// second line
// ll n;
//   cin >> n;
//         ll a, b, c;
//         /// it does not matter 
//         if (n % 2 == 0)
//         {
//             c = 1;
//             n--;
//             a = n / 2;
//             b = a + 1;
//             cout << a << " " << b << " " << c << "\n";
//         }
//         else
//         {
//             c = 1;
//             fo(i, 2, n)
//             {
//                 if ( __gcd(n - i - 1, i) == 1)
//                 {
//                     a = i;
//                     break;
//                 }
//             }
//             b = n - a - c;
//             cout << a << " " << b << " " << c << "\n";
//         }
ll n;
cin >> n;
		multiset<ll>st;
		vll a(n + 1, 0);
		fo(i, 1, n)
		{
			cin >> a[i];
			st.insert(a[i]);
		}
		for (i = n; i > 0; i--)
		{
			if (st.count(i))
			{
				st.erase(st.find(i));
			}
			else
			{
				ans++;
				auto it = st.end();
				it--;
				if (*it < 2 * i + 1)
				{
					ans = -1;
					break;
				}
				st.erase(it);
			}
		}
		cout << ans << "\n";

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
