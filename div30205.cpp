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
     
	// ll x,y;
    // cin>>x>>y;
    //  if(x>y||y%x!=0){
    //      cout<<0<<" "<<0<<endl;
    //  }
    //  else{
    //      cout<<1<<" "<<y/x<<endl;
    //  }
    //  string s;
    //     cin >> s;
    //     int a=25*(s[0]-'a');
    //     a+=(s[1]-'a');
    //     if(s[1]>s[0]) a--;
    //     cout << a+1 << "\n";
    // forth<<>>


    // string s,t;
    //     cin >> s >> t;
    //     bool a=0;
    //     for(char c:t) a|=(c=='a');
    //     if(t=="a") cout << "1\n";
    //     else if(!a) cout << (1ll<<(s.size())) << "\n";
    //     else cout << "-1\n";


    // forth

    //   int n;
    // cin >> n;
    // vector<int> a(n);
    // for (int j = 0; j < n; j++){
    //   cin >> a[j];
    // }
    // vector<int> b = a;
    // sort(b.begin(), b.end());
    // bool ok = true;
    // if (n % 2 == 1){
    //   if (a[0] != b[0]){
    //     ok = false;
    //   }
    // }
    // for (int j = n % 2; j < n; j += 2){
    //   if (!(a[j] == b[j] && a[j + 1] == b[j + 1] || a[j] == b[j + 1] && a[j + 1] == b[j])){
    //     ok = false;
    //   }
    // }
    // if (ok){
    //   cout << "YES" << endl;
    // } else {
    //   cout << "NO" << endl;
    // }
    //
    // fifth
 int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  vector<int> a2 = a;
  sort(a2.begin(), a2.end());
  int ans = (a2[0] + 1) / 2 + (a2[1] + 1) / 2;
  for (int i = 0; i < n - 2; i++){
    if (a[i] <= a[i + 2]){
      ans = min(ans, a[i] + (a[i + 2] - a[i] + 1) / 2);
    } else {
      ans = min(ans, a[i + 2] + (a[i] - a[i + 2] + 1) / 2);
    }
  }
  for (int i = 0; i < n - 1; i++){
    ans = min(ans, max({(a[i] + 1) / 2, (a[i + 1] + 1) / 2, (a[i] + a[i + 1] + 2) / 3}));
  }
  cout << ans << endl;

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
