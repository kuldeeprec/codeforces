#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    ll q,d;
    cin>>q>>d;

    while (t--)
    {
        
        ll l= (-1LL)*2e18,r=2e18,y1=1,y2=r;
        ll curr=1LL;
        string cc;
        ll mid=(l+r)/2;
    while(l<=r){
        ll mid=(l+r)/2;
        if(curr==1LL){
            cout<<curr<<" "<<mid<<" "<<y1<<endl;
        }
        else
        {
             cout<<curr<<" "<<mid<<" "<<y1<<" "<<mid<<" "<<y2<<endl;
        }
        cin>>cc;
        if(cc[0]=='X'){
            curr=2LL;
        }
        if(cc=="0"){
            break;
        }
        if (cc[0]=='N')
        {
            l=mid+1LL;
        }
        if(cc[0]=='P'){
            r=mid-1LL;
        }
        
    }
    }

    return 0;
}