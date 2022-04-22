//kuldeep yadav rajkiya engineering college sonbhadra
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int
#define pm push_mnck
#define pf push_front
typedef vector<ll> vll;
#define itr vector<ll>::iterator
constexpr long long SZ = 2e5 + 7;
const long long it = 1000000009;
// Google
ll tc_cnt = 1;
#define ns()               cout << "Case #" << tc_cnt ++ << ": ";
const long long mex=1e5+1;
ll opt(string t,string s,map<char,ll>m){
    ll n= t.length();
    ll r= s.length();
    ll ans=0;
    ll j=0;
    for(ll i = 0; i < n; i++){
         ll k=m[t[i]];
         if(k==0){
             continue;
         }
         else{
             j=k;
             while(j<=r&&i<n){
               if(t[i]==s[j-1]){
                   i++;
                   j++;
               }
               else{
                   break;
               }
             }
             
               j--;
                if(k==1){
                  ans+=r-j+1;
                  
                   }
                   else{
                   ans+=r-j+1+j+j-k+1;
                   }
               }
    }
    return ans;
}
void maxi()
{

 string t,s,r;
 getline(cin, t);
 cin>>s;
 map<char,ll> m;
 vector<string>v;
 ll n= s.length();
 for(ll i=0;i<n;i++){
     m.insert({s[i],i+1});
 }
 ll ans = 0;
    stringstream X(t);
    while (getline(X,r, ' ')) {
          ans+=opt(r,s,m); 
    }
    cout<<ans;
   
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
