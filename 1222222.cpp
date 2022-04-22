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
void maxi()
{

    // int n,k;
    // scanf("%d%d",&n,&k);
    // int mod=1000000007;
    // vector<vector<int>> dp(n+1,vector<int>(k+1,0));
    // for(int i=1;i<=n;i++) dp[i][1]=1;
    // for(int o=1;o<=n;o++)
    // {
    //     for(int i=1;i<k;i++)
    //     {
    //         for(int j=1;o*j<=n;j++)
    //         {
    //             dp[o*j][i+1]=(dp[o*j][i+1]+dp[o][i])%mod;
    //             cout<<dp[o*j][i+1]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
    // int res=0;
    // for(int i=1;i<=n;i++) res=(res+dp[i][k])%mod;
    // printf("%d\n",res);
   ll a,b,k;
   cin>>a>>b>>k;
  ll a1[k],b1[k];
  for(int i=0;i<k;i++)
{
 cin>>a1[i];
}   
 for(int i=0;i<k;i++)
{
 cin>>b1[i];
}
ll count=0;
for(ll i=0;i<k;i++){
  for(ll j=i+1;j<k;j++){
    if(a1[i]!=a1[j]&&b1[i]!=b1[j]){
        count++;
    }
  }
} 
cout<<count<<endl;
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
