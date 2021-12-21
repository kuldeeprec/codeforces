#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 void SieveOfEratosthenes(ll n,ll b)
    { int flag=0;
      ll k=n;
      
        bool prime[n + 1];
        memset(prime, true, sizeof(prime));

        for (ll p = 2; p * p <= n; p++)
        {

            if (prime[p] == true)
            {

                for (ll i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }

        for (ll p = 2; p <= n; p++){
            if (prime[p])
            {
                if (k % p ==b%p)
                    { 
                        flag = 1;
                        break;
                    }
                    else
                    {
                        flag=0;
                    }
                    
            }}
        if (flag==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
void maxi()
{
    ll a, b;
    int flag = 0;
    cin >> a >> b;
    
    SieveOfEratosthenes(a,b);

   

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