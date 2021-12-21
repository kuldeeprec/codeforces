#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const ll mex=(10e6);
ll num0[mex],num1[mex] ;
ll dp0[mex+2],dp1[mex+2];
void maxi(){
string s;
ll n;
cin>>s;
n=s.length();
ll pos=-1;
for (ll i = 0; i <n; i++)
{
  if(s[i]=='0'){
      for ( ll j = pos+1; j<=i; j++)
      {
          num0[j]=i;
      }
      pos=i;
      
  }
}
for (ll i = pos+1; i <n; i++)
{
    num0[i]=n;
}
if(num0[0]==n){
    cout<<"0"<<endl;
    return;
}
pos=-1;
for (ll i = 0; i <n; i++)
{
  if(s[i]=='1'){
      for ( ll j = pos+1; j<=i; j++)
      {
          num1[j]=i;
      }
      pos=i;
      
  }
  
}
for(ll i=pos+1;i<n;i++){
    num1[i]=n;}
dp0[n]=0,dp0[n+1]=0;
dp1[n]=0,dp1[n+1]=0;
for(ll i=n-1;i>=0;i--){
    dp0[i]=dp0[i+1];
if(s[i]=='0'&& num1[i]<n){
    dp0[i]=max(dp0[i],dp0[num1[i]+1]+1);
}
if(s[i]=='1'&& num0[i]<n){
    dp0[i]=max(dp0[i],dp0[num0[i]+1]+1);
}
dp1[i]=dp1[i+1];
if(num1[i]<n){
    dp1[i]=max(dp1[i],dp0[num1[i]+1]+1);
}
    
}

ll x=dp1[0]+1;
ll count=num1[0]+1;
string ans ="1";
for (ll i=1; i < x; i++)
{
    if (count>=n)
    {
        ans.append("0");
        continue;
    }
    if(num0[count]>=n){
        ans.append("0");
        count=num0[count]+1;
        continue;
    }
    if (dp0[num0[count]+1]<x-i-1)
    {
       ans.append("0");
       count=num0[count]+1;
    }
    else
    {
        ans.append("1");
         count=num1[count]+1;
    }
    
    
}
cout<<ans<<endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        maxi();
    }

    return 0;
}