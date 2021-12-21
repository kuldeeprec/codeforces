#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int mod = 1e9 + 7;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi()
{  
       string s;
        cin >> s;
        string ans = "";
        ans += s[0];
        for(int i = 1;i + 1 < s.size();i += 2)
            ans += s[i];
        ans += s.back();
        cout << ans << '\n';
    }
     
       
  
  

 
    int main()
    {
        kuldeepyadav12
        ll t;
        cin>>t;
        while(t--)
            maxi();
        
        return 0;
    }