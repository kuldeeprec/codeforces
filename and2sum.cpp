#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int mod = 1e9 + 7;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi()
{  
     ll n,k;
        cin >> n >> k;
        int ans = 1;
        for(int i = 1;i <= k;i++)
            ans = (1ll * ans * n) % mod;
        cout << ans << '\n';
    
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