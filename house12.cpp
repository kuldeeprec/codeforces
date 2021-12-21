
//#pragma GCC optimize("Ofast","unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define kuldeepyadav73 ios_base::sync_with_stdio(0);cin.tie(0);
#define double long double
using pii=pair<int,int>;
// template<typename T>
// using Prior=std::priority_queue<T>;
//template<typename T>
//using prior=std::priority_queue<T,vector<T>,greater<T>>;
#define X first
#define Y second
#define eb emplace_back
#define ALL(x) begin(x) ,end(x)
// mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// inline int getRand(int L,int R){
//     if(L>R) swap(L,R);
//     return (int)(rng() % (uint64_t)(R-L+1)+L);
    
// }
template<typename T1,typename T2>
ostream& operator << (ostream &os,pair<T1,T2> p){
    os << "(" <<p.first <<","<<p.second <<")";
    return os;

}
template<typename T>
ostream& operator << (ostream &os,vector<T>vec){
    for (int i = 0; i < vec.size(); i++)
    {
        if(i) os <<" ";
        os <<vec[i];
    }
    return os;

}
const int maximum=3E5+5;
const int mod =1E9 +7;
vector<int>adj[maximum],child,val;
vector<pii>ch;


void calc_ans(int now, int lst = -1)
{

	for (auto x : adj[now])
	{
		if (x == lst) continue;

		calc_ans(x, now);
	}
ch.clear();
for (auto x : adj[now])
	{
		if (x != lst) ch.eb(child[x],x);

		
	}
    sort(rbegin(ch),rend(ch));
    int tok=1;
    for (auto [_val,id]:ch) val[id]=tok++;
    for (auto x:adj[now])
    {
        if(x!=lst) child[now]+=val[x]*child[x];
    }
    
}
void maxi(){
    int N,X;
    cin>>N>>X;
    child.assign(N,1),val.assign(N,0);
    for (int  i = 0; i < N; i++)vector<int>().swap(adj[i]);
    for (int i = 0; i < N - 1; ++i)
	{
		int u, v; cin >> u >> v,--u,--v;
		adj[u].eb(v);
		adj[v].eb(u);
	}
    calc_ans(0);
    cout<<child[0]%mod * X % mod <<"\n";   
    
    
}





 
 
    
  
    int32_t main()
    {
        kuldeepyadav73
    
        int t;
         cin>>t;
         while(t--)
            maxi();
        
        return 0;
    }