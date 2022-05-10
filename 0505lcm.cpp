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
#define ns()         cout << "Case #" << tc_count ++ << ": ";
// split fuction in c++ mode
vector<ll>helper(ll n){
    if(n&1){ 
        return {1,n/2,n/2};
    }
    if(n%2==0&&n%4!=0){
        return {n/2-1,n/2-1,2};
    }
    else{
        return {n/2,n/4,n/4};
    }
}

void maxi(){
ll n,k;
cin>>n>>k;
vector<ll>ans= helper(n-k+3);
for(ll i=0;i<k; i++){
    if(i<3){
        cout<<ans[i]<<" ";
    }
    else{
        cout<<1<<" ";
    }
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
       maxi();
    }

    return 0;
}

