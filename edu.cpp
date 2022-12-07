
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


void maxi(){
  string s;
  cin>>s;
  string ans="";
  int k=0;
  for(int i=0;i<s.size();i++){
      if(s[0]=='h'){
        ans+=s.substr(0,4);
        ans+="://";
        k=4;
        s[0]='x';
      }
      if(s[0]=='f'){
         ans+=s.substr(0,3);
         k=3;
         ans+="://";
         s[0]='x';
      }
      if(s[i]=='r'&&s[i+1]=='u'){
         int j= i-k;
         ans+=s.substr(k,j);
         ans+=".ru";
         ans.push_back('/');
         ans+=s.substr(i+2);
         break;
      }
      

  }
  cout<<ans<<endl;
     
}
  


  


int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    // cin >> t;
    while (t--)
    {
       maxi();
    }

  
    return 0;
}

 
 
