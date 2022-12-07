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
bool chekcing(ll x,vector<ll>a,ll n,ll m) {
    ll s=0,ns=0;
    for(int i=1;i<=n;++i) {
        s+=min(x,a[i]);
        if(a[i]<x) ns+=(x-a[i])/2;
    }
    if(ns+s>=m) {
        return true;
    }   
    else return false;
}

void solution(){
// vector<ll>v(4);
// for(ll i=0;i<4; i++){
//     cin>>v[i];
// }
// sort(v.begin(), v.end());
// if(v[0]==0&&v[3]==0){
//     cout<<0<<endl;
// }
// else if(v[0]==0&&v[3]==1){
//     cout<<1<<endl;
// }
// else{
//     cout<<2<<endl;
// }
// ll n;
// cin>>n;
// vector<bool>visited(n+1,false);
// vector<ll>ans1,ans2;

// ll count=0;
// for(ll i=1;i<=n;i++){
//     ll num=i;
//  while(num<=n){
//     if(!visited[num]){
//     ans1.push_back(num);
//     count++;
//     visited[num] = true;
//     }
//     num=num*2;
// }
// }

// for(ll i=1;i<=n;i++){
//     if(!visited[i]){
//         ans1.push_back(i);
//     }
// }
// cout<<2<<endl;
// for(auto i:ans1){
//    cout<<i<<" ";
// }
// cout<<endl;

ll n,m;
cin>>n>>m;
vector<ll>v(m);
vector<ll>a(n+1,0);
for(ll i=0;i<m; i++){
    cin>>v[i];
    a[v[i]]++;
}
int l=0,r=2000001;
    while(abs(l-r)<=10) {
        int x=(l+r)/2;
        if(chekcing(x,a,n,m)) r=x+1;
        else l=x-1;
    }
    for(int i=l-5;i<=r+5;++i)
        if(!chekcing(i,a,n,m)&&chekcing(i+1,a,n,m)) {
            cout << i+1 << endl;
            return;
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
      solution();
    }

    return 0;
}

 
 
