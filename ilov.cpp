#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int mod = 1e9 + 7;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi()
{  
      int a, b;
        string s;
        cin >> a >> b >> s;
        int n = a + b;
 
        bool palindrome = true;
        for (int i = 0; i < n / 2; ++i) {
            palindrome &= s[i] == '?' || s[n - 1 - i] == '?' || s[i] == s[n - 1 - i];
        }
 
        if (!palindrome) {
            cout << -1 << "\n";
            return;
        }
 
        for (int i = 0; i < n / 2; ++i) {
            if (s[i] == '0' || s[n - 1 - i] == '0') {
                s[i] = s[n - 1 - i] = '0';
                a -= 2;
            } else if (s[i] == '1' || s[n - 1 - i] == '1') {
                s[i] = s[n - 1 - i] = '1';
                b -= 2;
            }
        }
 
        if (n % 2 == 1) {
            if (s[n / 2] == '?') {
                if (a % 2 == 0) {
                    s[n / 2] = '1';
                } else {
                    s[n / 2] = '0';
                }
            }
            --(s[n / 2] == '0' ? a : b);
        }
 
        for (int i = 0; i < n / 2; ++i) {
            if (s[i] == '?') {
                if (a > 0) {
                    s[i] = s[n - 1 - i] = '0';
                    a -= 2;
                } else {
                    s[i] = s[n - 1 - i] = '1';
                    b -= 2;
                }
            }
        }
 
        if (a == 0 && b == 0) {
            cout << s << "\n";
        } else {
            cout << -1 << "\n";
        }
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