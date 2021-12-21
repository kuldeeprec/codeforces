#include <bits/stdc++.h>
using namespace std;
#define ll long long
void swap(ll *a, ll *b)
{
    ll temp;
    temp = *b;
    *b = *a;
    *a = temp;
}
void maxi()
{
    ll n, i, t, j, count = 0,flag=0;
    cin >> n;
    t = ((n * (n - 1)) / 2) - 1;
    ll a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
        
    
    
    for (i = 0; i< n-1; i++)
    {
        
            if (a[i] <= a[i+1])
            {
               
                    flag=1;
                    break;
                }
            }
        
        
    
    if (flag==1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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