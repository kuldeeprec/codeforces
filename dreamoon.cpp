#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void maxi()
{ 
    ll n,x;
    cin>>n>>x;
     int a[205] = {};
        for(int i = 0 , p;i < n;i++)
            cin >> p , a[p]++;
        for(int i = 1;i <= 200;i++)
            if(!a[i] && x)
                a[i]++ , x--;
        int i = 1;
        while(a[i])
            i++;
        cout << i - 1 << '\n';
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