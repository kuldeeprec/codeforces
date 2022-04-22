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
#define ns()               cout << "Case #" << tc_count ++ << ": ";
const long long mex=1e5+1;
bool check(string s){
    bool ok = false;
    int n= s.length();
    char start=s[0];
    for(int i=1;i<n;){
        
        if(start<s[i]){
            ok=true;
            break;
        }
        else if(start==s[i]){
          i++;
        }
        else if(start>s[i]){
            ok=false;
            break;
    }}
       return ok;
}

void maxi()
{
   string s,t="";
   cin>>s;
   for(int i=0;i<s.length();i++){
       if(check(s.substr(i))){ 
           t.push_back(s[i]);
            t.push_back(s[i]);
       }
       else{
           t.push_back(s[i]);
       }
   }
ns();
cout<<t<<endl;

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
