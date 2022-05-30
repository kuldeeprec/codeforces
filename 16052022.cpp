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

    string s;
    cin >> s;
    int N = s.size();
    vector<int> S(N + 1);
    S[0] = 0;
    for (int j = 0; j < N; j++){
      S[j + 1] = S[j];
      if (s[j] == '0'){
        S[j + 1]++;
      }
    }
    vector<int> one;
    for (int j = 0; j < N; j++){
      if (s[j] == '1'){
        one.push_back(j);
      }
    }
    int cnt = one.size();
    int tv = cnt, fv = -1;
    while (tv - fv > 1){
      int mid = (tv + fv) / 2;
      bool ok = false;
      for (int j = 0; j <= mid; j++){
        int L = one[j];
        int R = one[cnt - 1 - mid + j] + 1;
        if (S[R] - S[L] <= mid){
          ok = true;
        }
      }
      if (ok){
        tv = mid;
      } else {
        fv = mid;
      }
    }
    cout << tv << endl;
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

