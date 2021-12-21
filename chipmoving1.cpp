#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef long double ld;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<pdd> vdd;
 
#define PB emplace_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(a) a.length()
 
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
//#define harmonic(n) 0.57721566490153286l+log(n)
 
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define sqr(a) ((a) * (a))
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
 
typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;
void maxi()
{  
const int mx = 105;
 
int a[mx];
map<int,int>mp;

    
 
    int n;
 
    cin >> n;
 
    int j=0,b=0;
 
    for( int i=0; i<n; i++ ){
 
        cin >> a[i];
 
        mp[a[i]]++;
 
        if( a[i] %2 )
            b++;
        else
            j++;
    }
 
    int ans=inf;
    for( int i=0; i<n; i++ ){
 
        if(a[i]%2){
 
            ans=min(ans,j);
        }
        else{
            ans=min(ans,b);
        }
    }
 
    cout<<ans;
 
 
}

   




int main()
{
      int n;
    cin >> n;
    int odd=0,even=0;
    for (int i = 0; i < n; i++)
     {
        int tmp;
        cin >> tmp;
        if(tmp & 1) odd++;
        else even++;
    }
    cout << min(odd,even);
    return 0;
}