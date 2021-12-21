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
    // ll n,count=0;
    // cin>>n;
    // ll a[n];
    // for(ll i=0;i<n;i++){
    //   cin>>a[i];

    // }
    // sort(a,a+n);
    // for(ll i=1;i<=n;i++){
    //   if(a[i]-a[i-1]==1){
    //       count++;
    //   }

    // }
    // count?cout<<2<<endl:cout<<1<<endl;
    
    // ll n,ans = 1;
    // cin >> n;
    // for(int i = 1;i<n;i++)
    //     ans+=i*4;
    // cout << ans;
    // string s,t;
    //  cin>>s>>t;
    //  ll k=0,count=1;
    //  for (ll i = 0; i < t.length(); i++)
    //  {
    //     if(t[i]==s[k]){
    //        count++;
    //        k++;
    //     }
    //  }
    // cout<<count<<endl; 
//     ll p,a,b,c,l,r,i,j,k,d,m;
//     cin>>p>>a>>b>>c;
//  if(p%a==0||p%b==0||p%c==0)
//  cout<<0<<endl;
//  else{
//    l=p/a,r=p/b,k=p/c;
//   i=(l+1)*a-p;
//   j=(r+1)*b-p;
//   d=(k+1)*c-p;
//   cout<<min(min(i,j),d)<<endl;

// }
//  freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
// int n,m,y[3],p[60][60],a[60][60],ans=0,f=0;
// cin >> n >> m;

// 	for(int i=1; i<=n; i++)
// 		for(int j=1; j<=m; j++)
// 			cin >> a[i][j],p[i][j]=p[i-1][j]+p[i][j-1]-p[i-1][j-1]+a[i][j];
// 	cin >> y[0] >> y[1] >> y[2];
// 	sort(y,y+3);
// 	for(int i=1; i<=n-2; i++)
// 		for(int j=i+1; j<=n-1; j++)
// 		{
// 			int x[3]={p[i][m],p[j][m]-p[i][m],p[n][m]-p[j][m]};
// 			sort(x,x+3);
// 			if(equal(x,x+3,y))
// 				ans++;
// 		}
// 	for(int i=1; i<=m-2; i++)
//                 for(int j=i+1; j<=m-1; j++)
//                 {
//                         int x[3]={p[n][i],p[n][j]-p[n][i],p[n][m]-p[n][j]};
//                         sort(x,x+3);
//                        	if(equal(x,x+3,y))
//                                 ans++;
//                 }
// 	cout << ans;
// ll n,l,r=INT64_MIN;
// cin>>n>>l;
// ll a[n];


// for (ll i = 0; i < n; i++)
// {
//     cin>>a[i];
//     if(a[i]>r){
//         r=a[i];
//     }
    
// }
// ll ans = 0;
// 	for (ll i = l; i <=r; i++) {
// 		ll k = 0;
// 		for (ll j = 0; j < n; j++) k += a[j] / i;
// 		ans = max (ans, i * k);
// 	}
//     cout<<ans;
ll n,m;
cin >> n >> m;
ll a[n+1],b[m+1];
		map<ll, ll> freq;
		for(ll i = 1; i <= n; i++)
		{
			cin >> a[i];
			freq[a[i]]++;
		}
		ll ans = 0;
		for(ll i = 1; i <= m; i++)
		{
			cin >> b[i];
			ans += freq[b[i]];
		}
		cout << ans << endl;
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
