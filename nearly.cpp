
#include<bits/stdc++.h>
 using namespace std;
 #define ll long long
  int main()
  {
  	
    string s;
    cin >> s;
    ll cnt = 0;
    for(int i =0;i<s.size();i++) {
        if(s[i] == '4' || s[i] == '7')cnt++;
    }
    if(cnt == 4 || cnt == 7)return cout << "YES",0;
    cout << "NO";
    return 0;
  	 
  }