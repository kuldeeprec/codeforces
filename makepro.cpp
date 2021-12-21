#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
    void maxi()
    {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0, zer = 0, c = 0, b = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == -1)
                c++;
            else if (a[i] == 1)
                b++;
            if (a[i] < -1)
            {
                ans += (-1 - a[i]);
                a[i] = -1;
                c++;
            }
            else if (a[i] > 1)
            {
                ans += (a[i] - 1);
                a[i] = 1;
                b++;
            }
            if (a[i] == 0)
                zer++;
        }
        if (c % 2 == 0)
        {
            ans += zer;
        }
        else
        {
            if (zer == 0)
            {
                ans += 2;
            }
            else
                ans += zer;
        }
        cout << ans;
    }

    int main()
    {
        /*ll t;
    cin>>t;
    while (t--)
   {
        maxi();
    }*/
        maxi();
        return 0;
    }


