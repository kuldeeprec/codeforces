#include <bits/stdc++.h>
using namespace std;
const int h = 1e5 + 5;
const int mod = 1e9 + 7;
const int N=2010;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi(){
//     ll n;
// cin>>n;
// ll a[n+1],sum=0,sum1=0;
// for (ll i = 1; i <=n/2; i++)
// {
//     a[i ]= 2*i;
//     sum+=a[i];
// }
//  ll k=1;
// for (ll i = (n/2)+1; i <n; i++)
// {
//     a[i ]=k ;
//     k+=2;
//     sum1+=a[i];
// }
// a[n]=sum-sum1;
// sum1+=a[n];
// if(sum==sum1&&a[n]%2!=0){
//     cout<<"YES\n";
//     for (ll i = 1; i <=n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<"\n";

// }
//  else
//  {
//      cout<<"NO\n";
//  }
 
//  ll n;
//     cin>>n;
//     vector<ll> v(n);
// 	for(ll i=0;i<n;i++)
// 	{
// 		cin>>v[i];
// 	}
// 	sort(v.begin(),v.end());
// 	ll max1=v[n-1];
// 	ll ans=0;
// 	for(ll i=0;i<n;i++)
// 	{
// 		ans+=max1-v[i];
// 	}
// 	cout<<ans;
ll n,k,sum=0;
cin>>n>>k;
ll a[n],b[n];
for (ll i = 0; i < n; i++)
{
    cin>>a[i];
}
for (ll i = 0; i < n; i++)
{
    cin>>b[i];
}
sort(a,a+n);
sort(b,b+n);
ll r=n-1;
for (ll i = 0; i < n; i++)
{
    if(a[i]<b[r]&&k>0){
        a[i]=b[r];
        k--;
        r--;
    }
}
for (ll i = 0; i < n; i++)
{
 sum+=a[i];
}
cout<<sum<<endl;

}
 
 
    
 
    int main()
    {
        kuldeepyadav12
    
        ll t;
         cin>>t;
         while(t--)
            maxi();
        
        return 0;
    }