 //kuldeep yadav rajkiya engineering college sonbhadra
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
// Google
ll tc_count = 1;
#define ns()         cout << "Case #" << tc_count ++ << ": ";
// split fuction in c++ mode
const ll mod = 1e9 + 7,maxn=1e5 + 5;
ll pos[maxn] ;
void maxi(){
   ll n,l,r,ans=1,t;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>t;
    pos[t]=i;
   }
   l=pos[0],r=pos[0];
   for(int i=1;i<n;i++){
        if(pos[i]<l) l=pos[i];
        else if(pos[i]>r) r=pos[i];
        else ans=ans*(r-l+1-i)%mod;
   }
   cout<<ans<<endl;
}
  


int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    cin >> t;
    while (t--)
    {
       maxi();
    }

    return 0;
}

 
 
