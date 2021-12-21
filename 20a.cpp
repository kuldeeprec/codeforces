                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define pf push_front
#define Pb pop_back
void swap(char*a){
        *a='1';
    }
void maxi(){
    ll  n,m;
    ll p;
    cin>>n>>m;
    vector<char>a;
    vector<char>b;
    for (ll i = 0; i < n; i++)
   {
       char b;
       cin>>b;
       a.pb(b);
       
   }
   b.resize(n);
    ll i;
    p=min(n,m);

    if(p>=1){
    if(a[0]=='0'&&a[1]=='1'){
       b[0]='1';    }
    if(a[n-1]=='0'&&a[n-2]=='1'){
        b[n-1]='1';
    }}
    char prev=a[0];
    for ( i = 1; i < p-1; i++)
    {
        if( prev=='0'&&a[i+1]=='1'){
          b[i]='1';
          prev=b[i];
            
        }
        else
        {
            b[i]='0';
          prev=b[i];
        }
        
    }
   for (ll i = 0; i < n; i++)
   {
       cout<<b[i];
   }
  cout<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
    maxi();
    }
    

    return 0;
}
