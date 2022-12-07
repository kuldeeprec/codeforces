
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

// ll n,x;
// cin>>n>>x;
// vector<ll>v(2*n);
// for(ll i=0;i<2*n;i++){
//     cin>>v[i];
// }
// sort(v.begin(), v.end());
// bool ok=true;

// for(ll i=0,j=n;i<n,j<2*n;i++,j++){
//      if(v[j]-v[i]<x){
//        ok=false;
//        break;
//      }
// }
// ok?cout<< "YES\n" : cout << "NO\n";


//   int n; cin >> n;
//     vector<int> a(n);
//     for(int i = 0; i < n; ++i)
//         cin >> a[i];
//     ll ans = 0;
//     int ptr = 0;
//     while(ptr < n && a[ptr] == 0)
//         ptr++;
//     for(int i = ptr; i < n-1; ++i){
//         ans += a[i];
//         if(a[i] == 0) ans++;
//     }

//     cout << ans << "\n";


// third argument
    // int n, c, q; cin >> n >> c >> q;
    // string s; cin >> s;

    // vector<ll> left(c+1), right(c+1), diff(c+1);
    // left[0] = 0;
    // right[0] = n;

    // for(int i=1; i<=c; ++i){
    // 	ll l, r; cin >> l >> r;
    // 	l--; r--;
    // 	left[i] = right[i-1];
    // 	right[i] = left[i] + (r-l+1);
    // 	diff[i] = left[i] - l;
    // }

    // while(q--){
    // 	ll k; cin >> k;
    // 	k--;
    // 	for(int i=c; i>=1; --i){
    // 		if(k < left[i]) continue;
    // 		else k -= diff[i];
    // 	}
    // 	cout << s[k] << "\n";
    // }


// fourth argument
   int n; cin >> n;
    string s,t; cin >> s >> t;
    vector<ll> pos_s, pos_t;

    if(s[0] != t[0] || s[n-1] != t[n-1]){
        cout << -1 << "\n";
        return;
    }
    for(int i=0; i<n-1; i++){
        if(s[i] != s[i+1]) pos_s.push_back(i);
        if(t[i] != t[i+1]) pos_t.push_back(i);
    }
    if(pos_s.size() != pos_t.size()){
        cout << -1 << "\n";
    }
    else{
        int k = pos_s.size();
        ll ans = 0;
        for(int i=0; i<k; ++i){
            ans += abs(pos_s[i] - pos_t[i]);
        }
        cout << ans << "\n";
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

 
 
