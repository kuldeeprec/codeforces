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
bool com(const ll &a, const ll &b)
{
    return b > a;
}
void maxi()
{
    //    ll n, k;
    // 	cin>>n>>k;
    // 	ll ans=k/n;
    // 	if(k%n)
    // 		ans++;
    // 	cout<<ans;
    // ll n = 1, k = 1, r = 0;
    // string s;
    // cin >> s;
    //     s += '?';
    //     vector<int> v;
    //     int cnt = 0;
    //     for(int i = 0;i < s.size();i++) {
    //         if(s[i] == '1')
    //             cnt++;
    //         else {
    //             if(cnt)
    //                 v.push_back(cnt);
    //             cnt = 0;
    //         }
    //     }
    //     sort(v.rbegin() , v.rend());
    //     int ans = 0;
    //     for(int i = 0;i < v.size();i += 2)
    //         ans += v[i];
    //     cout << ans << '\n';
    // ll n,x,d,r=0;
    // char a;
    // cin>>n>>x;
    // for(ll i=0;i<n;i++){
    //     cin>>a>>d;
    //     if(a=='+'){
    //         x+=d;
    //     }
    //     else
    //     {
    //         if(x>=d){
    //          x-=d;
    //         }
    //         else
    //         {
    //            r++; 
    //         }
            
    //     }
        
    // }
    // cout<<x<<" "<<r<<endl;
//     ll px,py,a=0,b=0,c=0,d=0;
//     string s;
//     cin>>px>>py;
//     cin>>s;
//     int flag1=0,flag2=0;
//     for (ll i = 0; i < s.length(); i++)
//     {
//         if(s[i]=='R'){
//             a++;
//         }
//         else if(s[i]=='U'){
//             b++;
//         }
//          else if(s[i]=='L'){
//             c++;
//         }
//          else  {
//             d++; 
//         }
//     }
    

//     if(px<=0&&py<=0){
//         (abs(px)<=c&&abs(py)<=d)?cout<<"YES\n":cout<<"NO\n";
//     }
//     else if(px>=0&&py<=0){
//         (abs(px)<=a&&abs(py)<=d)?cout<<"YES\n":cout<<"NO\n";
//     }
//    else if(px<=0&&py>=0){
//        (abs(px)<=c&&abs(py)<=b)?cout<<"YES\n":cout<<"NO\n";
//     }
//    else {
//        (abs(px)<=a&&abs(py)<=b)?cout<<"YES\n":cout<<"NO\n";
//     }
// ll n,m;
//    cin>>n>>m;
//    (!(n%m))?cout<<"YES\n":cout<<"NO\n";
ll n,k;
ll flag=0;
cin>>n>>k;
ll d[n+1];
for (ll i = 1; i<= n; i++)
{
    cin>>d[i];
    
}

	for(int i=1;i<=n;i++)
	{
		cin>>d[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(k-i>0)
		{
			k-=i;
			continue;
		}
		cout<<d[k];
		break;
	}

    

}
   

int main()
{
    kuldeepyadav12
    //     ll t;
    // cin >> t;
    // while (t--)
    // {
       
    // }
maxi();
    return 0;
}
