#include <bits/stdc++.h>
using namespace std;
#define ll long long
void maxi()
{ ll n,d,i,total=0,minute=0,total2=0;
cin>>n>>d;
ll t[n];
for ( i = 0; i < n; i++)
{
    cin>>t[i];
    total+=t[i];
    total2+=t[i]+10;

}
total2=total2-10;
if(n==1&&d==1&&t[0]==1){
    cout<<"0";
    return;
}
if(n*5<d&&n==1){
    cout<<"1";
    return;}

if(n*10>d){
    cout<<"-1";
}
else{
    if (total2>d)
    {
        cout<<"-1";
    }
    else{
 minute=d-total;
    minute=minute/5;
   cout<<minute;
    }
   
}

}



int main()
{
    /*ll t;
    cin>>t;
    while (t--)
   {
        maxi();
    }*/
    maxi();
    return 0;
}