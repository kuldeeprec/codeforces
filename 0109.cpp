#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ll t;
   cin>>t;
   while(t--){
    //    ll a,b;
    //    cin>>a>>b;
    ll n;
    cin>>n;
       string str,str2;
       cin>>str;
       for (ll i = 0; i < n; i++)
       {
           if(str[i]=='U'){
               str2.push_back('D');
           }
           else if(str[i]=='D'){
               str2.push_back('U');
           }
           else{
               str2.push_back(str[i]);
           }
       }
     cout<<str2<<endl;
//     if(a==1&&b>1){
//         cout<<2 << endl;
//     }
// //     else if(a==1&&b<=1){
// //         cout<<3 << endl;
// //    }
//    else if(a==2&&b==1){
//         cout<<2 << endl;
//    }
//    else{
//        cout<<3 << endl;
//    }
}