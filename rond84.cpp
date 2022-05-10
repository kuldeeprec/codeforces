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
string repeat(string s, int n)
{
    
    string s1 = s;
 
    for (int i=1; i<n;i++)
        s += s1; 
 
    return s;
}
void maxi() {
ll n,m,k;
cin>>n>>m;
// vector<vector<ll>>dp(n,vector<ll>(m,0));
// for(ll i=0;i<k; i++){
//     ll si,sj;
//     cin>>si>>sj;
//     dp[si][sj]=1;
// }
// for(ll i=0;i<k; i++){
//     ll si,sj;
//     cin>>si>>sj;
//     dp[si][sj]=1;
// }
ll ans= 2*(n-1)+(n+1)*(m-1);
cout<<ans<<endl;
cout<<repeat("U",n-1);
cout<<repeat("L",m-1);
for(int i=0;i<n;i++){
    if(i!=0){
        cout<<"D";
    }
    if(i&1){ 
        cout<<repeat("R",m-1);
    }
    else{
        cout<<repeat("L",m-1);
    }
}


}

int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    // cin >> t;
   
    while (t--)
    {
       maxi();
    }

    return 0;
}
