                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long 
#define pb push_back
#define pf push_front
#define Pb pop_back
// bool com(const ll &a,const ll &b){
//     return a%2==0&&b%2!=0;
// }
void maxi(){
    // int n;
    // cin >> n;
    // int a[n];
    //     int cnt = 0;
    //     for(int i = 0;i < n;i++) {
    //         cin >> a[i];
    //         cnt += (a[i] < 0);
    //     }
    //     if(cnt) {
    //         cout << "NO\n";
    //         return;
    //     }
    //     cout << "YES\n101\n";
    //     for(int i = 0;i <= 100;i++)
    //         cout << i << " ";
    //     cout << '\n';
    // 
    int n;
    string s;
     cin >> n >> s;
        map<pair<int, int>, int> mp;
        int d = 0, k = 0;
        for(int i = 0;i < n;i++) {
            d += (s[i] == 'D');
            k += (s[i] == 'K');
            int x = d, y = k;
            int g = __gcd(x, y);
            x /= g, y /= g;
            if(mp.count({x, y}));
                cout << mp[{x, y}] + 1 << ' ';
            mp[{x, y}]++;
        }
        cout << '\n';
    
    }
    
    
    
int main(){
    kuldeepyadav12
    ll t;
    cin>>t;
    while(t--){
    maxi();
    }
    
    return 0;
}
