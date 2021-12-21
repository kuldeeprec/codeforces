#include <bits/stdc++.h>
using namespace std;
#define ll long long
void maxi()
{
    ll n, k, i;
    cin >> n >> k;

    
        ll a[n];
        a[0] = 1;
        for(i=1;i<n;i++)
        {
            if(k>0 && i<n-1)
            {
                a[i] = i+2;
                a[i+1] = i+1;
                i++;
                k--;
            }
            else
            {
                a[i]=i+1;
            }
        }
        if(k>0) cout<<-1<<endl;
        else{
            for ( i = 0; i < n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
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