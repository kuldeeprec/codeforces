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
ll n;
cin>>n;
vector<string>ans;
priority_queue<string,vector<string>,greater<string>>pq;
for(ll i = 0; i < n; i++){
    string re;
    cin>>re;
    pq.push(re);
}
// sort(ans.begin(),ans.end());
// for(ll i=0; i < n; i++){
//     string a=ans[i];
//     for(ll j=i+1;j<n;j++){
//         string b=ans[j];
//       if(a[a.length()-1]==b[0]){
//          ans[j]=a+ans[j];
//          break;
//       }
//     }
// }
// for(auto i:ans){
//     cout<<i << " ";
// }
// cout<< endl;

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
