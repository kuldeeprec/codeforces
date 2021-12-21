
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi(){

    ll xa,ya,xb,yb,xf,yf,ans=0;
    cin>>xa>>ya>>xb>>yb>>xf>>yf;
    ans+=abs(xb-xa)+abs(yb-ya);
//     if(ya==ya&&yb==yf||xa==xf&&xb==xf){
//         ans+=abs(xb-xa)+abs(yb-ya)+2;
//     }
//     else if(yb==yf) {
//         ans+=abs(xb-xa)+abs(yb-ya)+1;

// }
// else{
//     ans+=abs(xb-xa)+abs(yb-ya);
// }

cout<<ans<<endl;
}



int main(){
    kuldeepyadav12
    ll t;
    cin>>t;
    while (t--)
    {
   maxi();
        
    }
       
    return 0;
}
