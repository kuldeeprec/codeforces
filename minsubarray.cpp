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
const int N=2e5+5;


void maxi(){
      ll sum=0;
      ll n;
      cin>>n;
      vector<ll>v(n,0);
      vector<ll>dp(n,0);
      for(int i=0;i<n;i++){
          cin>>v[i];
          sum+=v[i];
      }
      for(int i=0;i<n-1;i++){
         sum+=min(v[i],v[i+1])+dp[i];
         dp[i]=min(v[i],v[i+1]);

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
