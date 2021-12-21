#include <bits/stdc++.h>
using namespace std;
#define ll long long
 ll getSum(ll n)
    {
        ll sum;
 
        
        for (sum = 0; n > 0; sum += n % 10, n /= 10)
            ;
 
        return sum;
    }
ll counti=0;
 ll countDigit(long long n) {
  return floor(log10(n) + 1);
}
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
     ll k=n/2050;
     
     ll p= countDigit(k);
    
    ll r=pow(10,p);
    counti=k%r;
     ll s=getSum(counti);
     cout<<s<<endl;
     
 
     
    
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