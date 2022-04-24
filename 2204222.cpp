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
bool check(string s){
    if(s.length()<2){
        return false;
    }
    if(s.length()==3){
     if(s[0]==s[1]==s[2]){
         return true;
     }
     return false;
    }
    if(s.length()==2){
         if(s[0]==s[1]){
         return true;
     }
     return false;
    }
    if(s[0]==s[1]){
      bool ans1=check(s.substr(2));
    }
   
    bool ans2;
    return ans1||ans2;
}

void maxi(){
 string s;
 cin>>s;
 bool ok=false;
 //check by 2;
 for(int i=0;i<s.length();){
     if(s[i]=='a'){
         if(checkby2(s.substr(i),'a')){
         i=i+2;
         }
         
     }
     if(s[i]=='b'){
         if(checkby2(s.substr(i),'b')){
          i=i+2;
         }
         
     }
 }
 //check by three

 
 
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
