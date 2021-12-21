#include <bits/stdc++.h>
using namespace std;
#define ll long long
void maxi()
{  ll n,i,j,mini,total=0;
  cin>>n;
  ll a[n],b[n];
  for ( i = 0; i < n; i++)
  {
    cin>>a[i]>>b[i];
  }
  mini=b[0];
   for ( i = 0; i < n; i++)
   {   
       if (b[i]>mini)
       {
           
           total+=mini*a[i];
       }
       else
       {   mini=b[i];
           total+=a[i]*mini;
       }
    
       }
       
  cout<<total;
   }



   




int main()
{
    
        maxi();
    
    return 0;
}