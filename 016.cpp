//kuldeep yadav,Rajkiya engineering college sonbhadra//
//Newbie......You have to be odd to be no. ONE :)//
#include <bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define pb push_back
#define pf push_front
#define Pb pop_back
ll count = 1;
// ll recur(ll a,ll b,ll n){
//     if(a>n){
//         return 0;
//     }
//     else
//     {
//         a=b;

//         return recur(a,b,n)+1;
//     }

// }
void maxi()
{
    // ll n,a[305];
    // cin>>n;
    //  for(int i = 0;i < n;i++)
    //         cin >> a[i];
    //     int l = 0 , r = n - 1;
    //     for(int i = 0; i < n;i++) {
    //         if(i & 1)
    //             cout << a[r--] << " ";
    //         else
    //             cout << a[l++] << " ";
    //     }
    //     cout << '\n';
    // string s;
    // cin>>s;
    // ll sum=0;
    // char last = 'a';
    // for(int i = 0; i < s.length(); i++) {
    // 	sum += min((26 + s[i] - last) % 26, (26 + last - s[i]) % 26);
    // 	last = s[i];
    // }
    // cout<<sum;
    // int y,w,t;
    // cin>>y>>w;
    // t=(6-max(y,w));
    // if(t==0){
    //     cout<<1<<"/"<<6;
    // }
    // else
    // {
    //     t=t+1;
    //    int k= __gcd(t,6);

    //     cout<<t/k<<"/"<<6/k;
    // }
    // ll n,d;
    // cin>>n>>d;
    // ll a[n];
    // for (ll i = 0; i < n; i++)
    // {
    //     cin>>a[i];

    // }
    // sort(a,a+n);
    // if(n<=1){
    //     if(a[0]<=d){
    //         cout<<"YES"<<endl;
    //     }
    //     else{
    //         cout<<"NO"<<endl;
    //     }
    // }
    // else
    // {
    //      if(a[0]+a[1]<=d||a[n-1]<=d){
    //         cout<<"YES"<<endl;
    //     }
    //     else{
    //         cout<<"NO"<<endl;
    //     }
    // }}
    // ll  n;
    // cin>>n;
    // string f,s;
    // cin>>f>>s;
    // ll sum=0;

    // for (ll i = 0; i < n; i++)
    //  {

    // 	sum += min((10 + s[i] - f[i]) % 10, (10 + f[i] - s[i]) % 10);
    // }
    // cout<<sum ;
    //     ll n;
    //     cin>>n;
    //     char a[n][5];
    //     ll r,m,flag=0;
    //     for (ll i = 0; i < n; i++)
    //     {
    //       for (ll j = 0; j < 5; j++)
    //       {
    //           cin>>a[i][j];

    //       }

    //     }
    //     for (ll i = 0; i < n; i++)
    //     {
    //       for (ll j = 0; j < 4; j++)
    //       {
    //           if(a[i][j]=='O'&&a[i][j+1]=='O'){
    //               flag=1;
    //               a[i][j]='+';
    //               a[i][j+1]='+';
    //               break;
    //           }

    //       }
    //        if(flag){
    //               break;
    //           }

    //     }
    //     if (flag)
    //     {
    //         cout<<"YES"<<endl;
    //      for (ll i = 0; i < n; i++)
    //     {
    //       for (ll j = 0; j < 5; j++)
    //       {
    //         cout<<a[i][j];
    //           }
    //           cout<<endl;
    //       }

    //     }
    //     else
    //     {
    //         cout<<"NO"<<endl;
    //     }

    //    ll  n,a,b;
    //     cin>>a>>b>>n;
    //             int ans = 1;
    //         if(a > b)
    //             swap(a , b);
    //         int sum = a + b;
    //         while(sum <= n) {
    //             a = b;
    //             b = sum;
    //             sum = a + b;
    //             ans++;
    //         }
    //         cout << ans << '\n';

    string s;
    cin >> s;
    ll i;
    ll k = s.length();
    int flag = 0;
    if (s[k - 1] == '.')
    {
        flag = 1;
    }

    for ( i = 0; i < k - 1;)
    {
        if (s[i] == '-' && s[i + 1] == '.')
        {
            cout << "1";
            i += 2;

            continue;
        }
        else if (s[i] == '-' && s[i + 1] == '-')
        {
            cout << "2";
            i += 2;
            continue;
        }
        else
        {

            cout << "0";
            i++;
            continue;
        }
    }
    if (flag&&i<k)
    {
        cout << "0";
    }
}

int main()
{
    // ll t;
    // cin>>t;
    // while(t--){

    // maxi();
    // }
    maxi();

    return 0;
}
