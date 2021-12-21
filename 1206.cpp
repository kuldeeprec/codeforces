//kuldeep yadav,Rajkiya engineering college sonbhadra//

#include <bits/stdc++.h>
using namespace std;
#define kuldeepyadav12  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define pf push_front
#define Pb pop_back
// bool com(const ll &a,const ll &b){
//     return a%2!=0&&b%2==0;
// }
int possible(int x,int y,int z)
{
  return x+y+z;  
}
 

// bool a[1005];
// set<ll> s;
// vector<ll>v;
// void seive(){
//     memset(a, true, sizeof(a));
//     for (ll i = 2; i*i <=1000; i++)
//     {
//         if (a[i]==true)
//         {
//             for (ll j = i*2; j <=1000; j+=i)
//             {
//                 a[j]=false;
//             }
//             v.pb(i);
//         }
        
//     }
// ll sz=v.size();
// 	for(ll i=0;i<sz-1;i++)
// 	{
// 		s.insert(v[i]+v[i+1]+1);
// 	}
// }
void maxi()
 { 
     //ll n,ans=-1;
//     cin>>n;
//     ll a[n+1];
// 	for(int i=1;i<=n;i++)
// 		cin>>a[i];
// 	for(int i=1;i<=n;i++)
// 	{
// 		if(a[i]==0)
// 			continue;
// 		ans+=2;
// 		while(i+1<=n && a[i+1]==1)
// 		{
// 			ans++;
// 			i++;
// 		}
// 	}
// 	ans=max(0LL, ans);
// 	cout<<ans;

// vector<bool>sieve(1001,true);
// 	sieve[0]=sieve[1]=false;
// 	set<ll> s;
// 	vector<ll> prime;
// 	for(ll i=2;i<=1000;i++)
// 	{
// 		if(sieve[i])
// 		{
// 			for(ll j=2;i*j<=1000;j++)
// 			{
// 				sieve[i*j]=false;
// 			}
// 			prime.pb(i);
// 		}
// 	}
// 	ll sz=prime.size();
// 	for(ll i=0;i<sz-1;i++)
// 	{
// 		s.insert(prime[i]+prime[i+1]+1);
// 	}
// 	ll n,k;
// 	cin>>n>>k;
// 	ll ct=0;
// 	for(auto it:s)
// 	{
// 		if(it<=n)
// 		{
// 			if(sieve[it])
// 				ct++;
// 		}
// 	}
// 	if(ct>=k)
// 	{
// 		cout<<"YES";
// 	}
// 	else
// 	{
// 		cout<<"NO";
// 	}
// ll n,k;
// cin>>n>>k;
// cout << max(0ll,min(n-k/2,k-k/2 -1));
// 
// ll n4=0,n7=0;
// string s;
// cin>>s;
// for (ll i = 0; i < s.length(); i++)
// {
// 	if (s[i]=='4')
// 	{
// 		n4++;
		
// 	}
// 	else if (s[i]=='7')
// 	{
// 		n7++;
// 	}
	
// }
// if(!n4 && !n7)
// {
// 	cout<<"-1\n";
// }
// else if(n4>=n7)
// {
// 	cout<<"4\n";
// }
// else
// {
// 	cout<<"7\n";
// }
// int sum=0;
// 	int a[6];
// 	for (int i=0;i<6;i++)
// {	cin >> a[i];
// 	sum+=a[i];}
 
// 	if (sum%2)
// 	cout << "NO";
// 	else
// 	{
// 	    int flag=0;
// 	 int s=sum/2;
// 	 for(int i=0;i<6;i++)
// 	 {
// 	     for(int j=0;j<6;j++)
// 	     {
// 	         for(int k=0;k<6;k++)
// 	         {
// 	             if(i!=j and i!=k and j!=k)
// 	             {
// 	             int s1=  possible(a[i],a[j],a[k]);
// 	             if(s1==s)
// 	             flag=1;
// 	             }
// 	         }
// 	     }
// 	 }
// 	 if(flag)
// 	 cout << "YES";
// 	 else
// 	 cout << "NO";
// ll n,k;
// cin>>n>>k;
// ll a[6][3] = {{0, 1, 2}, {1, 0, 2}, {1, 2, 0}, {2, 1, 0}, {2, 0, 1}, {0, 2, 1}};
 

// 	cout << a[n % 6][k];
// }
// ll n,m,ans=0;
// cin >> n >> m;
// ll a[n+1][m+1];

// 	for(ll i = 1; i <= n; i++)
// 	{
// 		ll mn = INT64_MAX;
// 		for(ll j= 1; j <= m; j++)
// 		{
// 			cin >> a[i][j];
// 			mn = min(mn, a[i][j]);
// 		}
// 		ans = max(ans, mn);
// 	}
// 	cout << ans << endl;

	ll n;
	cin>>n;
	ll v[101][101];
	for(ll i=0;i<101;i++)
	{
		for(ll j=0;j<101;j++)
		{
			v[i][j]=0;
		}
	}
	while(n--)
	{
		ll x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		x1--;
		y1--;
		x2--;
		y2--;
		for(ll i=x1;i<=x2;i++)
		{
			for(ll j=y1;j<=y2;j++)
			{
				v[i][j]++;
			}
		}
	}
	ll ans=0;
	for(ll i=0;i<101;i++)
	{
		for(ll j=0;j<101;j++)
		{
			ans+=v[i][j];
		}
	}
	cout<<ans;

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
