                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define pf push_front
#define Pb pop_back
int recurse(int w, int h)
{
	if(w % 2 == 0)
		return 2 * recurse(w / 2, h);
	if(h % 2 == 0)
		return 2 * recurse(w, h / 2);
	return 1;
}
void maxi(){
 //int n;
     // cin >> n;
    // int a[n];
    // for(int i = 0; i < n; i++) cin >> a[i];
    // int d = 0;
    // int e = 0;
    // int l = 0;
    // int r = n-1;
    // int k = 1;
    // while(k <= n){
    //     if(a[l] > a[r]){
    //         if(k % 2) d+= a[l];
    //         if(!(k%2)) e+= a[l];
    //         l++;
    //     } else {
    //         if(k % 2) d+= a[r];
    //         if(!(k%2)) e+= a[r];
    //         r--;
    //     }
    //     k++;
    // }
    // cout << d << " " << e << endl;
//   ll n,m;
//   cin>>n>>m;
//   if((n*m)&1){
//       cout<<(n*m)/2+1<<endl;
//   }
//   else
//   {
//        cout<<(n*m)/2<<endl;
//   }
//   ll n,a[3];
//  cin>>a[0]>>a[1]>>a[2]>>n;
//  sort(a,a+3);
//  ll sum=a[2]-a[1]+a[2]-a[0];
//  n=n-sum;
//  if(n>=0&&n%3==0){
//    cout<<"YES"<<endl;
//     }
// else
// {
//     cout<<"NO"<<endl;
// }
 
		int w, h, n;
		cin >> w >> h >> n;
		int mx = recurse(w, h);
		if(mx >= n)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	
}
		
	
   

 

    

int main(){
    ll t;
    cin>>t;
    while(t--){
    maxi();
    }
    return 0;
}
