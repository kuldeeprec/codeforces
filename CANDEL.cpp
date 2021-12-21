#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void maxi()
{ ll n,k;
 cin >> n >> k;
		ll cnt = n/k;
		ll ans = cnt * k;
		ans+=min(n - cnt*k,k/2);
		cout << ans << '\n';

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