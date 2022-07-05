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
const int INF = 2e9 + 1;

void maxi(){
  ll n,m;
    cin>>n>>m;
    ll x[n],y[m];
    for(ll &i:x) cin>>i;
    for(ll &i:y) cin>>i;
    for(ll i=0;i<(1<<9);i++){
        bool imp=0;
        for(ll j=0;j<n;j++){
            bool has=0;
            for(ll k=0;k<m;k++){
                if(((x[j]&y[k])&i)==(x[j]&y[k])) has=1;
            }
            if(!has) imp=1;
        }
        if(!imp){
            cout<<i<<'\n';
            return ;
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

 
 
