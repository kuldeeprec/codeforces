#include <bits/stdc++.h>
using namespace std;
#define ll long long
void maxi()
{ ll n,i,flag=0,total=0,total2=0;
   cin>>n;
   total2=0;
  ll h[n];
   for ( i = 0; i <n; i++)
   {
       cin>>h[i];
      total+=h[i];
      total2+=i;
      if (total2>total)
      {
          flag=1;
      }
      
   }
   
    
    
   
   if (flag==0)
   {
       cout<<"YES"<<endl;
   }else
   {
       cout<<"NO"<<endl;
   }
   
    }



   




int main()
{
    ll t;
    cin>>t;
    while (t--)
   {
        maxi();
    }
    return 0;
}