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
    token = s.substr(0, pos+1);
    ans.push_back(token);
    s.erase(0, pos + delimiter.length());
}
if(s.length()>0){
ans.push_back(s);
}
return ans;
}

void maxi(){
string s;
cin>>s;
ll n=s.length();
vector<ll>b(n,0);
vector<ll>a(n,0);
for(ll i= 0; i < n; i++){
    if(s[i]=='A'){
        if(i==0){
            a[i]=1;
            continue;
        }
      a[i]=a[i-1]+1;
      b[i]=b[i-1];
    }
    else{
        if(i==0){
            b[i]=1;
            continue;
        }
      b[i]=b[i-1]+1;
       a[i]=a[i-1];
    }
}
for(ll i=0;i< n; i++){
    cout<<a[i]<<" "<<b[i]<<endl;
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
