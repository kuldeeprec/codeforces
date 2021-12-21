//kuldeep yadav,Rajkiya engineering college sonbhadra//

#include <bits/stdc++.h>
using namespace std;
#define kuldeepyadav12  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define pf push_front
#define Pb pop_back
void maxi(){
    // ll a,b;
    // int total=0;
    // set<ll>v;
    // cin>>a>>b;
    // v.insert(b);
    
    // while (b>a)
    // {
    //     if(b%10==1){
    //     b=b/10;
    //     v.insert(b);
    //     continue;
    //     }
        
    //     else
    //     {    
    //         if (b%2!=0)
    //         {
    //             total=1;
    //             break;
    //         }
    //         else{
    //          b=b/2;
    //          v.insert(b);
    //         }
    //     }
        
    // }
    // if(b<a){
    //         total=1;
        
    //     }
    // if(total){
    //     cout<<"NO\n";
    // }
    // else
    // {
    //     cout<<"YES\n"<<v.size()<<"\n";

    //     for (auto &i:v)
    //     {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // ll n,x,k;
    // cin>>n>>x;
    // set<ll>v;

    // for (ll i = 0; i < n; i++)
    // {
    //     cin>>k;
    //     v.insert(k);
        
    // }
    // ll ans=0;
	// for(int i=0;i<x;i++)
	// {
	// 	if(v.find(i)==v.end())
	// 	{
	// 		ans++;
	// 	}
	// }
	// if(v.find(x)!=v.end())
	// {
	// 	ans++;
	// }
	// cout<<ans;
    // ll n;
    // cin >> n;
	
	// int ans = 0;
	// for(ll k=1;k<11;k++) {
	//     int t = ((1<<k)-1)*(1<<(k-1));
	//     if (n % t == 0) ans = t;
	// }
	// cout << ans;
    ll n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
     
  string total="";
  ll count=n;
  for(ll i=0;i<=m-n;i++)
  {
      ll cnt=0;
      string s1=t.substr(i,n); 
      for(ll j=0;j<n;j++)
      {
          if(s[j]!=s1[j]) cnt++; 
      }
      
      if(cnt<count) 
      {
          count =cnt;
          total=s1;
      }
  } 
  if(total!="")
  {
  cout << count << endl;  
  for(ll i=0;i<n;i++)
  {
      if(s[i]!=total[i]) cout << i+1 << " ";
  }
  }
  else 
  {
      cout << n << endl ;
      for(ll i=0;i<n;i++) cout << i+1 << " ";
  }

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
