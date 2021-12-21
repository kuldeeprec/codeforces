//kuldeep yadav,Rajkiya engineering college sonbhadra//

#include <bits/stdc++.h>
using namespace std;
#define kuldeepyadav12  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define pf push_front
#define Pb pop_back
bool com(const ll &a,const ll &b){
    return a%2!=0&&b%2==0;
}
void maxi()
{
    // ll a,b,k,x=0;
    // cin>>a>>b>>k;
    // int flag=0;
    // cout<<(((k/2)+k%2)*a-(k/2)*b)<<endl;
   
//    string s;
// 		cin >> s;
// 		int p1 = -1 , p2;
// 		for(int i = 0;i < s.size();i++)
// 		{
// 			if(s[i] == '1')
// 			{
// 				if(p1 == -1)
// 					p1 = p2 = i;
// 				else
// 					p2 = i;
// 			}
// 		}
// 		if(p1 == -1)
// 		{
// 			cout << "0\n";
// 			return;
// 		}
// 		int cnt = 0;
// 		for(int i = p1;i <= p2;i++)
// 			cnt+=(s[i] == '0');
// 		cout << cnt << '\n';
	
    // ll n,k,cont1=0,cont2=0,result;
    // cin>>n;
    // ll s[n];
    // for (ll i = 0; i < n; i++)
    // {
    //     cin>>s[i];
    // }
    // for (ll i = 0; i < n; i++)
    // {
    //     if(s[i]==1){
    //      cont1++;
    //     }
    //     else if (s[i]==2)
    //     {
    //         cont2++;
    //     }
    //     else
    //     {
    //        cont1++;
            
    //     }
        
    //  ll  x,y,a,b;
    //  cin>>x>>y>>a>>b;
    //  ((y-x)%(a+b))?cout<<"-1\n": cout<<(y-x)/(a+b)<<endl;
    //   ll low = 0 , high = 1e9 , mid , ans = -1;
	// 	while(low <= high)
	// 	{
	// 		mid = low + (high - low)/2;
	// 		if(x + a*mid < y - b * mid)
	// 			low = mid + 1;
	// 		else if(x + a*mid > y - b * mid)
	// 			high = mid - 1;
	// 		else
	// 		{
	// 			ans = mid;
	// 			break;
	// 		}
	// 	}
	// 	cout << ans << '\n'
    // ll n;
    // cin>>n;
    // ll count=n;
    // ll s[n];
    
    // for (ll i = 0; i < n; i++)
    // {
    //     cin>>s[i];
    // }
    // sort(s,s+n);
    // for (ll i = 0; i < n; i++)
    // {
    //     if (s[i]==s[0])
    //     {
    //         count--;
            
    //     }
        
    // }
    // cout<<count<<endl;

    // string s;
    // cin>>s;
    // ll n=s.length();
    // for (ll i = 0; i < n; i++)
    // {
    //     (i&1)?(s[i]=='z')?cout<<"y":cout<<"z":(s[i]=='a')?cout<<"b":cout<<"a";
    // }
    // cout<<endl;

    //  }
    
    // ll n,m;
    //  cin >> n >> m;
    //  char a[n][m];
    //     for(int i = 0;i < n;i++)
    //         for(int j = 0;j < m;j++)
    //             cin >> a[i][j];
    //     int ans = 0;
    //     for(int i = 0;i < m;i++)
    //         ans += (a[n - 1][i] == 'D');
    //     for(int i = 0;i < n;i++)
    //         ans += (a[i][m - 1] == 'R');
    //     cout << ans << '\n';
    // }

//     ll n,x;
//     cin>>n;
//     vector<ll>odd;
//     vector<ll>even;
//     for (ll i = 0; i < n; i++)
//     {
//         cin>>x;
//         (x&1)?odd.pb(x):even.pb(x);
        
//     }
//     for (auto &i:odd)
//     {
//         cout<<i<<" ";
//     }
//     for (auto &i:even)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
 ll n,x;
    cin>>n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
        
    }
   sort(a,a+n,com);
   for (ll i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
        
    }
    cout<<endl;
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
