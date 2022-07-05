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
// split fuction in c++ mode

void maxi(){
    int n,m;
    cin>>n>>m;
 for (int j = 0; j < n; j++){
      for (int k = 0; k < m; k++){
        cout << ((j + 1) / 2 + (k + 1) / 2) % 2;
        if (k < m - 1){
          cout << ' ';
        }
      }
      cout << endl;
}} 
  


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

 
 
