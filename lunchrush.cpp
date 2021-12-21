#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void maxi()
{ ll n,k;
cin>>n>>k;
ll joy=INT_MIN,prejoy=INT_MIN;

for (ll i = 0; i < n; i++)
{
    ll f,t;
    cin>>f>>t;
    if (k>=t)
    {
        prejoy=f;
        if (prejoy>joy)
        {
            joy=prejoy;
        }
        
    }
    else{
        
        prejoy=f-(t-k);
        if (prejoy>joy)
        {
            joy=prejoy;
        }
        
    
    }
    
}
cout<<joy;
   }

    int main()
    {
       // ll t;
       // cin >> t;
      //  while (t--)
       // {
            maxi();
      //  }
        return 0;
    }