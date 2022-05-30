//kuldeep yadav rajkiya engineering college sonbhadra
#include<bits/stdc++.h>

using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
// Google
ll tc_count = 1;
#define ns()         cout << "Case #" << tc_count ++ << ": ";
// map<char,ll>mp;
// ll cost(string s1,string s2){
//     ll ans=0;
//     for(int i=0;i< s2.length();i++){
         
//              ans+=abs(mp[s2[i]]-mp[s1[i]]); 
         
//     }
//     return ans;
// }
// int n,m;
// vector<vector<int>>v;

// int upleft(int r,int c)
// {
//     int count=0;
//     while(r>=0&&c>=0){
//         count+=v[r][c];
//         r--;
//         c--;
//     }
//     return count;
// }
// int upright(int r,int c)
// {
//      int count=0;
//     while(r>=0&&c<m){
//      count+=v[r][c];
//         r-- ;
//         c++;
//     }
//     return count;
// }
// int downleft(int r,int c)
// {
//     int count=0;
//     while(r<n&&c>=0){
//         count+=v[r][c];
//         r++;
//         c--;
//     }
//     return count;
// }
// int downright(int r,int c)
// {
//      int count=0;
//     while(r<n&&c<m){
//         count+=v[r][c];
//         r++;
//         c++;
//     }
//     return count;
// }

void maxi() {
// string s;
// cin>>s;
// ll sum1=0,sum2=0;
// for(int i=0;i<3;i++){
//   sum1+=s[i]-'0';

// }
// for(int i=3;i<6;i++){
//   sum2+=s[i]-'0';
// }
// sum1==sum2?cout<<"YES\n":cout<<"NO\n";


// second 
// ll n;
// cin>>n;
// vector<ll>v(n);
// for(int i=0;i<n;i++){
//     cin>>v[i];
// }
// sort(v.begin(), v.end());
// ll ans=0;
// for(int i=1;i<n;i++){
//    ans+=(v[i]-v[0]);
// }
// cout<<ans<<endl;
// third
// ll n,m;
// cin>>n>>m;
// vector<string>v(n);
// for(ll i=0;i<n;i++){
//    cin>>v[i];
// }
// ll mincost=INT_MAX,cost1=0;

// for(ll i=0;i<n;i++){
//     for(ll j=i+1;j<n;j++){
//            cost1=cost(v[i],v[j]);
//            if(cost1<mincost){
//                mincost=cost1;
//            }
//     }
// }
// cout<<mincost<<endl;
// forth

// cin>>n>>m;
// v.resize(n,vector<int>(m));
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//        cin>>v[i][j];
//     }
// }
// ll maxcost=0;
// ll ld=0;
// maxcost=ld;
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//     ll  cost=v[i][j]+upright(i-1,j+1)+downleft(i+1,j-1)+upleft(i-1,j-1)+downright(i+1,j+1);
//    if(cost>maxcost){
//       maxcost=cost;
//    }
//     }
// }
// cout<<maxcost<<endl;

// fifthen
ll n,q;
cin>>n>>q;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(), v.end());
reverse(v.begin(), v.end());
for(int i=1;i<n;i++){
    v[i]+=v[i-1];
}
while(q--){
    int f;
    cin>>f;
    ll ans=-1;
   auto i= lower_bound(v.begin(), v.end(), f);
    ans= i - v.begin() +1;
    if(i==v.end()){
        ans=-1;
    };
    cout<<ans<<endl;
   
}
}

int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    //     char c ='a';
    // for(ll i=0;i<26;i++){
    //     mp[c++]=i;
    // }
    cin >> t;
   
    while (t--)
    {
       maxi();
    }

    return 0;
}
