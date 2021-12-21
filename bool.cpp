//kuldeep yadav,Rajkiya engineering college sonbhadra//
#include <bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define pb push_back
#define pf push_front
#define Pb pop_back
#define mod (ll)1000000007
const int N=2e5+5;

void maxi(){
ll n,sum1=0,sum2=0;
cin>>n;
ll a[n+1];
for(ll i=1;i<=n;i++){
    cin>>a[i];
    if(i&1){
        sum1+=a[i];
    }
    else
    {
        sum2+=a[i];
    }
    
}
if(sum1>sum2){
    cout<<sum1<<endl;
}
else
{
    cout<<sum2<<endl;
}



      }


int main()
{
    kuldeepyadav12
        ll t;
    cin >> t;
    while (t--)
    {
      maxi();
    }

    return 0;
}
