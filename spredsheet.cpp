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
string rowcoltospread(ll N){

    vector<char>v(26);
    char a='A';
    for(ll i=0;i<26;i++){
        v[i]=a;
        a++;
    }
    string ans="";
    if(N<27){
     ans=v[N-1]+ans;
    }
    else{
        while(N>0){
         if(N%26==0&&N/26>0){
            ans='Z'+ans;
            N/=26;
            N--;
        }
        else if(N<=26&&N>=0){
            ans=v[N-1]+ans;
            break;
        }
        else if(N>26&&N%26!=0){
            ll pos= N%26;
            ans=v[pos-1]+ans;
            N/=26;
        }
        
        }
    }
    return ans;

}
string spreadtorowcol(string s){
  ll ans=0;
  vector<char>v(26);
  char a='A';
  for(ll i=0;i<26;i++){
      v[a++]=i+1;
  }
  for(ll i=0;i< s.length(); i++){
       ans=ans*26+v[s[i]];
  }
 return to_string(ans);
}

void maxi(){
    string s;
    cin>>s;
    if(s[0]=='R'){
     size_t pos = 0;
     pos = s.find('C');
     string first= s.substr(1,pos-1);
     string str = s.substr(pos+1);
     ll N= stoi(str);
     string ans="";
     ans=rowcoltospread(N)+ans;
     ans+=first;
     cout<<ans<<endl;
    }
    else{
    size_t pos = 0;
     for(ll i=0;i<s.length();i++){
         if(isdigit(s[i])){
             pos=i;
             break;
         }
     }
     string first= s.substr(0,pos);
     string str = s.substr(pos);
    //  int N= stoi(str);
     string ans="";
     ans= "R"+str;
     ans=ans+"C"+spreadtorowcol(first);
     cout<<ans<<endl;
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
