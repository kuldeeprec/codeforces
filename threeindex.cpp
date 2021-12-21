#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi()
{ ll n,r,b,c,flag=0;
  cin>>n;
  ll a[n];
  ll pos[n+1];
  for (ll i = 0; i < n; i++)
  {
      cin>>a[i];
      pos[a[i]]=i+1;
  }
  for (ll i = 1; i < n-1; i++)
  {
      if (a[i-1]<a[i]&&a[i+1]<a[i])
      {
          flag=1;
          r=pos[a[i-1]];
          b=pos[a[i]];
          c=pos[a[i+1]];
      }
      else
      {
          a[i]=min(a[i],a[i-1]);
          
          }
      }
 if(flag){
     cout<<"YES"<<endl;
     cout<<r<<" "<<b<<" "<<c<<endl;
 }     
 else
 {
     cout<<"NO"<<endl;
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