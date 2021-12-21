#include <bits/stdc++.h>
using namespace std;
#define ll long long
void maxi()
{ ll n,x,i,total=0,total2=0,max1=0,min1=0;
  cin>>n>>x;
  ll a[n];
  for ( i = 0; i < n; i++)
  {
      cin>>a[i];
      total+=a[i];
      

  }
  min1=ceil(total*(1.0)/x);
  min1=(ll)(min1);
   for ( i = 0; i < n; i++)
  {
      total2+=a[i];
      max1+=ceil(total2*(1.0)/x);
      total2=0;

  }
   max1=(ll)(max1);
  cout<<min1<<" "<<max1<<endl;



   
}



int main()

{
    ll t;
    cin>>t;
    while (t--)
   {
        maxi();
    }
    return 0;
}