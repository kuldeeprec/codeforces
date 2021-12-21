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
const int N=1e5+5;

void maxi(){
//     ll n;
//     string s;
//  cin >> s >> n;
//     for (int i = 0; i <s.length(); i++)
//         if (s[i] >= 'a' && s[i] <= 'z' && s[i] - 'a' < n)
//             s[i] = s[i] - 'a' + 'A';
//         else    
//         if (s[i] >= 'A' && s[i] <= 'Z' && s[i] - 'A' >= n)
//             s[i] = s[i] - 'A' + 'a';
//     cout << s << endl;
// ll n;
// 	cin>>n;
//     vector<ll>v(N,-1);
// 	for(ll i=1;i<=n;i++)
// 	{
// 		ll x, k;
// 		cin>>x>>k;
// 		if(v[k]<x-1)
// 		{
// 			cout<<"NO";
// 			return;
// 		}
// 		v[k]=max(v[k], x);
// 	}
// 	cout<<"YES";
// ll n,c;
// cin>>n>>c;
// ll t,ans=0,last=INT64_MIN;
// for (ll i = 0; i < n; i++)
// {
//   cin>>t;

// if (t-last>c)ans = 0;
// ans++;
// last = t;
// }
// cout<<ans<<endl;
// ll l1,r1,l2,r2,flag=0,ans;
// cin>>l1>>r1>>l2>>r2;
// if(l1==l2){
// 	cout<<l1<<" "<<l1+1<<endl;
// }

// else {
// 	cout<<l1<<" "<<l2<<endl;
// }
// ll a,b;
// cin>>a>>b;
//         //ll x = (a | b);
//         cout <<  (a ^ b) << '\n';\

// ll n,k1,k2,w,b,x,y;
// cin>>n>>k1>>k2>>w>>b;
// x=(max(k1,k2)+min(k1,k2));
// y=(max(n-k1,n-k2))+min(n-k1,n-k2);
// (x>=2*w&&y>=2*b)?cout<<"YES\n":cout<<"NO\n";

// ll a[4];
// cin>>a[0]>>a[1]>>a[2]>>a[3];
// sort(a,a+4);
// if(a[0]+a[3]==a[1]+a[2]){
// 	cout<<"YES\n";
// }
// else
// {
// 	cout<<"NO\n";
// }

// ll a,b,c,d;
//     cin >> a >> b >> c >> d;
//     if(a+b == c+d || a+c == b+d || a+d == b+c || a == b+c+d || b == a+c+d || c == a+b+d || d == a+b+c)
//       { cout << "YES";}
// 	else{
//       cout << "NO";
// cin >> a >> b >> c;
//         cout << max(max(a , b) , c) << '\n';
	// ll n,t;
    //  cin >> n;
    //     ll a, b;
    //     for(ll i = 1, x;i <= n;i++) {
    //         cin >> t;
    //         if(t == 1)
    //             a = i;
    //         else if(t == n)
    //             b = i;
    //     }
    //     if(a > b)
    //         swap(a, b);
    //     cout << min({b, n - a + 1, a + n - b + 1}) << '\n';
	
	 
	 ll t , a , b , x , y , n;
    
        cin >>a>>b>>x>>y>>n;
        ll tmpa = a , tmpb = b , tmpn = n;
        ll tmp = min(a-x,n);
        a -= tmp , n -= tmp;
        b -= min( n,b-y);
        ll ans = 1ll * a * b;
        a = tmpa , b = tmpb , n = tmpn;
        tmp = min(b - y , n);
        b -= tmp , n -= tmp;
        a -= min(a - x , n);
        ans = min(ans , 1ll * a * b);
        cout << ans << '\n';
	 
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
