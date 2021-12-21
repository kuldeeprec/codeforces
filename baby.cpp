#include<bits/stdc++.h> 
using namespace std;
using ll=long long int;
//using Int=__int128;
#define ALL(A) A.begin(),A.end()
template<typename T1,typename T2> bool chmin(T1 &a,T2 b){if(a<=b)return 0; a=b; return 1;}
template<typename T1,typename T2> bool chmax(T1 &a,T2 b){if(a>=b)return 0; a=b; return 1;}
template<typename T> constexpr int bitUP(T x,int a){return (x>>a)&1;}
//→　↓　←　↑ 
int dh[4]={0,1,0,-1}, dw[4]={1,0,-1,0};
//右上から時計回り
//int dh[8]={-1,0,1,1,1,0,-1,-1}, dw[8]={1,1,1,0,-1,-1,-1,0};
long double EPS = 1e-6;
long double PI = acos(-1);
const ll INF=(1LL<<62);
const int MAX=(1<<30);
constexpr ll MOD=1000000000+7;
//constexpr ll MOD=998244353;


inline void bin101(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(20);
}

using pii=pair<int,int>;
using pil=pair<int,ll>;
using pli=pair<ll,int>;
using pll=pair<ll,ll>;
using psi=pair<string,int>;
using pis=pair<int,string>;
using psl=pair<string,ll>;
using pls=pair<ll,string>;
using pss=pair<string,string>;

using Graph=vector<vector<int>>;

template<typename T >
struct edge {
	int to;
	T cost;
	edge()=default;
	edge(int to, T cost) : to(to), cost(cost) {}

};
template<typename T>
using WeightGraph=vector<vector<edge<T>>>;


//0-indexed vector cin
template<typename T>
inline istream &operator>>(istream &is,vector<T> &v) {
    for(size_t i=0;i<v.size();i++) is>>v[i];
	return is;
}
 
//0-indexed vector cin
template<typename T>
inline istream &operator>>(istream &is,vector<vector<T>> &v) {
    for(size_t i=0;i<v.size();i++){
        is>>v[i];
    }
    return is;
}
//vector cout
template<typename T>
inline ostream &operator<<(ostream &os,const vector<T> &v) {
    for(size_t i=0;i<v.size();i++){
        if(i) os<<" ";
        os<<v[i];
    }
    return os;
}
//vector<vector> cout
template<typename T>
inline ostream &operator<<(ostream &os,const vector<vector<T>> &v) {
    for(size_t i=0;i<v.size();i++){
        os<<v[i];
        if(i+1!=v.size()) os<<"\n";
    }
    return os;
}

//Graph out
template<typename T>
inline ostream &operator<<(ostream &os,const Graph &g) {
    for(size_t i=0;i<g.size();i++){
        for(int to:g[i]){
            os<<i<<"->"<<to<<" ";
        }
        os<<endl;
    }
    return os;
}

//WeightGraph out
template<typename T>
inline ostream &operator<<(ostream &os,const WeightGraph<T> &g) {
    for(size_t i=0;i<g.size();i++){
        for(auto e:g[i]){
            os<<i<<"->"<<e.to<<"("<<e.cost<<") ";
        }
        os<<endl;
    }
    return os;
}


//要素数n 初期値x
template<typename T>
inline vector<T> vmake(size_t n,T x){
	return vector<T>(n,x);
}

//a,b,c,x data[a][b][c] 初期値x
template<typename... Args>
auto vmake(size_t n,Args... args){
	auto v=vmake(args...);
	return vector<decltype(v)>(n,move(v));
}

//pair cout
template<typename T, typename U>
inline ostream &operator<<(ostream &os,const pair<T,U> &p) {
	os<<p.first<<" "<<p.second;
	return os;
}
 
//pair cin
template<typename T, typename U>
inline istream &operator>>(istream &is,pair<T,U> &p) {
	is>>p.first>>p.second;
	return is;
}
 
//ソート
template<typename T>
inline void vsort(vector<T> &v){
    sort(v.begin(),v.end());
}
 
//逆順ソート
template<typename T>
inline void rvsort(vector<T> &v){
	sort(v.rbegin(),v.rend());
}

//1ビットの数を返す
inline int popcount(int x){
	return __builtin_popcount(x);
}
//1ビットの数を返す
inline int popcount(ll x){
	return __builtin_popcountll(x);
}
template<typename T>
inline void Compress(vector<T> &C){
    sort(C.begin(),C.end());
    C.erase(unique(C.begin(),C.end()),C.end());
}
template<typename T>
inline int lower_idx(const vector<T> &C,T value){
    return lower_bound(C.begin(),C.end(),value)-C.begin();
}
template<typename T>
inline int upper_idx(const vector<T> &C,T value){
    return upper_bound(C.begin(),C.end(),value)-C.begin();
}
//時計回りに90度回転
template<typename T>
inline void rotate90(vector<vector<T>> &C){
    vector<vector<T>> D(C[0].size(),vector<T>(C.size()));
    for(int h=0;h<C.size();h++){
        for(int w=0;w<C[h].size();w++){
            D[w][C.size()-1-h]=C[h][w];
        }
    }
    C=D;
}
//補グラフを返す
//i→iのような辺は加えない
Graph ComplementGraph(const Graph &g){
    size_t sz=g.size();
    bool used[sz][sz];
    fill(used[0],used[sz],false);
    for(size_t i=0;i<sz;i++){
        for(int to:g[i]){
            used[i][to]=true;
        }
    }
    Graph ret(sz);
    for(size_t i=0;i<sz;i++){
        for(size_t j=0;j<sz;j++){
            if(used[i][j]) continue;
            if(i==j) continue;
            ret[i].push_back(j);
        }
    }
    return ret;
}
//グラフの分解 secondはある頂点がどこに対応するか id[i]={2,3}のとき,頂点iはret[2][3]に対応
//無効グラフのみに対応
pair<vector<Graph>,vector<pair<int,int>>> GraphDecomposition(const Graph &g){
    vector<pair<int,int>> id(g.size(),pair<int,int>(-1,-1));
    vector<Graph> ret;
    vector<int> now;
    for(size_t i=0;i<g.size();i++){
        if(id[i].first!=-1) continue;
        id[i].first=ret.size();
        id[i].second=0;
        now.push_back(i);
        for(size_t j=0;j<now.size();j++){
            for(int to:g[now[j]]){
                if(id[to].first==-1){
                    id[to].first=ret.size();
                    id[to].second=now.size();
                    now.push_back(to);
                }
            }
        }
        Graph r(now.size());
        for(size_t j=0;j<now.size();j++){
            r[j]=g[now[j]];
            for(int &to:r[j]){
                to=id[to].second;
            }
        }
        ret.push_back(r);
        now.clear();
    }
    return make_pair(ret,id);
}
void NO(){
    cout<<"NO"<<"\n";
}
void YES(){
    cout<<"YES"<<"\n";
}
void No(){
    cout<<"No"<<"\n";
}
void Yes(){
    cout<<"Yes"<<"\n";
}
namespace overflow{
    template<typename T>
    T max(){
        return numeric_limits<T>::max();
    }
    template<typename T>
    T ADD(T a,T b){
        T res;
        return __builtin_add_overflow(a,b,&res)?max<T>():res;
    }
    template<typename T>
    T MUL(T a,T b){
        T res;
        return __builtin_mul_overflow(a,b,&res)?max<T>():res;
    }
};
//using namespace overflow;

auto dp=vmake(2*100000+1,vector<int>(1,-1));

bool f(vector<int> a){
    int N=a.size();
    int sum=0;
    auto dp=vmake(N+1,N*2000+1,false);
    dp[0][0]=true;
    for(int i=0;i<N;i++){
        for(int sa=0;sa<=sum;sa++){
            if(dp[i][sa]==false) continue;
            dp[i+1][sa]=true;
            dp[i+1][sa+a[i]]=true;
        }
        sum+=a[i];
    }
    return sum%2 or dp[N][sum/2]==false;
}

void solve(){
    int N;
    cin>>N;
    vector<int> a(N);
    cin>>a;
    if(f(a)){
        cout<<0<<endl;
    }else{
        int id=-1;
        for(int i=0;i<N;i++){
            auto b=a;
            b.erase(b.begin()+i);
            if(f(b)){
                cout<<1<<endl;
                cout<<i+1<<endl;
                return;
            }
        }
    }
}

int main(){
    bin101();
    int T=1;
    //cin>>T;
    while(T--) solve();
}
