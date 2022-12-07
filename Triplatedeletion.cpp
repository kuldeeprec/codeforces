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
// split fuction in c++ mode
const ll mod = 1e9 + 7,maxn=1e5 + 5;
  const ll NMAX=5e3+5;

ll dp[NMAX],fr[NMAX],a[NMAX];
void maxi(){

    ll n,maxfreq=0;

    cin>>n;
    for(ll i=1;i<=n;i++)
        cin>>a[i];

    dp[0]=dp[n+1]=0;

    for(ll j=1;j<=n;j++) fr[j]=0;
    for(ll i=1;i<=n+1;i++){
        if(i%2 && maxfreq<=i/2)
            dp[i]=1;
        else
            dp[i]=0;
        maxfreq=max(maxfreq,++fr[a[i]]);
    }
    for(ll i=1;i<=n;i++){

        for(ll j=1;j<=n;j++) fr[j]=0;
        maxfreq=0;

        if(dp[i]>0) 
        for(ll j=i+1;j<=n+1;j++){
            if((j-i)%2 && maxfreq<=(j-i)/2 && (j==n+1 || a[i]==a[j]))
                dp[j]=max(dp[j],dp[i]+1);

            maxfreq=max(maxfreq,++fr[a[j]]);
        }
    }
    cout<<dp[n+1]-1<<'\n';
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

 
 
