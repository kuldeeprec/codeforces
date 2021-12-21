                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define pf push_front
#define Pb pop_back
#define mod 998244353
void maxi(){
    int n,ans=0;
  cin>>n;
  int dp[n+1]={0};
  dp[0]=1;
  for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j+=i){
      dp[j]+=1;
    }
  }
  ans=0;
  for(int i=2;i<=n;i++){
    (ans+=dp[i-1])%=mod;
    (dp[i]+=ans)%=mod;
  }
  cout<<dp[n];
  return;



}

int main(){
    // ll t;
    // cin>>t;
    // while(t--){
    // maxi();
    // }
     maxi();

    return 0;
}
