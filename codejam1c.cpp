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
multiset<string>ans;
for(ll i = 0; i < n; i++){
    string a;
    cin>>a;
    ans.insert(a);
}

bool ok = true;
ll count =5;
while(count>0&&ok){
    string a;
    string s= *ans.begin();
    cout<<s<<" s"<<endl;
    auto fi= ans.begin();
    a+=s[s.length()-1];
    cout<<a<<" a"<<endl;
     auto it = ans.lower_bound(a);
     cout<<*it<<endl;
     if(it==ans.begin()||it==ans.end()){
         ok=false;
         break;
     }
    a="";
    string result=*it;
    if(result[0]==s[s.length() - 1]){
        s+=result;
        ans.insert(s);
        ans.erase(fi);
        ans.erase(it);
    }
    s="";
    count--;
}
cout<<*ans.begin()<<endl;

    
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
