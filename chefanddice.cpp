#include <bits/stdc++.h>
using namespace std;
#define ll long long

void maxi()
{
    ll n,div,rem,total=0;
    cin>>n;
     div=n/4;
     rem=n%4;
     if (n==1)
     {
         total=20;
     }
     else if(n==2){
         total=36;
     }
     else if(n==3){
         total=51;
     }
     else if(n>=4){
         if (rem==0)
         {
             total+=4*(6+5)*div+4*4;
             
         }
         else if(rem==1){
              total+=4*(6+5)*div+3*4+20;
         }
         else if(rem==2){
              total+=4*(6+5)*div+2*4+36;
         }
         else if(rem==3){
              total+=4*(6+5)*div+1*4+51;
         }
     }
     cout<<total<<endl;
     

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