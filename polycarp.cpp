#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int mod = 1e9 + 7;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi()
{  
     ll r,k,j=1;
     cin>>k>>r;
     for (ll i = 1; i < 10; i++)
     {
         if (i*k%10==r||i*k%10==0)
         {
            j=i;
            break;
         }
         
         
         
     }
     cout<<j<<endl;
       
  }
  

 
    int main()
    {
        kuldeepyadav12
        
            maxi();
        
        return 0;
    }