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
const int INF = 2e9 + 1;
vector<pair<ll,ll>>solve(vector<ll>a,ll m){
    ll n= a.size();
    vector<pair<ll,ll>>ans;
    for(ll i=0;i<n;i++){
        int x=1;
        while(a[i]%m==0){
            a[i]/=m;
            x*=m;
        }
        if(i==0){
            ans.push_back({a[i],x});
        }
        else if(a[i]==ans.back().first){
            ans.back().second+=x;
        }
        else{
            ans.push_back({a[i],x});
        }
    }
    return ans;
}
void maxi(){
ll n,m;
cin>>n>>m;
vector<ll>v(n);
for(ll i = 0; i < n;i++){
    cin>>v[i];
}
ll k;
cin>>k;
vector<ll>a(k);
for(ll i = 0; i <k; i++){
    cin>>a[i];
}
vector<pair<ll,ll>>p1,p2;
p1=solve(a,m);
p2=solve(v,m);
if(p1==p2){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
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

 
 
