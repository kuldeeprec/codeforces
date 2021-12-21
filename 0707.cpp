//nquenn
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi(){
//    ll a, b;
//     cin >> a >> b;
//     if (a == b){
//         cout << 0 << ' ' << 0 << '\n';
//     }
//     else {
//         ll x = abs(a - b);
//         cout << x << ' ' << min(a % x, x - a % x) << '\n';
//     }
// 
ll n;
cin>>n;
  vector<ll>a(n);
  ll sum=0;
  for(ll i=0;i<n;i++) cin>>a[i],sum+=a[i];
  ll n2 = sum%n;
  ll  n1 = n-n2;
  cout<<n1*n2<<"\n";

    //    int n;
    // string s;
    //     cin >> n >> s;
    //     int cnt = 0 , i = n - 1;
    //     while(i >= 0 && s[i] == ')'){
    //         i-- , cnt++;}
    //     if(cnt > i + 1){
    //         cout << "Yes\n";}
    //     else{
    //         cout << "No\n";}
    }
  




int main(){
    
    ll t;
    cin>>t;
    while (t--)
    {
        maxi();
        // cout<<"Case #"<<++t<<":"<<" ";
    }
       
    return 0;
}