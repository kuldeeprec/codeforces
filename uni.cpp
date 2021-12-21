#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll maxi(ll x)
{ if(x<=9) {
    return x;
}
else
{ if (x<=17)
{
    return 10*maxi(x-9)+9;
}

    
}

 
  
   
  
      
       
   
   
    
    
    }



   




int main()
{
    ll t,x;
    cin>>t;
    while (t--)
   { cin>>x;
   ll total;
       total= maxi(x);
       cout<<total<<endl;
    }
    return 0;
}