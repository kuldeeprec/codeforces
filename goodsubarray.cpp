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
    token = s.substr(0, pos);
    ans.push_back(token);
    s.erase(0, pos + delimiter.length());
}
if(s.length()>0){
ans.push_back(s);
}
return ans;
}
const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {1, 0, -1, 0};
char mp[505][505];
bool visited[505][505];
int out[250005][2];
int len=0;
int n,m,k;
void dfs(int x,int y){
	int nx,ny;
	visited[x][y]=1;
	for(int i=0;i<4;i++){
		nx=x+dx[i];
		ny=y+dy[i];
		if(nx<1||ny<1||nx>n||ny>m||visited[nx][ny]||mp[nx][ny]=='#'){
			continue;
		}
		dfs(nx,ny);
	}//storing the x and y values last traversing;
	out[++len][0]=x;
	out[len][1]=y;
    cout<<x<<" "<<y<<endl;
}
void maxi(){
// ll n;
// string a;
//     cin >> n;
//     cin >> a;
//     map<ll, ll> cnt;
//     cnt[0] = 1;
//     ll sum = 0;
//     long long ans = 0;
//     // pr-pl=r-l;
//     for (char i : a) {
//       sum += i - '0' - 1;
//       ans += cnt[sum];
//       ++cnt[sum];
//     }
//     cout << ans << "\n";
       cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        for(int j=0;j<m;j++){
            mp[i][j+1]=s[j];
        }
    }
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(mp[i][j]=='#'||visited[i][j]){
				continue;
			}
			dfs(i,j);
		}
	}
	for(int i=1;i<=k;i++){
		mp[out[i][0]][out[i][1]]='X';
	}
	
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<mp[i][j];
        }
        cout<<endl;
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
