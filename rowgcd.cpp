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

void maxi(){
ll n,m;
cin>>n>>m;
vector<ll>v(n+1),v2(m),c2(n);
for(ll i=0;i<n;i++){
    cin>>v[i];
}
for(ll i=0;i<m;i++){
    cin>>v2[i];
}
ll pregcd;
if(n==1){
    for(ll i=0;i<m;i++){
    cout<<abs((v[0]+v2[i]))<<" ";
}
cout<<endl;
}
else{
pregcd=v[1]-v[0];
for(ll i=2;i<n;i++){
    pregcd= __gcd(pregcd,v[i]-v[0]);
   
}

for(ll i=0;i<m;i++){
    cout<<abs(__gcd(v[0]+v2[i],pregcd))<<" ";
}
cout<<endl;
}}
int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    // cin >> t;
   
    while (t--)
    {
       maxi();
    }

    return 0;
}
