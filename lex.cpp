#include <bits/stdc++.h>
using namespace std;
#define ll long long
void maxi()
{
       ll n,k;
       cin>>n>>k;
       ll a[n];
       for(ll i=0;i<n;i++){
           cin>>a[i];
       }
       for (ll i = 0; i < n; i++)
       {
           int d=min(k,a[i]);
           a[i]-=d;
           k=k-d;
           a[n-1]+=d;
       }
       
    

for(ll i=0;i<n;i++){
           cout<<a[i]<<" ";
       }
       cout<<endl;
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