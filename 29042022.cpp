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
#define rep(i, s, e) for (int i = s; i < e; i++)
// split fuction in c++ mode
vector<string>splitfun(string s,string delimiter){
vector<string>ans;
size_t pos = 0;
string token;
while ((pos = s.find(delimiter)) != string::npos) {
    token = s.substr(0, pos);
    ans.push_back(token);
    s.erase(0, pos + delimiter.length());
}
if(s.length()>0){
ans.push_back(s);
}
return ans;
}

void maxi(){
// ll n,x;
// cin>>n>>x;
// vector<ll>deg(n+1,0);
// rep(i,0,n-1){
//     ll u,v;
//     cin>>u>>v;
//      deg[u]++;
//      deg[v]++;
// }
// if(deg[x] <= 1)
// 			cout << "Ayush" << endl;
// 		else
// 		{
// 			if(n % 2)
// 				cout << "Ashish" << endl;
// 			else
// 				cout << "Ayush" << endl;
// 		}
       ll n;
		cin >> n;
		vector<ll> a(n), b(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i] >> b[i];
		}
 
		ll ans = 0, mn = 1e18;
		for (int i = 0; i < n; ++i) {
			ll c = max(0LL, a[(i + 1) % n] - b[i]);
			mn = min(mn, a[(i + 1) % n] - c);
			ans += c;
		}
		cout << ans + mn << '\n';
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
