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

void maxi(){
 ll x;
 bool flag;
 cin>>x;
 ll ans=0;
 if(x&1){ 
     flag=false;
     ans+=1<<0;
     
 }
 else {
     flag=true;
     ans+=1<<0;
 }
 for(int i=1;i<32;i++){
     int bit = ((x<<i)&1);
     if(bit&&flag){
       ans+=1<<i;
      flag=false;
      break;
     }
     if(!bit&&!flag){
         ans+=1<<i;
         flag=false;
         break;
     }
 }
 cout<<ans<<endl;
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
