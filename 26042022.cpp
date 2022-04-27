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
#define REP(i, s, e) for (int i = s; i < e; i++)
#define ns()         cout << "Case #" << tc_count ++ << ": ";
// split fuction in c++ mode
vector<string>splitfun(string s,string delimiter){
vector<string>ans;
size_t pos = 0;
string token;
while ((pos = s.find(delimiter)) != string::npos) {
    token = s.substr(0, pos+1);
    ans.push_back(token);
    s.erase(0, pos + delimiter.length());
}
if(s.length()>0){
ans.push_back(s);
}
return ans;
}

void maxi(){
    ll n;
    cin>>n;
    vector<ll>cnt(n+1),a(n+1),b(n+1);
        REP (i, 1, n + 1) {
            cnt[i] = 0;
        }
        REP (i, 0, n) {
            cin >> a[i];
        }
        REP (i, 0, n) {
            cin >> b[i];
        }
        int i = 0, j = 0;
        bool pos = 1;
        while (j < n) {
            if (i < n && j < n && a[i] == b[j]) {
                i++; j++;
                continue;
            }
            if (cnt[b[j]] > 0 && b[j] == b[j - 1]) {
                cnt[b[j++]]--;
            } else if (i < n) {
                cnt[a[i++]]++;
            } else {
                pos = 0;
                break;
            }
        }
        if (pos) {
            assert(i == n);
            REP (i, 1, n + 1) {
                assert(cnt[i] == 0);
            }
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
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
