//kuldeep yadav rajkiya engineering college sonbhadra
#include<bits/stdc++.h>

using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
const ll mod = 1e9 + 7;
// Google
ll tc_count = 1;
#define ns()         cout << "Case #" << tc_count ++ << ": ";

// split fuction in c++ mode
vector<string>splitfun(string s,string delimiter){
vector<string>ans;
size_t pos = 0;
string token;
while ((pos = s.find(delimiter)) != string::npos) {
    token = s.substr(0, pos);
    ans.push_back(token);
    s.erase(0, pos + delimiter.length());
}
if(s.length()>0){
ans.push_back(s);
}
return ans;
}


void maxi(){
// string s;
// cin>>s;
// ll n = s.length();
// ll ans=0;
// ll ans2=0;
// ll small=0;
//  for(int i=0;i<n;i++){
//     ans+=(s[i]-'a')+1;
//  }
 
//  if(n&1){
//      if(s[0]<s[n-1]){
//      small=s[0]-'a'+1;
//  }
//  else{
//    small= s[n-1]-'a'+1;
//  }
//       ans-=small,ans2=small;
//       }

//  ans>ans2?cout<<"Alice "<<ans-small<<endl : cout<<"Bob "<<small-ans<<endl;
// second
//   string s;
//         cin >> s;
//         int n = s.length();
//         set<char> c;
//         bool ok = true;
//         int k;
//         for(k=0;k<n;k++)
//         {
//             if(c.find(s[k])==c.end())
//                 c.insert(s[k]);
//             else
//                 break;
//         }
//         for(int i=k;i<n;i++)
//         {
//             if(s[i]!=s[i-k])
//                 ok = false;
//         }
//         if(ok)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }

// third;
ll n;
cin>>n;


	
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
