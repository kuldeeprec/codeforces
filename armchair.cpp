                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define endl '\n'
#define pi pair<int, int>
#define f first
#define s second
const int N = 5e3 + 5;
int n, a[N], memo[N][N];
vector<int> v1, v2;
int maxi(int i, int j) {
    if(i == v1.size())
        return 0;
    if(j == v2.size())
        return 1e9;
    int &ans = memo[i][j];
    if(~ans)
        return ans;
    return ans = min(maxi(i + 1, j + 1) + abs(v1[i] - v2[j]), maxi(i, j + 1));
}
int main() {
 kuldeepyadav12
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
        if(a[i])
            v1.push_back(i);
        else
            v2.push_back(i);
    }
    memset(memo, -1, sizeof memo);
    cout << maxi(0, 0);
    return 0;
}