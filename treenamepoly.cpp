                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define ld long double
#define fl float
#define lcm(a,b) (a*(b/__gcd(a,b)))
#define vs vector <string>
#define vc vector <char>
#define vll vector<ll>
#define sll set<ll>
#define pll pair<ll,ll>
#define plc pair<ll,char>
#define tlll tuple<ll,ll,ll>
#define mt make_tuple
#define vpll vector<pair<ll,ll>>
#define vtll vector<tuple<ll,ll,ll>>
#define vvll vector<vector<ll>>
#define lb lower_bound
#define pb push_back
#define pob pop_back
#define f first
#define s second
#define mll map<ll,ll>
#define mp make_pair
#define sp(n) fixed<<setprecision(n)
#define mcl map<char,ll>
#define msl map<string,ll>
#define mod (ll)1000000007
#define flash ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
#define test ll t;read(t);while(t--) 
#define sortv(v) sort(v.begin(),v.end())
#define INF (ll)(1e15)
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
#define rloop(n,i) for(ll i=n-1;i>=0;i--)
#define loopab(i,a,b,c) for(ll i=a;i<=b;i+=c)
#define reada(a,n) loop(i,n) cin>>a[i];
#define reada1(a,n) loop1(i,n) cin>>a[i];
#define sorta(a) sort(a,a+n,greater<ll>())
#define countone(n) __builtin_popcount(n)
#define numoftrailzero(n) __builtin_ctz(n)
#define maxpowoftwo(n) __builtin_clz(n)
#define leastindexwithone(n)  __builtin_ffs(n)
#define what_is(x) cerr << #x << " is " << x << endl;
#define pfv(v) cout<<v.size()<<"\n";loop(i,v.size()) cout<<v[i]<<" ";cout<<"\n";
#define pv(v) loop(i,v.size()) cout<<v[i]<<" ";cout<<"\n";
#define all(v) v.begin(),v.end()
#define mset(dp,val) memset(dp,val,sizeof(dp))
//if we need to devide any given number in powers of term the power of max term
#define answer(n) ceil(log2(n+1))

void maxi(){
   int n,ans=1;
   cin>>n;
   map<string ,int>repost;
   repost["polycarp"]=1;
   for (int i = 0; i < n; i++)
   {
       string name1,name2,rep;
       cin>>name1>>rep>>name2;
       for(char &c:name1) c=tolower(c);
       for(char &c:name2) c=tolower(c);
       repost[name1]=repost[name2]+1;
       ans=max(ans,repost[name1]);
       
   }
   cout<<ans<<endl;
}
 int main()
    {
        kuldeepyadav12
    
        // ll t;
        //  cin>>t;
        //  while(t--)
            maxi();
        
        return 0;
    }
