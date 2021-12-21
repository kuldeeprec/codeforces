//kuldeep yadav,Rajkiya engineering college sonbhadra//
#include <bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define pf push_front
#define Pb pop_back
const int N =1e5+5;
// ll minswap(ll arr[],ll n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 0;
//     }
//     if(arr[0]%2==0&&arr[1]%2==0){
//         return 1;
//     }
//     else{
//         return 1+minswap(arr+1,n-1);
//     }
// }
void maxi(){    
//   ll c,d;
//   cin>>c>>d;
//   if((c+d)%2){
//     cout<<-1<<endl;
//   }
//   else if(c==0&&d==0){
//       cout<<0<<endl;
//   }
//   else if(c==d){
//       cout<<1<<endl;
//   }
//   else{
//       cout<<2<<endl;
//   }
ll n;
vector<int> v[2];
cin >> n;
	
	v[0].clear(), v[1].clear();
	for(int i = 0, x; i < n; i++) cin >> x, v[x & 1].push_back(i);
	
	if(v[0].size() < v[1].size()) swap(v[0], v[1]);
	
	if(v[0].size() != (n + 1) / 2){
		cout << -1 << endl;
		return;
	}
	
	ll ret = n * n;
	for(int i = 0; i < 2 - (n & 1); i++){
		ll x = 0;
		for(int j = 0; j < v[i].size(); j++) x += abs(v[i][j] - 2 * j);
		ret = min(ret, x);
	}
	
	cout << ret << endl;



}
int main(){
  ll t;
  cin>>t;
  while (t--)
  {
      maxi();
  }

    return 0;
}