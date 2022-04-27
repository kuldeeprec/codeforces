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
vector<string>splitfun(string s,string delimiter){
vector<string>ans;
size_t pos = 0;
string token;
while ((pos = s.find(delimiter)) != string::npos) {
    token = s.substr(0, pos+1);
    ans.push_back(token);
    s.erase(0, pos + delimiter.length());
}
if(s.length()>0){
ans.push_back(s);
}
return ans;
}

ll mincost(vector<vector<ll>>&v,ll row,ll col,ll cost,ll n,ll p){
     if(row<0||row>=n&&col<0||col>=p){
         return 0;
     }

}

void maxi(){
// ll n;
// cin>>n;
// vector<ll>v(n);
// for(ll i=0;i<n;i++){
//     cin>>v[i];
// }
// ll  i=0,j=n-1;
// ll count=0;
// ll mini=min(v[0],v[n-1]);

// while(i<=j&&j>=i){
//     if(v[i]<v[j]){
//         if(mini<=v[i]){
//             mini=max(v[i],mini);
//             count++;
//         }
//         i++;
//     }
//     else{
       
//         if(mini<=v[j]){
//              mini=max(v[j],mini);
//             count++;
//         }
//         j--;
//     }
// }
// ns();
// cout<<count<<endl;
ll n,p;
cin>>n>>p;
ll cost=0;
vector<vector<ll>>v(n,vector<ll>(p));
for(ll i=0;i< n; i++){
    for(ll j=0;j< p; j++){
     cin>>v[i][j];
    }
}

ns();
cout<<cost<<endl;
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
