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
    ll arr[n];
    for(int i =0;i<n;cin>>arr[i++]);
    sort(arr,arr+n);
    ll cnt =0;
    for(int i =0;i<n;i++) {
        if(i+2<n&&arr[i+2]+k<=5) {
            cnt++;
            i+=2;
        } else {
             cout<<cnt;
             return;
        }
    }
    cout << cnt;
    }
     
       
  
  

 
    int main()
    {
        kuldeepyadav12
        // ll t;
        // cin>>t;
        // while(t--)
            maxi();
        
        return 0;
    }