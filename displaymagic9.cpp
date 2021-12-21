#include <bits/stdc++.h>
using namespace std;
#define ll long long
void maxi()
{ 
 ll n,i;
 cin>>n;
 
  if(n%2==0){
     for ( i = 0; i < n/2; i++)
     {
         cout<<"1";
     }
     cout<<endl;
     
 }
 else{
   cout<<"7";
   n=n-3;
   for ( i = 0; i < n/2; i++)
     {
         cout<<"1";
     }
     
     cout<<endl;
     
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