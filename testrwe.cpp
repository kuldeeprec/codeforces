 //kuldeep yadav rajkiya engineering college sonbhadra
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
// Google
ll tc_count = 1;
void solution(){
 ll n;
 cin>>n;
 ll r=n;
 ll f=n;
 ll count=0;
 while(r>0){
    count++;
    r=r/10; 
 }
 ll ans=0;
 while(n>0){
    ll rem= n%10;
    ans=ans+pow(rem,count);
    n=n/10;
 }
 if(ans==f){
    cout<<"number is armstrong";
 }
 else{
    cout<<"number is not armstrong";
 }
 cout<<endl;

}
  


int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    cin >> t;
    while (t--)
    {
      solution();
    }

    return 0;
}

 
 
