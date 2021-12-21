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
#define mod (ll)1000000007
const int N=2e5+5;


void maxi(){
ll n;
    cin >> n;
    ll arr[n];
    for(int i =0;i<n;i++) {
        cin >> arr[i];
        if(!(arr[i]%2)) {
            arr[i]--;
        }
    }
    for(int i =0;i<n;i++) {
        cout << arr[i];
        if (i!= n - 1) {
            cout << ' ';
        }
    }

      }

int main()
{
    kuldeepyadav12
    //     ll t;
    // cin >> t;
    // while (t--)
    // {
    //   maxi();
    // }
 maxi();
    return 0;
}
