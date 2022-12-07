 //Ritik  rajkiya engineering college sonbhadra
#include<bits/stdc++.h>
using namespace std;
#define ritik            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
// Google
ll tc_count = 1;
 ll maxlen = 2e9 + 1;


void maxi(){
  ll n;
  cin>>n;
  vector<ll>v(n);
  for(ll i=0; i<n; i++){
    cin>>v[i];
  }
  
    ll tsum = 0;
    for (ll i = 0; i < n; i++)
        tsum += v[i];
 
     
    ll start=0;
    for (ll i = 0; i < n; i++)
    {
          start+=v[i];
          if(maxlen>start){
           maxlen=start;
          }
          
          if(start>0){
             start=0;
          }
         
    }
    ll ans=max(tsum,tsum-2*maxlen);
    // Return the max_sum
    cout<<ans;
    
}
  


int main()
{
    ritik
        ll t;
        t=1;
    // cin >> t;
    while (t--)
    {
      maxi();
    }

    return 0;
}

 
 
