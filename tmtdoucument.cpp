#include <bits/stdc++.h>
using namespace std;
const int h = 1e5 + 5;
const int mod = 1e9 + 7;
const int N=2010;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi(){
    ll n;
    string s;
    cin>>n;
     cin >> s;
        int cnt1 = 0, cnt2 = 0;
        for(auto &i : s)
            cnt1 += (i == 'M');
        if(cnt1 != n / 3) {
            cout << "NO\n";
            return;
        }
        cnt1 = 0;
        bool yes = true;
        for(auto &i : s) {
            cnt1 += (i == 'M');
            cnt2 += (i == 'T');
            if(i == 'M')
                yes &= (cnt1 <= cnt2);
        }
        cnt1 = 0, cnt2 = 0;
        for(int i = n - 1;i >= 0;i--) {
            cnt1 += (s[i] == 'M');
            cnt2 += (s[i] == 'T');
            if(s[i] == 'M')
                yes &= (cnt1 <= cnt2);
        }
        yes ? cout << "YES\n" : cout << "NO\n";
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