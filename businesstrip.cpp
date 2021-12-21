#include <bits/stdc++.h>
using namespace std;
#define ll long long
void maxi()
{ ll k,i,total=0,sum=0;
cin>>k;
  ll a[12];
 for ( i = 0; i < 12; i++)
 {
     cin>>a[i];
 }
 sort(a,a+12);
 
 if (k==0)
 {
     cout<<"0";
 }
 else{

 
 for ( i = 11; i >=0; i--)
 {
     total+=a[i];
     sum+=1;
     if (total>=k&&k!=0)
     {
        break;
     }
     
 }
  if (total>=k)
  {
      cout<<sum;
  }
  else
  {
      cout<<"-1";
  }
  
  
 }
 


   
}



int main()

{
   /* ll t;
    cin>>t;
    while (t--)
   {
        maxi();
    }*/
     maxi();
    return 0;
}