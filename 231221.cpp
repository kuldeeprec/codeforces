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
#define sz(X) (int)X.size()
// Google
int tc_cnt = 1;
#define ns()               cout << "Case #" << tc_cnt ++ << ": ";
 

int modpow(int a, int b, int m = mod) {
    a = a & m; int ans = 1;
    while (b) {
        if (b & 1) { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}
void maxi(){
int arr[7];
		for(int i = 0; i < 7; i++){
			cin >> arr[i];
		}
		cout << arr[6] - arr[5] << " ";
		cout << arr[1] << " ";
		cout << arr[6] - arr[0] - arr[1] << endl;
// second 
// int n;
// 		cin >> n;
// 		vector<string> arr(n - 2);
// 		for(int i = 0; i < n - 2; i++)
// 			cin >> arr[i];
// 		string ans = "";
// 		bool found = false;
// 		for(int i = 0; i < n - 3; i++){
// 			ans += arr[i][0];
// 			if(arr[i][1] != arr[i + 1][0]){
// 				ans += arr[i][1];
// 				found = true;
// 			}
// 		}
// 		ans += arr[n - 3];
// 		if(!found){
// 			ans += 'a';
// 		}
// 		cout << ans << endl;

// third 
// int n;
// 		cin >> n;
// 		vector<ll> arr(n);
// 		for(int i = 0; i < n; i++){
// 			cin >> arr[i];
// 		}
// 		ll val1 = 0, val2 = 0;
// 		for(int i = 0; i < n; i += 2){
// 			val1 = gcd(val1, arr[i]);
// 		}
// 		for(int i = 1; i < n; i += 2){
// 			val2 = gcd(val2, arr[i]);
// 		}
// 		bool possible1 = true, possible2 = true;;
// 		for(int i = 0; i < n; i += 2){
// 			if(arr[i] % val2 == 0){
// 				possible1 = false;
// 			}
// 		}
// 		for(int i = 1; i < n; i += 2){
// 			if(arr[i] % val1 == 0){
// 				possible2 = false;
// 			}
// 		}
// 		if(!possible1 && !possible2){
// 			cout << 0 << endl;
// 		}else if(!possible2){
// 			cout << val2 << endl;
// 		}else{
// 			cout << val1 << endl;
// 		}

// forth

// int n, k;
// 		cin >> n >> k;
// 		vector<ll> arr(n);
// 		for(int i = 0; i < n; i++){
// 			cin >> arr[i];
// 		}
// 		sort(arr.begin(), arr.end());
// 		reverse(arr.begin(), arr.end());
// 		int i = 0;
// 		ll ans = 0;
// 		for(int i = 0; i < k; i++){
// 			ans += arr[i + k] / arr[i];
// 		}
// 		for(int i = 2 * k; i < n; i++){
// 			ans += arr[i];
// 		}
// 		cout << ans << endl;

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
