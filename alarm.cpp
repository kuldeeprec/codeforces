#include<iostream>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;
int main(){
  int k;
  cin>>k;
  while (k--)
  { 
    ll a,b,c,d; cin>>a>>b>>c>>d;
    ll t=0;
if(a>b && c<=d)
{cout<<"-1\n";}
else if(a<=b)
{
cout<<b<<"\n"; 
}
else{

t+=b;
a-=b;
t+= c*1ll*( a/(c-d) + (a%(c-d)!=0));
cout<<t<<"\n"; } 

 
}return 0;}
