
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
  auto check = [](const string& s) {
    int bal = 0;
    for (char c : s) {
      if (c == '(') ++bal;
      if (c == ')') --bal;
      if (bal < 0) return false;
    }
    return bal == 0;
  };
void maxi(){
    string s;
    cin >> s;
    vector<int> pos;
    int op = s.size() / 2, cl = s.size() / 2;
    for (int i = 0; i < s.size(); ++i) {
      if (s[i] == '?') pos.push_back(i);
      if (s[i] == '(') --op;
      if (s[i] == ')') --cl;
    }
    for (int i = 0; i < pos.size(); ++i) {
      if (i < op) s[pos[i]] = '(';
      else s[pos[i]] = ')';
    }
    cout<<s<<endl;
    bool ok = true;
    if (op > 0 && cl > 0) {
      swap(s[pos[op - 1]], s[pos[op]]);
      if (check(s)) ok = false;
    }
    cout << (ok ? "YES\n" : "NO\n");
  
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

 
 
