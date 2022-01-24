//kuldeep yadav,Rajkiya engineering college sonbhadra//
#include <bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define pb push_back
#define pf push_front
#define all(v) (v).begin(),(v).end()
#define Pb pop_back
#define mod (ll)1000000007
#define sz(X) (int)X.size()
#define fo(i,a,b) for(i=a;i<=b;i++)
typedef vector<ll> vll;
constexpr long long SZ = 2e5 + 7;
// Google
int tc_cnt = 1;
#define ns()               cout << "Case #" << tc_cnt ++ << ": ";
// vector<vector<int>> dp(SZ, vector<int>(33));

int modpow(int a, int b, int m = mod) {
    a = a & m; int ans = 1;
    while (b) {
        if (b & 1) { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
ll reverse(ll n){
    ll rem=0,ans=0;
   ll lastrem=n%10;
    while(n>0){
        if(lastrem==0){
            rem=1;
        ans= ans*10+rem;
        n=n/10;
        lastrem=-1;
        }
        else{
            rem=n%10;
            if(lastrem==-1&&rem>0){
                rem=rem-1;
           ans= ans*10+rem;
            n=n/10; 
            lastrem=1; 
            }
            else{
            
        ans= ans*10+rem;
        n=n/10;
            }
           
        }
       
    }
    return ans;
}
void maxi(){
 ll m,s;
 cin>>m>>s;
 ll ans=0,total=s,rem=s,last=1,digit=0;
 
 bool ok =false;
 for(int i = 9; i>=0; i--){
 if((ans+rem)<=total&&rem>=i&&digit<=m){
       ans=ans*10+i;
       rem=s-i;
       s=s-i;
        ok=true;
        digit++;
       
   }
 }
 while(digit<m&&ok&&total!=0){
      ans=ans*10+0;
        digit++;
 }
  
   ll ans2=reverse(ans);
 if(ok&&digit==m){
     cout<<ans2<<" "<<ans<<endl;
 }
 else{
     ans=-1,ans2=-1;
       cout<<ans2<<" "<<ans<<endl;
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
