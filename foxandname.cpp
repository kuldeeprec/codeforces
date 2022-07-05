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
vector<int>graph[26],vis(26,0);
string ans="";
void dfs(int node,int p){
    vis[node] =1;
    for(auto i:graph[node]){
        if(vis[i]==0){
           dfs(i,node);
        }
        else if(vis[i]==1){
            cout<<"Impossible";exit(0);

        }
    }
    ans+=node+'a';
    vis[node]=2;
}
void maxi(){
 int n;
 cin>>n;
 vector<string>s(n);
 for(int i=0;i<n;i++){
    cin>>s[i];
 }
 for(int i=0;i<n-1;i++){
    int n1=s[i].length();
    int n2=s[i+1].length();
    int c=0;
    while(s[i][c]==s[i+1][c]&&c<min(n1,n2)) c++;
    if(c==min(n1,n2)){
        if(n1>n2){
            cout<<"Impossible";exit(0);
        }
    }
    else{
        graph[s[i][c]-'a'].push_back(s[i+1][c]-'a');
    }
    
 }
 for(int i=0;i<26;i++){
    if(vis[i]==0){
        dfs(i,-1 );
    }
    
 }
 reverse(ans.begin(), ans.end());
 cout<<ans<<endl;
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
