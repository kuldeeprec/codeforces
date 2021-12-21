#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void maxi()
{
    ll n;
    cin>>n;
    if(n<2050){
        cout<<"-1"<<endl;
    }
    else if(n%2050!=0)
    {
        
        cout<<"-1"<<endl;
    }
    else
    {
        ll sum=0;
     ll k=n/2050;
     while (k!=0)
     {
         sum+=k%10;
         k/=10;
        
     }
     cout<<sum<<endl;
     
     
     
 
     
    
    }
    
    
    

   

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