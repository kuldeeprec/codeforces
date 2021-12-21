#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void maxi()
{ int n,a,b,c,d;
   cin >> n >> a >> b >> c >> d;
        int l = n * (a - b) , r = n * (a + b);
        if(c + d < l || c - d > r)
            cout << "No\n";
        else
            cout << "Yes\n";
    
    
    
    

   

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