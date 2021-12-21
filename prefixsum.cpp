#include <bits/stdc++.h>
using namespace std;
#define ll long long
void maxi()
{
    ll n;
    cin>>n;
    vector<ll>arr(n,0);
    ll q;
    while (q--)
    {
     ll l,r;
     cin>>l>>r;
     arr[l]++;
     if(r+1<n){
         arr[r+1]--;
     }

    }
    for (ll i = 1; i < n; i++)
    {
        arr[i]+=arr[i-1];
    }
    for (ll  i = 0; i <n;i++){
        
        cout<<arr[i]<<" ";
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