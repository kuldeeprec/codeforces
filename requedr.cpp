#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int mod = 1e9 + 7;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi()
{  
      int t , x , y , n;
    
    
        cin >> x >> y >> n;
        int f = (n - y) / x;
        cout << 1ll * f * x + y << '\n';
    
    }
     
       
  
  

 
    int main()
    {
        kuldeepyadav12
        ll t;
        cin>>t;
        while(t--)
            maxi();
        
        return 0;
    }