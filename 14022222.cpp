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
#define nll(v) (v).begin(),(v).end()
#define Pm pop_mnck
// #define mod (ll)1000000007
#define sz(X) (ll)X.size()
#define fo(i,n,m) for(i=n;i<=m;i++)
typedef vector<ll> vll;
#define itr vector<ll>::iterator
constexpr long long SZ = 2e5 + 7;
const long long it = 1000000009;
// Google
ll tc_cnt = 1;
#define ns()               cout << "Case #" << tc_cnt ++ << ": ";
const long long mex=1e5+1;
const int N = 1e3 + 5;
int t , n , a[N];
int ans[N];
// vector<int> v = {2 , 3 , 5 , 7 , 11 , 13 , 17 , 19 , 23 , 29 , 31};
vector<int> v(10);
ll high;
void maxi()
{
//     int n;
//    cin >> n;
//     	for(int i = 0;i < n;i++)
//     		ans[i] = -1 , cin >> a[i];
//     	int cnt = 1;
//     	for(int i = 0;i < v.size();i++)
//     	{
//     		bool yes = false;
//     		for(int j = 0;j < n;j++)
//     			if(a[j] % v[i] == 0 && ans[j] == -1)
//     				ans[j] = cnt , yes = true;
//     		cnt+= yes;
//     	}
//     	cout << --cnt << '\n';
//     	for(int i = 0;i < n;i++)
//     		cout << ans[i] << " ";
//     	cout << '\n';
//     }
string s;
 cin >> s;
    for(auto i:s)
    {
        ll tmp = (i-'0'),ind = 0;
        high = max(high,tmp);
        while(ind!=v.size())
            v[ind] *= 10,v[ind++]+=(tmp>0),tmp--;
    }
    cout << high << endl;
    for(int i =0;i<high;i++)
        cout << v[i] << " ";

}


int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    //cin >> t;
   
    while (t--)
    {
       maxi();
    }

    return 0;
}
