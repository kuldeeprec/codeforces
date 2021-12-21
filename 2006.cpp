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
#define mod (ll)1000000007

  
void maxi()
 {
//     ll n;
//       cin >> n;
//       ll a[n];
//         bool yes = false;
//         for(ll i = 0;i < n;i++) {
//             cin >> a[i];
//             ll x = sqrt(a[i]);
//             if(x * x != a[i])
//                 yes = true;
//         }
//         yes ? cout << "YES\n" : cout << "NO\n";
// ll x,y,k;
// cin>>x>>y;
//    k=abs(x-y);
//    k>1?cout<<x+y+k-1<<endl:cout<<x+y<<endl;
// ll n,m;
//     cin >> n >> m;
//     char arr[n][m];
//     for(int i =0;i<n;i++)
//         for(int j =0;j<m;cin>>arr[i][j++]);
//     ll cnt=0,cnt1=0,cnt2=0;
//     bool yes;
//     for(int i =0;i<n;i++) {
//         yes = true;
//         for(int j=0;j<m;j++) {
//             if(arr[i][j]=='S')yes = false;
//         }
//         if(yes)cnt+=m,cnt1++;
//     }
//     for(int i = 0;i<m;i++) {
//         yes = true;
//         for(int j=0;j<n;j++) {
//             if(arr[j][i] == 'S')yes= false;
//         }
//         if(yes)cnt+=n,cnt2++;
//     }
//     if(cnt)cnt-=cnt1*cnt2;
//     cout << cnt;
    // ll n,m,x,sum=0;
    // cin>>n>>m;
    // ll a[n+1];
    // vector<ll>b;
    // vector<bool>v(n+1,false);
   
    
    // for (ll i = 1; i <=n; i++)
    // {
    //     cin>>a[i];
    // }
    // for (ll i = 1; i <=m; i++)
    // {
    //     cin>>x;
    //     v[x]=true;
    //     b.pb(a[x]);
    // }
    // for (ll i = 1; i <=n; i++)
    // {
    //     if(!v[i]){
    //         sum+=a[i];
    //     }
    // }
    
    // sort(b.begin(),b.end()); 
    // ll k=b.size()-1;  
    // for (ll i = 0; i <=k;)
    // {
    //     if(b[i]<sum&&sum>b[k]){
    //         sum*=2;
    //         i++;
    //     }
    //     else
    //     {

    //         sum+=b[k];
    //         k--;
    //     }
        
    // }
    // cout<<sum<<endl;
// int m;
//     cin>>m;
 
//     map<double,vector<int>> mp;
//     vector<int> ans(m,0);
//     for(int i=0;i<m;i++){
//         string s;
//         cin>>s;
 
//         int ob,plus,cb,slash;
//         for(int i=0;i<s.size();i++){
//             if(s[i]=='(') ob = i;
//             if(s[i]=='+') plus = i;
//             if(s[i]==')') cb = i;
//             if(s[i]=='/') slash = i;
//         }
//         double a = stoi(s.substr(ob+1,plus-ob+1));
//         double b = stoi(s.substr(plus+1,cb-plus+1));
//         double c = stoi(s.substr(slash+1,s.size()-slash+1));
//         mp[(a+b)/c].push_back(i);
//     }

 
//     for(auto x:mp){
//         for(auto val:x.second)
//             ans[val] = (x.second).size();
//     }
//    for(auto &i:ans){
//        cout<<i<<" ";
//    }
//     cout<<endl;
// }
    int n;
     cin >> n;
     ll a[2*n];
     ll ans[2*n];
        for(int i = 0;i < 2 * n;i++)
            cin >> a[i];
        sort(a, a + 2 * n);
        for(int i = 0, j = 0;j < 2 * n;i++, j += 2)
            ans[j] = a[i];
        for(int i = 2 * n - 1, j = 1;j < 2 * n;i--, j += 2)
            ans[j] = a[i];
        for(int i = 0;i < 2 * n;i++)
            cout << ans[i] << " ";
        cout << '\n';
    }
   


    
    
     
    


int main()
{
    kuldeepyadav12
        ll t;
    cin >> t;
    while (t--)
    {
        maxi();
    }
    
   
    return 0;
}
