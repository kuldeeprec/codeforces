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
#define Pb pop_back
void maxi(){
//     ll n,group[5]={0},x,ans=0;
// cin >> n;
//     for(int i = 0;i<n;i++)
//         cin >> x,group[x]++;
//     ans = group[4] + group[2]/2;
//     ll tmp = min(group[1],group[3]);
//     ans+=tmp;
//     group[1]-=tmp,group[3]-=tmp;
//     group[2]%=2;
//     tmp = min(group[1],group[2]*2);
//     ans+=(tmp+1)/2;
//     group[1]-=tmp,group[2]-=(tmp+1)/2;
//     ans+=group[1]/4 + !(!(group[1]%4)) + group[2] + group[3];
//     cout << ans<<endl;
// ll n,q,x;
// cin>>n;
// vector<ll>a;
// for (ll i = 0; i < n; i++)
// {
//   cin>>x;
//   a.pb(x);

// }
//  vector<ll>::iterator  upper;

    
// sort(a.begin(),a.end());
// cin>>q;
// for (ll i = 0; i < q; i++)
// {
//     cin>>x;
//     upper = upper_bound(a.begin(), a.end(), x);
//     cout<< upper - a.begin()<<endl; 

// }
// ll a;
// cin>>a;
// (360%(180-a)==0)?cout<<"YES\n":cout<<"NO\n";
// ll n;
// cin>>n;
// ll a[n];
// ll b[n-1];
// ll c[n-2];
// for (ll i = 0; i < n; i++)
// {
//     cin>>a[i];
// }
// for (ll i = 0; i < n-1; i++)
// {
//     cin>>b[i];
// }
// for (ll i = 0; i < n-2; i++)
// {
//     cin>>c[i];
// }

//  sort(a,a+n);
//  sort(b,b+n-1);
//  sort(c,c+n-2);
// vector<ll>v(2);
// vector<ll>::iterator it,ls;
// it=set_difference(a,a+n,b,b+n-1,v.begin());
// cout<<*(--it)<<endl;
// v.clear();
// it=set_difference(b,b+n-1,c,c+n-2,v.begin());
// cout<<*(--it)<<endl;
// v.clear();
// ll n,m,k=0;
// cin>>n>>m;
// ll h[n];
// for (ll i = 0; i < n; i++)
// {
//     cin>>h[i];
    
// }

//  for(ll i=0;i<m;i++) k+=h[i];
 
//  ll ans = 1;
//  ll sum = k;
 
//  for(int i=m;i<n;i++)
//  {
//   sum-=h[i-m];
//   sum+=h[i];
//   if(sum < k) k = sum,ans=i-m+2;
     
//  }
 
//  cout << ans<<endl;
// string s;
// cin>>s;
// ll n,m;
// n=s.length();
// s='K'+s;
// ll dp[n+1]={0};
// for (ll i = 1; i <=n; i++)
// {
//    if(s[i]==s[i-1]){
//        dp[i]++;
//    }
//    dp[i]+=dp[i-1];
// }

// cin>>m;
// while (m--)
// {
//     ll l,r;
//     cin>>l>>r;
    
//     cout<<dp[r]-dp[l]<<endl;

// }
    ll n;
    cin >> n;
    pair<ll,ll>p[n];
    for(int i =0;i<n;i++) {
        cin >> p[i].first >> p[i].second;
    }
    sort(p,p+n);
    ll low = 1e5;
    for(int i =n-1;i>=0;i--) {
        low = min(low,p[i].second);
        if(low != p[i].second){
             cout << "Happy Alex";
             return;
        }
    }
    cout << "Poor Alex";


}

int main()
{
    kuldeepyadav12
    //     ll t;
    // cin >> t;
    // while (t--)
    // {
    //  maxi();
    // }
     maxi();
    return 0;
}
