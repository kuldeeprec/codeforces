#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 5;
int a[N];
void maxi()
{  ll n;
   cin >> n;
        multiset<int> st;
        ll sum = 0;
        for(int i = 0;i < n + 2;i++) {
            cin >> a[i];
            sum += a[i];
            st.insert(a[i]);
        }
        vector<int> ans;
        for(int i = 0;ans.empty() && i < n + 2;i++) {
            sum -= a[i];
            st.erase(st.find(a[i]));
            int tmp = *st.rbegin();
            if(sum - tmp == tmp) {
                for(auto &j : st)
                    ans.push_back(j);
                ans.pop_back();
            }
            sum += a[i];
            st.insert(a[i]);
        }
        if(ans.empty())
            cout << "-1\n";
        else {
            for(auto &j : ans)
                cout << j << " ";
            cout << '\n';
        }
    }
  
  

 
    int main()
    {
        kuldeepyadav12
        ll t;
        cin >> t;
        while (t--)
        {
            maxi();
        }
        return 0;
    }