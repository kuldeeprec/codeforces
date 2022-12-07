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
const int MAX = 2e3 + 5;
 ll dp[MAX][MAX], a[MAX];
ll recur(int l, int r) {
    if(dp[l][r] != -1)
        return dp[l][r];
    if(l == r)
        return 0;
    return dp[l][r] = a[r] - a[l] + min(recur(l + 1, r), recur(l, r - 1));
}

void  maxi(){
      int n;
    cin >> n;
 
    for(int i = 0; i < n; i++)
        cin >> a[i];
 
    sort(a, a + n);
    memset(dp, -1, sizeof dp);
 
    cout << recur(0, n - 1) << '\n';
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

 
 
