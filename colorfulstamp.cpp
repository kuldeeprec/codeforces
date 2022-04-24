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
    string s;
    cin>>s;
 vector<string> result;
 bool ok =false;
 result=splitfun(s,"W");
 for (auto m:result){
     ll countb= count(m.begin(),m.end(),'B');
     ll countr= count(m.begin(),m.end(),'R');
     if(countb>0&&countr>0){
         bool b1=true;
         bool b2=true;
         if(b1^b2){
             ok=true;
         }
     }
    else if(countb>0&&countr<=0){
         bool b1=true;
         bool b2=false;
         if(b1^b2){
             ok=true;
         }
     }
     else if(countb<=0&&countr>0){
         bool b2=true;
         bool b1=false;
         if(b1^b2){
             ok=true;
         }
     }
 }
 
 if(!ok){
     cout<<"YES"<<endl;
 }
 else{
     cout<<"NO"<<endl;
 }

 
 
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
