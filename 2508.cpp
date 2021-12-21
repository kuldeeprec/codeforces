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
const int N =1e5+5;
#define mod (ll)1000000007
ll a[N];
void maxi(){    
    ll n;
  cin >> n;
 for(int i = 0;i < n;i++)
     cin >> a[i];
 sort(a, a + n);
 ll sum = 0;
 for(int i = 0;i + 1 < n;i++)
     sum +=a[i];
 cout << fixed << setprecision(9) << (long double)sum / (n - 1) + a[n - 1] << '\n';
}
int main(){
  ll t;
  cin>>t;
  while (t--)
  {
      maxi();
  }

    return 0;
}