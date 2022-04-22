#include <bits/stdc++.h>
using namespace std;
#define ll long long
int lcs(string s, string t,int m ,int n,vector<vector<int>>dp){
     if(m==0||n==0){
         return 0;
     }
     if(dp[m][n]>-1){
         return dp[m][n];
     }
     int ans;
     if(s[m-1]==t[n-1]){
         ans=1+lcs(s,t,m-1,n-1,dp);
     }
     else{
         int option1= lcs(s,t,m-1,n,dp);
         int option2 =lcs(s,t ,m,n-1,dp);
         ans=  max(option1,option2);
     }
     dp[m][n]=ans;
     return ans;
}
int lcs2(string s, string t,int m ,int n,vector<vector<int>>dp){
    for(int i=1;i<=m; i++){
        for(int j=1;j<=n; j++){
          if(s[m-i]==t[n-j]){
              dp[i][j]=dp[i-1][j-1]+1;
          }
          else{
              dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
          }
        }
    }
    return dp[m][n];
}
int distict(string s, string t,int m ,int n,vector<vector<int>>dp){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n; j++){
            if(s[m-i]==t[n-j]){
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j];            }
        }
    }
    return dp[m][n];
}
void maxi(){
 string s,t;
 cin>>s>>t;
 int m=s.length(),n=t.length();
 vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
 for(int i=0;i<=n;i++){
     dp[0][i]=0;
 }
 for(int i=0;i<=m;i++){
     dp[i][0]=0;
 }
//  for(int i=0; i <=m; i++){
//  for(int j=0;j<=n; j++){
//   cout<<dp[i][j]<<" ";
//  }
//  cout<<endl;
//  }
 cout<<lcs2(s,t,m,n,dp);
// cout<<distict(s,t,m,n,dp);
}
  




int32_t main()
{
   int t;
   t=1;
//    cin>>t;
   while(t--)
{
    maxi();
}
    
	return 0;
}


