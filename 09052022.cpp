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
ll n,zero=0;
cin>>n;
bool ok=false;
map<ll,ll>mp;
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    if(x==0){
        zero++;
    }
    mp[x]++;
    if(mp[x]>1){
        ok=true;
    }
}
if(zero){
    cout<<n-zero<<endl;
}
else if(ok){
    cout<<n<< endl;
}
else{
    cout<<n+1<<endl;
}
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

