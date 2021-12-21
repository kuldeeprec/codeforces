//kuldeep yadav,Rajkiya engineering college sonbhadra//

#include <bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define pb push_back
#define pf push_front
#define Pb pop_back
void maxi(){
// ll x,n,sum=0,ans;
//     for(int i =0;i<3;i++) {
//         cin >> x;
//         sum+=x;
//     }
//     (sum%5)?ans=sum/5+1:ans=sum/5;
//     sum=0;
//     for(int i =0;i<3;i++) {
//         cin >> x;
//         sum+=x;
//     }
//     (sum%10)?ans+=sum/10+1:ans+=sum/10;
//     cin >> n;
//     if(ans > n){
//       cout << "NO";
//     } 
//     else{
//     cout << "YES";
//     }
int n;
 cin >> n;
 char a[n][n];
        pair<int, int> x = {-1, -1}, y;
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < n;j++) {
                cin >> a[i][j];
                if(a[i][j] == '*' && x.first == -1)
                    x = {i, j};
                else if(a[i][j] == '*')
                    y = {i, j};
            }
        }
        if(x.first != y.first && x.second != y.second) {
            a[x.first][y.second] = '*';
            a[y.first][x.second] = '*';
        } else if(x.first == y.first) {
            int dy = n - 1;
            if(x.first == n - 1)
                dy = 0;
            a[dy][x.second] = a[dy][y.second] = '*';
        } else {
            int dx = n - 1;
            if(x.second == n - 1)
                dx = 0;
            a[x.first][dx] = a[y.first][dx] = '*';
        }
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < n;j++)
                cout << a[i][j];
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
