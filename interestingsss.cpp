                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav73 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
const int N = 4e6 + 5;
ll fact[N],gcds[N];
void maxi(){
   
   
   for (ll i = 0; i < N; i++)
   {
       fact[i]=i;
       gcds[i]=0;
   }
    for (ll p = 2; p < N; p++)
   {
       if(fact[p]==p){
           fact[p]=p-1;
       
         for (ll i = 2*p; i < N; i+=p)
   {
      
           fact[i]=(fact[i]/p)*(p+1);
       
   }
   }
   }
         for (ll i = 1; i < N; i++)
   {
      
           gcds[i]+=i-1;
           for(ll j=2*i;j<N;j+=i){
               gcds[j]+=i*((1+fact[j/i])/2);
           }
       
   }
   
}
 int main()
    {
        kuldeepyadav73
        maxi();
        ll t;
         cin>>t;
         while(t--){
            ll k;
            cin>>k;
            cout<<gcds[4*k+1];
         }
        
        return 0;
    }
