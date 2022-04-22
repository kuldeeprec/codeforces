#include<bits/stdc++.h>
using namespace std;

void subSeq(string s,string ans,int &c1)
{
    
        // int x = stoi(ans);
        // if(x%3==0)
        // {
        //     c1++;
        // }
    if(s.length()==0)
    {
        if(ans.length()!=0){
           int x = stoi(ans);
        if(x%3==0)
        {
            c1++;
        }
        }
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string r=s.substr(1);
    subSeq(r,ans,c1);
    subSeq(r,ans+ch,c1);
}
int32_t main()
{
// #ifndef ONLINE_JUDGE
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
// #endif
ios::sync_with_stdio(false);
cin.tie(0);
// Write your code here......
string s;
cin>>s;
int c1 = 0;
subSeq(s,"",c1);
cout<<c1;
return(0);
}