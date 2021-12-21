                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be . ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long 
#define pb push_back
#define pf push_front
#define Pb pop_back
void maxi(){
//    ll xa,xb,Xa,Xb;
//    cin>>xa>>xb>>Xa>>Xb;
//    cout<<(Xa/xa+Xb/xb)<<endl;
//     }
ll D,d,P,Q;
cin>>D>>d>>P>>Q;
ll flag=0;
if(D%d!=0)
{
    flag=1;
}
ll n=D/d;
cout<<(n*d*(2*P+(n-1)*Q))/2+flag*(P+(n)*Q)*(D%d)<<endl;}
int main(){
    kuldeepyadav12
    ll t;
    cin>>t;
    while(t--){
    maxi();
    }

    return 0;
}
