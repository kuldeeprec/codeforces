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
void maxi()
{
    //    ll n,m;
    //    cin>>n>>m;
    //    ll dp[n+1]={0};
    //    ll a[n+1]={0};
    //    set<ll>v;
    //    for (ll i = 1; i<=n; i++)
    //    {
    //        cin>>a[i];
    //    }
    //     for (ll i = n; i >=1; i--)
    //    {
    //        v.insert(a[i]);
    //        dp[i]=v.size();

    //    }
    //    for (ll i = 0; i < m; i++)
    //    { ll l;
    //        cin>>l;
    //        cout<<dp[l]<<endl;
    //    }
    //    ll n,x,ans=0,equal=0,mini=0;
    //    cin>>n;
    //    set<ll>v;
    //    unordered_map<ll,ll>m;
    //    for (ll i = 0; i < n; i++)
    //    {
    //        cin>>x;
    //        m[x]++;
    //        v.insert(x);

    //    }
    //    for ( auto &i:m)
    //    {
    //        if(i.second>mini){
    //            mini=i.second;
    //        }
    //    }
    //    if(n>1){
    //   if(mini==(ll)v.size()){
    //       cout<<mini-1<<endl;
    //   }
    //   else if(mini<(ll)v.size()){
    //       cout<<mini<<endl;
    //   }
    //    else if(mini>(ll)v.size()){
    //       cout<<v.size()<<endl;
    //   }}
    //   else
    //   {
    //       cout<<"0"<<endl;
    //   }
    // ll n,k;
    // cin>>n>>k;
    // (n&1&&k&1&&n>=k*k)||(n%2==0&&k%2==0&&n>=k*k)?cout<<"YES\n":cout<<"NO"<<endl;
    //   ll n,m,k;
    //    cin>>n>>m>>k;
    //    vector<ll> v(m);
    // 	for(ll i=0;i<m;i++)
    // 	{
    // 		cin>>v[i];
    // 	}
    // 	ll b;
    // 	cin>>b;
    // 	ll ans=0;
    // 	for(ll i=0;i<m;i++)
    // 	{
    // 		ll count=0;
    // 		ll a=v[i];
    // 		for(ll j=0;j<n;j++)
    // 		{
    // 			if(a&(1<<j)^(b&(1<<j)))
    // 			{
    // 				count++;
    // 			}
    // 		}
    // 		if(count<=k)
    // 		{
    // 			ans++;
    // 		}
    // 	}
    // 	cout<<ans<<endl;
    // const string name[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    // ll n,k;
    // cin>>n;
    //  int i = 1;
    //     while (true) {
    //         for (int j = 0; j < 5; j++)
    //             if (n > i)
    //                 n -= i;
    //             else {
    //                 cout << name[j] << endl;
    //                 return;
    //             }
    //         i *= 2;
    //     }

    ll n, odd = 0, even = 0;
    
        cin >> n;
        vector<int> o , e;
        for(int i = 0;i < n;i++) {
            int x;
            cin >> x;
            if(x & 1)
                o.push_back(x);
            else
                e.push_back(x);
        }
        if((o.size() & 1) != (e.size() & 1)) {
            cout << "NO\n";
            return;
        }
        bool yes = false;
        if(o.size() % 2 == 0)
            yes = true;
        for(int i = 0;i < o.size();i++)
            for(int j = 0;j < e.size();j++)
                if(abs(o[i] - e[j]) == 1)
                    yes = true;
        yes ? cout << "YES\n" : cout << "NO\n";
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
