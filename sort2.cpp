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


void maxi(){
  
//   ll n;
//   cin>>n;
//   vector<ll>v(n+1);
//   if(n%2==0){
//   for (ll i = 1; i <=n; i+=2)
//   {
//       v[i]=i+1;
//       v[i+1]=i;
//   }}
//   else
//   {
//        for (ll i = 1; i <=n-1; i+=2)
//   {
//       v[i]=i+1;
//       v[i+1]=i;
//   }
//   v[n]=n;
//   swap(v[n-1],v[n]);
//   }
  
//   for (ll i = 1; i <=n; i++)
//   {
//       cout<<v[i]<<" ";
//   }
//   cout<<endl;

        // cin >> n;
        // for(int i = 1;i <= 2 * n;i++)
        //     a[i] = -1;
        // for(int i = 1, x;i <= n;i++)
        //     cin >> x, a[x] = i;
        // ll ans = 0;
        // for(int i = 1;i <= 2 * n;i++) {
        //     if(a[i] == -1)
        //         continue;
        //     for(int j = i;j <= 2 * n;j += i)
        //         if(a[j / i] != -1 && a[i] < a[j / i] && a[i] + a[j / i] == j)
        //             ans++;
        // }
        // cout << ans << '\n';
    // ll n;
    // cin>>n;
    // ll a[n];
    // for(ll i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // sort(a,a+n);
    // ll result=a[n-1];
    // ll revers[n];
    // revers[0]=0;
    // for (ll i = 1; i <n; i++){
    //     revers[i]=revers[i-1]+i*(a[i]-a[i-1]);
    //     result-=revers[i];
    // }
    // cout<<result<<endl;
      ll n,x,a,b;
		cin >> n >> x >> a >> b;
		if(a > b)
			swap(a,b);
		ll tmp = max(1ll,a - x);
		x -= (a - tmp);
		a = tmp;
		b = min(b + x,n);
		cout << b - a << '\n';



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
