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
void maxi()
{
//     cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
//     for (int a = 1; a <= 9; a++)
//         for (int b = 1; b <= 9; b++)
//             if (a != b)
//                 for (int c = 1; c <= 9; c++)
//                     if (a != c && b != c)
//                         for (int d = 1; d <= 9; d++)
//                             if (a != d && b != d && c != d)
//                                 if (a + b == r1 && c + d == r2 && a + c == c1 && b + d == c2 && a + d == d1 && b + c == d2) {
//                                     cout<<a<<" "<<b<<"\n"<<c<<" "<<d<<"\n";
//                                     return;}
                                
//   cout<<"-1\n";  int r1, r2, c1, c2, d1, d2;
// ll n;
// cin>>n;
// ll a[n];
// for (ll i = 0; i <n; i++)
// {
//     cin>>a[i];
// }
//       ll j=0,k=0,l=0;
//        for(ll i=0;i<n-1;i++)
//        {
//          if(a[i]<a[i+1])
//          { if(l==0&&k==0)
//            j++;
//          }
//          else if(a[i]==a[i+1])
//          {
//            if(l==0)
//            k++;
//          }
//         else if(a[i]>a[i+1])
//         {  
//            l++;
//         }
//        }
// ((j+k+l+1)==n)?cout<<"YES\n":cout<<"NO\n";
// ll n;
// cin>>n;
// ll a[n];
// ll b[n];
// ll a1[6]={0};
// ll b1[6]={0};
// ll ans=0,flag=0;
// for (ll i = 0; i <n; i++)
// {
//     cin>>a[i];
//     a1[a[i]]++;
// }
// for (ll i = 0; i <n; i++)
// {
//     cin>>b[i];
//     b1[b[i]]++;
// }
// for (ll i = 1; i < 6; i++)
// {
//     ll x = abs(a1[i] - b1[i]);
// 		if(x&1){
// 			 cout<<-1;
//              return ;}
// 		ans += x/2;
    
// }
// cout << (ans + 1)/2;
// int n,m,a,b,q;
// 	cin>>n>>m>>a>>b>>q;
// 	while(q--)
// 	{
// 		int x1,y1,x2,y2;
// 		cin>>x1>>y1>>x2>>y2;
// 		if(x1==x2)
// 		{
// 			cout<<abs(y1-y2)<<endl;
// 			continue;
// 		}
// 		ll res=0;
// 		res+=abs(x1-x2);
// 		if(y1<a)
// 		{
// 			res+=abs(y1-a)+abs(y2-a);
// 		}
// 		else if(y1>b)
// 		{
// 			res+=abs(y1-b)+abs(y2-b);
// 		}
// 		else
// 		{
// 			res+=abs(y1-y2);
// 		}
// 		cout<<res<<endl;
// 	}
ll n,m,sum=0,prev=0,ans=1;
cin>>n>>m;
ll a[n];
for (ll i = 0; i < n; i++)
{
    cin>>a[i];
    
}
 prev = 0;
	for(ll i = 0; i < n; i++){
		
		if(prev + a[i] <= m){
			prev += a[i];
		} else {
			prev = a[i];
			ans++;
		}
	}
	cout << ans << '\n';
}



int main()
{
    kuldeepyadav12
    //     ll t;
    // cin >> t;
    // while (t--)
    // {
    //  maxi();
    // }
    maxi();
    return 0;
}
