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
bool check(vector<ll>a){
    bool ok= true;
    for(ll i=0;i<a.size()-1;i++){
        if(a[i]>a[i+1]){
            ok=false;
            break;
        }
    }
    return ok;
}

void maxi(){
// ll a,b,c,x,y;
// cin>>a>>b>>c>>x>>y;
// bool ok1=false,ok2=false;
// if(a>=x||a+c-x>=0){
//    ok1=true;
//    if(a<x){
//        c=a+c-x;
//    }
// }
// if(b>=y||b+c-y>=0){
//     ok2=true;
// }
// if(ok1&&ok2){
//     cout<<"YES"<<endl;
// }
// else{
//     cout<<"NO"<<endl;
// }


// second
// ll n;
// cin>>n;
// vector<ll>v(n);
// for(ll i=0;i<n;i++){
//     cin>>v[i];
// }
// ll ans=0;
// ll i=n-1;
// bool ok=true;
// while(i>=1){
//     if(v[i]>v[i-1]){
//         i--;
//       continue;
//     }
//     if(v[i]<=v[i-1]){
//         v[i-1]=v[i-1]/2;
//         ans++;  
//     }
//     if(v[i]==0&&v[i-1]==0||v[i]==0&&v[i+1]==0){
//       ok=false;
//       break;
//     }
//     if(v[i-1]==0){
//         i--;
//     }

// }
// if(ok){
//     cout<<ans<<endl;
// }
// else{
//     cout<<"-1"<<endl;
// }

// string s;
// cin>>s;
// ll n=s.length();
// ll ans=1;
// if(s.length()<=1){
//     cout<<ans<<endl;
// }
// else{

// for(ll i=0;i<n-1;i++){
// if(s[i]=='0'){
//   break;
// }
//  else  if(s[i]=='1'&&s[i+1]=='0'||s[i]=='?'&&s[i+1]=='0'){
//        ans++;
//        break;
//    }
//    else if(s[i]=='1'&&s[i+1]=='1'){
//        ans=1;
//         continue;
//    }
   
//    else if( s[i]=='1'&&s[i+1]=='?'|| s[i]=='?'&&s[i+1]=='?'){
//        ans++;
//    }
//    else if(s[i+1]=='1'){
//        ans=1;
//    }

// }
// cout<<ans<<endl;

// }

ll n,k;
cin>>n>>k;
string s;
cin>>s;
string ans="";
ll r=0;
map<char,char>mp;
for(int i=0;i<n;i++){
    ll val= s[i]-'a';
    if(k>=val&&k>0){
        k=k-val;
        mp[s[i]]='a';
    }
    else if(k>0){
        k=0;
        if(mp[s[i]]>s[i]-k){
         mp[s[i]]=s[i]-k;
        }
    } 
}
for(int i=0;i<n;i++){
     if(mp[s[0]]<s[i]){
         ans+=mp[s[0]];
     }
     else{
         ans+=s[i];
     }
}
cout<<ans<<endl;

}
int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    cin >> t;
   
    while (t--)
    {
       maxi();
    }

    return 0;
}

