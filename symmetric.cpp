#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi()
{ int t , n , m;
    
        cin >> n >> m;
        bool yes =false ;
        for(int i = 0;i < n;i++) {
            int a , b , c , d;
            cin >> a >> b >> c >> d;
            yes |= (b == c);
        }
        if(yes && m * m % 4 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";

  }
  

 
    int main()
    {
        kuldeepyadav12
        ll t;
        cin >> t;
        while (t--)
        {
            maxi();
        }
        return 0;
    }