#include <bits/stdc++.h>
using namespace std;
void permu(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i< s.length();i++){
        char c = s[i];
        string subs = s.substr(0,i)+s.substr(i+1);
        permu(subs,ans+c);
    }
}
int main(){
    string s="abc";
    permu(s,"");
    return 0;
}