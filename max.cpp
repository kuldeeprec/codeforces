#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
 ll n,i,pmaxi=0,max=0;
 cin>>n;
 ll b[n];
 for ( i = 0; i < n; i++)
 {
     cin>> b[i];
 }
 
 ll a[n];
 for ( i = 0; i <n ; i++)
 {
     a[i]=b[i]+pmaxi;
     max=a[i];
     if (max>pmaxi)
     {
        pmaxi=max;
     }
     
 }
 for ( i = 0; i < n; i++)
 {
     cout<< a[i] <<" ";
 }
 

return 0;
}
