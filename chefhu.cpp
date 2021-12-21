#include <bits/stdc++.h>
using namespace std;
#define ll long long
int roundi(float var)
{
    
    int value = (int)(var * 100 + .5);
    return value;
}
void maxi()
{
    float k1,k2,k3,v,total,val;
    cin>>k1>>k2>>k3>>v;
    total=k1*k2*k3*v;
     val=100/total;
     val=roundi(val);

     if (val<958)
     {
         cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }
     

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