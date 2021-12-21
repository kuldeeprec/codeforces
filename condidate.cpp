#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void maxi()
{
  ll n,m,countx=0,county=0;
  cin>>n>>m;
  ll x,y;
   vector<int>v;
  cin>>x>>y;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j <m; j++)
        {
            char k;
            cin>>k;
            if (k=='P')
            {
                county++;
            }
            if (k=='F')
            {
                countx++;
            }
            
        }
        if ( countx>=x|| (county>=(y)&&countx>=x-1))
        {
          v.push_back(1);
        }
        else
        {
            v.push_back(0);
        }
        
        
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
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