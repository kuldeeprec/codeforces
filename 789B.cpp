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
ll n,cnt=1,x=0,y=0,L=-1;
cin>>n;
string s;
cin>>s;
// s+="$";
// vector<ll>ans;
// for(ll i=0;i<n;i++)
// {
//    if(s[i]==s[i+1]){
//        cnt++;
//    }
//    else{
//        ans.push_back(cnt);
//        cnt=1;
//    }
// }

// cnt=0;
// for(ll i=ans.size()-1;i>=0;i--){
//     if(ans[i]&1){ 
//         cnt++;
//         ans[i-1]++;
//     }
// }
// cout<<cnt<<endl;
for (int i = 0; i < n; i += 2) {
            if (s[i] != s[i + 1]) x += 1;
            else {
                if (L != s[i]) y += 1;
                L = s[i];
            }
        }
        cout << x << " " << max(y, 1ll) << "\n";

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

