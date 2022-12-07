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
void verify(map<char,char>&mp){
    int flag=0;
    for(auto i:mp){
        if(mp[mp[i.first]]<mp[i.first]){
           mp[i.first]= mp[mp[i.first]];
           flag++;
        }
    }
    if(flag==0){
        return;
    }
    else{
        verify(mp);
    }
}

void solution(){
 string s1,s2,s3;
 cin>>s1>>s2>>s3;
 map<char,char>mp;
 for(int i = 0; i <26;i++){
     mp[i+'a']=i+'a';
 }

for(int i=0;i<s1.length();i++){
    if(s1[i]<s2[i]){
      mp[s2[i]]=s1[i];
    }
    else if(s1[i]>s2[i]){
        mp[s1[i]]=s2[i];
    }

    verify(mp);


}
string result="";
for(int i=0;i<s3.length();i++){
    result.push_back(mp[s3[i]]);
}
cout<<result<<endl;
}
  


int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    // cin >> t;
    while (t--)
    {
      solution();
    }

    return 0;
}

 
 
