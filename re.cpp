#include <bits/stdc++.h>
using namespace std;
#define ll long long
void maxi()
{
ll x,y,ans;
cin>>x>>y;
if(y>x){
    if (y%2==0)
    {
        ans=(y-1)*(y-1)+(x-1)+1;
    }

    else
    {
       ans= y*y-(x-1);
    }
    
    
}
if(y<=x){
    if (x%2!=0)
    {
        ans=(x-1)*(x-1)+(y-1)+1;
    }

    else
    {
       ans= x*x-(y-1);
    }
    
    
}
 cout<<ans<<endl;       
    }


int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        maxi();
    }
    return 0;
}