                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define pf push_front
#define Pb pop_back
void maxi(){
    // ll a,b,c;
    // cin>>a>>b>>c;
    // cout<<(a+b+c)/2<<endl;
    // ll n,m,x;
    // cin >> n >> m >> x;
    //     ll r = (x % n + n - 1) % n, c = (x - 1) / n + 1;
    //     cout << r * m + c << '\n';
    // ll n,r=1,k=1;
    // cin>>n;
    // ll a[n];
    // for (ll i = 0; i < n; i++)
    // {
    //    cin>>a[i];
    // }
    // for (ll i = 0; i < n-1; i++)
    // {
    //    if(a[i]<a[i+1]){
    //        r++;
    //        k=max(k,r);
    //    }
    //    else
    //    {
    //        r=1;
    //    }
       
    // }
    // // cout<<k<<endl;
    // ll n;
    //  cin >> n;
    //     int f[30] = {};
    //     for(int i = 0;i < n;i++) {
    //         string s;
    //         cin >> s;
    //         for(auto &j : s)
    //             f[j - 'a']++;
    //     }
    //     bool yes = true;
    //     for(int i = 0;i < 26;i++)
    //         yes &= (f[i] % n == 0);
    //     yes ? cout << "YES\n" : cout << "NO\n";
    // ll n,m,k=0;
    // cin>>n>>m;
    // ll a[n],b[m];
    // for (ll i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    //  for (ll i = 0; i < m; i++)
    // {
    //     cin>>b[i];
    // }a
    //  for (ll i = 0; i < n; i++)
    // {
    //     for (ll j = 0; j < m; j++)
    // {
    //     if(a[i]==b[j]){
    //       k=b[j];
    //       break;
    //     }
    // }
    // if(k){
    //     break;
    // }
    // }
    // k ? cout << "YES\n"<<1<<" "<<k<<endl : cout << "NO\n";
//     ll n;
//     cin>>n;
//     string s;
//     cin>>s;
//     for (ll i = 0; i <n; i++)
//     {
//         cout<<s[n-1];
//     }
//    cout<< endl;
// ll n;

//    cin >> n;
//    ll a[n];
//         for(int i = 0;i < n;i++)
//             cin >> a[i];
//         int ans = 0 , i = 0;
//         while(i < n && !a[i])
//             i++;
//         for(;i < n;i++) {
//             int lst = 0;
//             while(i < n && !a[i])
//                 ans++ , lst++ , i++;
//             if(i == n)
//                 ans -= lst;
//         }
//         cout << ans << '\n';
// ll n;
// string s;
// ll k=26;
// cin >> s;
// 	n = s.size();
	
// 	for(int i = 2; i < n; i++){
// 		if((s[i] - 'A') % k != (s[i - 1] + s[i - 2] - 2 * 'A') % k){
// 			cout << "NO" << endl;
// 			return ;
// 		}
// 	}
	
// 	cout << "YES" << endl;
int n, k;
set<int> s;
cin >> n >> k;
	
	for(; n; n /= k){
		if(!s.insert(n % k).second){
			cout << "NO" << endl;
			return ;
		}
	} 
	
	cout << "YES" << endl;
    }
    
    
    

    


int main(){
    kuldeepyadav12
    // ll t;
    // cin>>t;
    // while(t--){
    // maxi();
    // }
    maxi();
    return 0;
}
