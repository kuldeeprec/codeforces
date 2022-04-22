#include <bits/stdc++.h>
using namespace std;
#define ll long long

int countWays(int n,vector<int>&dp,int m){
    if(n==0){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
   int c=0;
    for(int i=1;i<=m;i++){
    if(n-i>=0)
    c=(c+countWays(n-i,dp,m));
    }
    dp[n]=c;
  return dp[n];
       
    }
void maxi(){
  int s, m;
  cin>>s>>m;
  vector<int>dp(s+1,-1);
  cout<<countWays(s,dp,m)<<endl;
 
 }


int main()
{
   int t;
   t=1;
   cin>>t;
   while(t--)
{
    maxi();
}
    
	return 0;
}


