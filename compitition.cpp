#include<bits/stdc++.h>
 
using namespace std;
 
#define iOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
//#define mp make_pair
#define L(x) x.length()
#define B(x) x.begin()
#define E(x) x.end()
#define F(x) x.front()
#define SZ(x) x.size()
#define CLR(x) x.clear()
#define SORT(x) sort(x.begin(),x.end())
#define REV(x) reverse(x.begin(),x.end())
#define FOR(i,x,y) for(int i=x;i<y;i++)
#define S(x) scanf("%d",&x)
#define SL(x) cin>>x
#define SD(x) scanf("%lf",&x)
#define SC(x) scanf("%1s",&x)
#define SS(x) scanf("%s",x)
#define DUM() scanf("%c",&dum)
#define READ(x) freopen(x,"r",stdin)
#define WRITE(x) freopen(x,"w",stdout)
#define FILL(x,y) memset(x,y,sizeof(x))
#define IT iterator
//#define ld long double
 
using namespace std;
typedef long long int lli;
typedef long double ld;
typedef unsigned long long int llu;
typedef pair<int,int> P;
typedef vector<int> VI;
typedef vector< VI > VVI;
typedef vector< P > VP;
typedef vector< VP > VVP;
typedef vector<string> VS;
typedef vector< VS> VVS;
typedef map<int,int> MAP;
//const int big=1e7+5;
//long long int arr[big];
long long int ans=0;
lli gcd(lli a,lli b)
{
    if(b==0)
        return a;
    ans+=a/b;
    return gcd(b,a%b);
}
/*
void minDivsieve()
{
    for(long long int i=0;i<=big;++i)
        arr[i]=i;
    for(long long int i=2;i<=big;++i)
    {
        if(arr[i]!=i)
            continue;
        for(long long int j=i;j<=big;j+=i)
            arr[j]=min(arr[j],i);
    }
}*/
 
/*long long int fac[1000001];
 
long long int power(long long int x, long long int y,long long int p)
{
    long long int res = 1; // Initialize result
 
    x = x % p; // Update x if it is more than or
    // equal to p
 
    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
 
// Returns n^(-1) mod p
long long int modInverse(long long int n, int p)
{
    return power(n, p - 2, p);
}
 
// Returns nCr % p using Fermat's little
// theorem.
long long int nCrModPFermat(unsigned long long n,
                                 long long int r, long long int p)
{
    // Base case
    if (r == 0)
        return 1;
 
    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}
 
 
*/
//const int mod=1e9+7;
 
/*vector<vector<int> >v(100005);
int num[100005];
bool visited[100005];
 
int dfs(int node)
{
    visited[node]=true;
    //cout<<"size of node "<<node<<": "<<v[node].size()<<endl;
    if(v[node].size()==1)
    {
        if(visited[v[node][0]])
        {
            num[node]=1;
            //cout<<node<<": "<<num[node]<<endl;
            return 1;
        }
        else
        {
            int temp=1;
            temp+=dfs(v[node][0]);
            num[node]=temp;
            //cout<<node<<": "<<num[node]<<endl;
            return num[node];
        }
    }
    else
    {
        int temp=1;
        for(int i=0;i<v[node].size();++i)
        {
            //cout<<"node: "<<v[node][i]<<endl;
            if(visited[v[node][i]]==false)
            {
                temp=temp+dfs(v[node][i]);
                //cout<<"bas: "<<temp<<endl;
            }
            else
                cout<<v[node][i]<<" is already visited."<<endl;
        }
        num[node]=temp;
        //cout<<node<<": "<<num[node]<<endl;
        return num[node];
    }
}
 
vector<int>v[1000];
int f[1000];
int ans=0;
 
*/
//const int inf=1000000007;
/*vector<vector<int> >adj(200005);
//vector<int>order;
//vector<vector<int> >group(500005);
//long long int desc[100005];
int subs[200005];
bool visited[200005];
int dfs(int node)
{
    visited[node]=true;
    order.push_back(node);
    subs[node]=1;
    //cout<<"here for: "<<node<<endl;
    if(adj[node].empty())
        return subs[node];
    for(int i=0;i<adj[node].size();++i)
    {
        if(!visited[adj[node][i]])
        {
            subs[node]+=dfs(adj[node][i]);
        }
    }
    return subs[node];
}*/
/*int arr[1000001];
int cumm[1000001][10];*/
 
/*vector<vector<int> >adj(26);
//string s[200005];
bool visited[26];
 
long long int dfs(int index)
{
    visited[index]=true;
    for(int i=0;i<adj[index].size();++i)
    {
        for(int j=0;j<s[adj[index][i]].size();++j)
        {
            if(!visited[s[adj[index][i]][j]-'a'])
                dfs(s[adj[index][i]][j]-'a');
        }
    }
}*/
 
/*vector<int> v,r;
 
int find_set(int x)
{
    if(v[x]==-1)
        return x;
    else
        return find_set(v[x]);
}
 
void union_set(int x, int y)
{
    x=find_set(x);
    y=find_set(y);
    if(x!=y)
    {
        if(r[x]>r[y])
        {
            r[x]+=r[y];
            v[y]=x;
        }
        else
        {
            r[y]+=r[x];
            v[x]=y;
        }
    }
}*/
 
//int cnt[400005],pref[400005];
/*int m;
vector<int>ans;
string s;
 
int dfs(int x,int y, int k)  //x=balance, y=curr_weight, k=step number
{
    if(k>m)
        return 1;
    for(int i=0;i<10;++i)
    {
        int f=0;
        if(s[i]=='1' && x>=0 && (i+1)!=y && x-i-1<0)
        {
            f=dfs(x-i-1,(i+1),k+1);
        }
        else if(s[i]=='1' && x<0 && (i+1)!=y && x+i+1>0)
        {
            f=dfs(x+i+1,(i+1),k+1);
        }
        if(f)
        {
            ans.push_back(i+1);
            return 1;
        }
    }
    return 0;
}
 
int n,m;
vector<vector<pair<long long int,long long int> > > adj(100005);
long long int numarr[100005],par[100005];
double carr[100005];
 
void dfs(int index, long long int sum, int num,int pi)
{
    if(carr[index]==-1 || numarr[index]==-1)
    {
        carr[index]=double(sum);
        numarr[index]=num;
        par[index]=pi;
    }
    else
    {
        if(numarr[index]==0)
        {
            carr[index]=sum;
            numarr[index]=num;
            par[index]=pi;
        }
        else if(carr[index]/numarr[index]>=(double(sum)/num))
        {
            carr[index]=sum;
            numarr[index]=num;
            par[index]=pi;
        }
    }
    for(int i=0;i<adj[index].size();++i)
    {
        double summer=adj[index][i].second;
        dfs(adj[index][i].first, carr[index]+summer,numarr[index]+1,index);
    }
}
*/
/*int n,k;
long long int sum[200005];
int counter[200005];*/
#define all(c) c.begin(),c.end()
 
/*vector<vector<int> >adj(100005);
bool visited[100005];
vector<int>path;
int n,a,b,da,db;
int dista=0,distb=0;
 
int traveller(int node)
{
    visited[node]=true;
    if(node==b-1)
    {
        return 1;
    }
    for(int i=0;i<adj[node].size();++i)
    {
        if(visited[adj[node][i]])
            continue;
        int val=traveller(adj[node][i]);
        if(val==1)
        {
            path.push_back(node);
            return 1;
        }
    }
    return 0;
}
 
void dfsa(int node,int ch)
{
    visited[node]=true;
    dista=max(dista,ch);
    for(int i=0;i<adj[node].size();++i)
    {
        if(!visited[adj[node][i]])
        {
            dfsa(adj[node][i],ch+1);
        }
    }
}
void dfsb(int node,int ch)
{
    visited[node]=true;
    distb=max(distb,ch);
    for(int i=0;i<adj[node].size();++i)
    {
        if(!visited[adj[node][i]])
        {
            dfsb(adj[node][i],ch+1);
        }
    }
}
*/
 
long long int mod=1000000007;
 
lli fact[21];
 
void factorial()
{
    fact[0]=1;
    fact[1]=1;
    for(int i=2;i<21;++i)
        fact[i]=(fact[i-1]*i);
    //cout<<"here"<<endl;
    return;
}
 
long long int binpower(long long int a, long long int b)
{
    long long int ans=1;
    while(b>0)
    {
        if(b&1)
            ans=(ans*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return ans;
}
 
bool isPrime(int n)
{
    for(int i=2;i*i<=n;++i)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
lli gprime[10000001];
void grsieve()
{
    gprime[1]=1;
    gprime[0]=1;
    for(lli i=2;i<10000001;++i)
    {
        if(gprime[i]==0)
        {
            for(lli j=i;j<10000001;j+=i)
                gprime[j]=i;
        }
    }
}
 
const int maxn=1e6+1;
bool checkprimes[maxn];
//lli fact[maxn];
vector<lli>primes;
void primechecker()
{
    for(lli i=2;i<maxn;++i)
    {
        if(checkprimes[i]==false)
        {
            primes.pb(i);
            for(lli j=i;j<maxn;j+=i)
            {
                checkprimes[j]=true;
            }
        }
    }
}
 
/*void factcalc()
{
    fact[0]=1; fact[1]=1;
    for(lli i=2;i<maxn;++i)
    {
        fact[i]=(fact[i-1]*i)%mod;
    }
}
 
lli C(lli a, lli b)
{
    lli c=(fact[a]*fact[b-a])%mod;
    lli res=(fact[b]*binpower(c,mod-2))%mod;
    return res;
}*/
 
/*vector<vector<pair<int,int> > >adj(200005);   //1=>edge from curr to next, else edge from next to curr
bool visited[200005];
int val[200005];
int ansforone=0;
 
void dfs(int node)
{
    visited[node]=true;
    for(int i=0;i<adj[node].size();++i)
    {
        if(!visited[adj[node][i].first])
        {
            if(adj[node][i].second==0)
                ansforone++;
            dfs(adj[node][i].first);
        }
    }
}
 
void dfs2(int node)
{
    visited[node]=true;
    //cout<<"node: "<<node+1<<endl;
    for(int i=0;i<adj[node].size();++i)
    {
        if(!visited[adj[node][i].first])
        {
            if(adj[node][i].second==0)
                val[adj[node][i].first]=val[node]-1;
            else
                val[adj[node][i].first]=val[node]+1;
            dfs2(adj[node][i].first);
        }
    }
}*/
 
lli C(int u,int v)   //uCv
{
    lli c=(fact[v]*fact[u-v])%mod;
    lli in=binpower(c,mod-2);
    lli res=(in*fact[u])%mod;
    return res;
}
 
/*vector<vector<int> >adj(5005);
bool visited[5005],order[5005];
*/
 
 
int main()
{
    /*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    iOS;
    int test=1;
    cin>>test;
    while(test--)
    {
        lli l,r;
        cin>>l>>r;
        if(((r+2)/2)<=l)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
