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
int k;
const int N=50005;
const int K=505;
vector<int> v[N];
vector<vector<ll>> dp(N,vector<ll>(K,0));
long long res=0;
void dfs(int a,int p=-1)
{
    for(int to:v[a])
    {
        if(to==p) continue;
        dfs(to,a);
        for(int i=0;i<=k;i++) dp[a][i]+=dp[to][i];
    }
    for(int to:v[a])
    {
        if(to==p) continue;
        for(int one=0;one<=k;one++)
        {
            int two=k-one-2;
            if(!(0<=two&&two<=k)) continue;
            res+=(dp[to][one]*(dp[a][two]-dp[to][two]));
        }
    }
    for(int i=k;i>=1;i--) dp[a][i]=dp[a][i-1];
    dp[a][0]=1;
    res+=(2*dp[a][k]);
}
void maxi(){
 int n;
cin>>n>>k;
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);
    printf("%I64d\n",res/2);
}
  


int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    // cin >> t;
    while (t--)
    {
      maxi();
    }

    return 0;
}

 
 
