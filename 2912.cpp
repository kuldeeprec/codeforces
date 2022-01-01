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
// ll n, m, rb, cb, rd,cd;
// cin>>n>>m>>rb>>cb>>rd>>cd;
// ll ans=0;
// ll i=0,j=0,dr=1,dc=1;
// while(rb!=rd||cb!=cd){
//   if(rb==rd||cb==cd){
//       break;
//   }
//   else{
      
//       if(rb>=n&&cb<m){
//           dr=-1;
//           ans++;
//       rb+=dr;
//       cb+=dc;
//       }
//       else if(cb>=m&&rb<n){
//           dc=-1;
//           ans++;
//       rb+=dr;
//       cb+=dc;
//       }
//       else if(cb>=m&&rb>=n){
//           dc=-1;
//           dr=-1;
//           ans++;
//           rb+=dr;
//           cb+=dc;
//       }
//       else{
//         ans++;
//       rb+=dr;
//       cb+=dc;
//       }
//   }
// }
// cout<<ans<<endl;
//  ll n,i,j;
// cin>>n;
//   	vector<ll>a(n),b(n);
//   	set<pair<ll,ll> >s;
//   	  for(i=0;i<n;i++)
// 	  {
//   		cin>>a[i];
// 		cin>>b[i];
//   		s.insert({a[i],b[i]});
// 	  }
// 	  for(i=0;i<n;i++){
// 	  	for(j=a[i];j<=b[i];j++){
// 	  		if ((j == a[i] or s.count({a[i],j-1})) and (j == b[i] or s.count({j+1,b[i]}))) {
//                     cout << a[i] << ' ' << b[i] << ' ' << j << '\n';
//                     break;
// 		  }
		  
// 	  }
//       }

int n,i;
	cin >> n;
	vector<int> a(n);
	for(i=0;i<n;i++){
        cin>> a[i];
    }
	int ans = 0, lo = 0, hi = INT_MAX;
	while (lo <= hi)
	{
		auto v = a;
		int mid = (lo + hi) / 2;
		bool can = true;
 
		for (int i = n - 1; i > 1; i--)
		{
			if (v[i] < mid) break;
			int extra = v[i] - mid;
			extra = min(extra, a[i]);
			extra /= 3;
			v[i - 1] += extra;
			v[i - 2] += 2 * extra;
		}
		for (auto x : v)
		{
			if (x < mid)
			{
				can = false;
				break;
			}
		}
		if (can)
		{
			ans = mid;
			lo = mid + 1;
		} else
			hi = mid - 1;
	}
	cout<<(ans)<<endl;
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
