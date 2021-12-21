#include <bits/stdc++.h>
using namespace std;
#define ll long long
void maxi()
{
    ll n, count = 0, zero = 0, total = 0;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            count++;
        }
        if (a[i] == 0)
        {
            zero++;
        }
    }
    if (count % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0 && a[i] != -1 && a[i] != 1)
            {
                total += (abs(a[i]) - 1);
            }
        }
        total += zero;
    }

    else
    {
        for (int i = 0; i < n; i++)
        {

            if (a[i] != 0 && a[i] != -1 && a[i] != 1)
            {

                total += (-1 - a[i]);
            }

            if (zero != 0)
            {
                total += zero;
            }
            else
            {
                total += 2;
            }
        }
    }

cout<<total;
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