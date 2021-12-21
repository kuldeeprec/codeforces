#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define range(i,l,h) for(int i=l;i<h;i++)
#define endl '\n'
#define I INT_MAX
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define ll long long
#define ull unsigned long long
#define vt vector
#define ff first
#define ss second
#define pii pair<int,int> 
using namespace std;
using std::ios;
constexpr int MOD=1e9+7;
constexpr int mod=998244353;
template<typename T> T power(T a,T b){T r=1;while(b){if(b&1)r*=a;b/=2;a*=a;}return r;}
const int mxn=2e3+5;

int main()  
{  
  fastio;

  int q;
  cin>>q;

  while(q--)
  {
  	int n,m,x,y,a,b;
  	cin>>n>>m;
  	cin>>x>>y;
  	cin>>a>>b;

  	int t=abs(n-x)+abs(m-y);
  	int r=min(abs(n-a),abs(m-b));
  	a+=r,b+=r;
  	int p = r+abs(n-a)+abs(m-b);
  	cout<<(p<t?"NO":"YES")<<endl;

  }


}  