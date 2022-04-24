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
// ll n,m;
// cin>>n>>m;
// vector<vector<char>>grid(n,vector<char>(m));
// for(ll i=0;i< n; i++){
//     for(ll j=0;j< m; j++){
//         cin>>grid[i][j];
//     }
// }
// for(ll i=n-2;i>=0; i--){
//     for(ll j=0;j< m; j++){
//         moveup(grid,j,i,n);
//     }
// }
// for(ll i=0;i< n; i++){
//     for(ll j=0;j< m; j++){
//         cout<<grid[i][j];
//     }
//     cout<<endl;
// }
// cout<<endl;
    //   int n,k;
    //     cin >> n >> k;
    //     vector<int> a(n+1,0);
    //     for(int i=1;i<=n;i++) cin >> a[i];
    //     int res=0;
    //     for(int j=30;j>=0;j--)
    //     {
    //         int c=0;
    //         for(int i=1;i<=n;i++) c+=(((a[i]>>j)&1)==0);
    //         if(k>=c)
    //         {
    //             k-=c;
    //             res+=(1<<j);
    //         }
    //     }
    //     cout << res << "\n";
    // }
    ll a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << (c - a) * (d - b) + 1 << '\n';
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
