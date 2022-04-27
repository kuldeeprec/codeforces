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
void moveup(vector<vector<char>>&grid,ll col,ll row,ll n){
     while(grid[row][col]!='o'&&row<n-1){
         if(grid[row][col]=='*'&&grid[row+1][col]=='.'){
             swap(grid[row][col],grid[row+1][col]);
             
         }
         row++;
     }
}

void maxi(){
ll n;
cin>>n;
vector<ll>v(11,0);
for(ll i=1;i<=n;i++){
    ll a,b;
    cin>>a>>b;
    if(v[b]<a){
        v[b]=a;
    }
}
bool ok=true;
ll ans=0;
for(ll i=1; i <=10; i++){
    if(v[i]<=0){
        ok=false;
    }
     ans+=v[i];
}
if(ok){

cout<<ans<<endl;
}
else{
  cout<<"MOREPROBLEMS"<<endl;  
}
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
