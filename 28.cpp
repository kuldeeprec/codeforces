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
//   string a,b;
//   cin>>a;
//   int flag=0;
//   for(ll i=0;i<5;i++){
//       cin>>b;
//       if(a[0]==b[0]||a[1]==b[1]){
//           flag=1;
//           break;
//       }
//   }
//   if(flag){
//       cout<<"YES"<<endl;
//   }
//   else{
//       cout<<"NO"<<endl;
//   }
// ll n;
// cin>>n;
// ll a;
// int flag=0;
// unordered_map<int,int>v;
// unordered_map<int,int>b;
// for (ll i = 1; i <=n; i++)
// {
//     cin>>a;
//     b[a]=i;
//     v[a]++;
    
// }
// for (auto i :v)
// {
//     if(i.second==1){
//         cout<<b[i.first]<<endl;
//         break;
//     }
// }
//  ll n,cnt=0;
//     cin >> n;
//     for (int i=1;i<=n/2;i++) {
//         int x = n-i;
//         if (x%i==0) {
//             cnt++;
//         }
//     }
//     cout << cnt;
// ll n;
// cin>>n;
// 		int e = 0 , o = 0;
// 		for(int i = 0 , x;i < n;i++)
// 			cin >> x , o += (x & 1) , e += !(x & 1);
// 		if(o & 1 || (o && !(o & 1) && e))
// 			cout << "YES\n";
// 		else
// 			cout << "NO\n";
// ll n;
// cin>>n;
// cout<<25<<endl;
// ll h,m,re;
// cin>>h>>m;
// re=(23-h)*(60)+60-m;
// cout<<re<<endl;
// ll n;
// cin>>n;
// if(n&1){
//     cout<<"Ehab";
// }
// else
// {
//     cout<<"Mahmoud";
// }
ll n;
cin >> n;
        int j = 1;
        for(int i = 1;i <= n / 2;i++ , j += 2)
            cout << j << " " << j << " ";
        if(n & 1)
            cout << j;
        cout << '\n';


}

int main(){
    ll t;
    cin>>t;
    while(t--){
    maxi();
    }
     

    return 0;
}
