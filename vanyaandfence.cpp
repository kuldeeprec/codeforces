#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


 
    int main()
    {
        kuldeepyadav12
        ll n,h,w=0;
        cin >>n>>h;

        ll a[n];
        for (ll i = 0; i < n; i++)
        {
          cin>>a[i];
          if (a[i]>h)
          {
              w+=2;
          }
          else
          {
              w+=1;
          }
          
          
        }
        cout<<w;
        
        
        
        
        return 0;
    }