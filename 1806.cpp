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
    //    ll n,k,count=0;
    //    cin>>n;
    //    ll a[n];
    //    for (ll i = 0; i <n; i++)
    //    {
    //        cin>>a[i];
    //        count+=a[i];
    //    }
    //    if(count==n){
    //        cout<<"0"<<endl;
    //    }
    //    else if(count>n){
    //        cout<<count-n<<endl;
    //    }
    //    else
    //    {
    //        cout<<"1"<<endl;
    //    }
    //    ll m,n,i,j;
    //    cin>>n>>m>>i>>j;
    //    if(i==1&&j==1||i==n&&j==m){
    //        cout<<n<<" "<<"1"<<" "<<"1 "<<m<<endl;
    //    }
    //    else if(i==n&&j==1||i==1&&j==m){
    //        cout<<"1"<<" "<<"1"<<" "<<n<<" "<<m<<endl;
    //    }
    //    else
    //    {
    //        if(abs(1-j)>=abs(m-j)){
    //        cout<<n<<" "<<"1"<<" "<<"1 "<<m<<endl;
    //        }

    //    else
    //    {
    //        cout<<"1"<<" "<<"1"<<" "<<n<<" "<<m<<endl;
    //    }

    //        }
    int n;

    cin>>n;
     int a[n];
        for(int i = 0;i < n;i++)
            cin >> a[i];
        sort(a, a + n);
        int mn = 2e9, x, y;
        for(int i = 1;i < n;i++)
            if(a[i] - a[i - 1] < mn)
                mn = a[i] - a[i - 1], x = a[i - 1], y = a[i];
        vector<int> v1, v2;
        int cnt = 0;
        for(int i = 0;i < n;i++) {
            if(a[i] >= x) {
                if(a[i] == y)
                    cnt++;
                if(cnt > 1 || a[i] != y)
                    v1.push_back(a[i]);
            } else
                v2.push_back(a[i]);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        for(auto &i : v1)
            cout << i << " ";
        for(auto &i : v2)
            cout << i << " ";
        cout << y << '\n';
    }
    // ll n,m,count=0;
    //   cin >> n >> m;
    // 	for(ll i = 0; i < 1000; i++)
    // 		for(ll j = 0; j < 1000; j++)
    // 			if(i * i + j == n && i + j * j == m)
    // 				count++;
    // 	cout << count;
    // ll n;
    // cin >> n;
    // string s;
    // cin >> s;
    // char prev;
    // prev = s[0];
    // ll sum = s[0] - 48 + 1;
    // cout << 1;
    // for (ll i = 1; i < n; i++)
    // {

    //     if (s[i] + 1 - 48 == sum)
    //     {
    //         sum = s[i] - 48;
    //         cout << sum-(s[i] - 48);
    //         prev = s[i];
    //     }
    //     else
    //     {

    //         sum = s[i] - 48 + 1;
    //         cout << sum-(s[i] - 48);
    //         prev = s[i];
    //     }

    // }
    // cout << endl;
    // ll n;
    // cin>>n;
    //     if(n <= 3) {
    //         cout << n-1 << '\n';
            
    //     }
    //     else{
    //     if(n & 1)
    //         cout << "3\n";
    //     else
    //         cout << "2\n";
    // }
    // ll n;
    //  cin >> n;
    //  ll a[n];
    //     for(int i = 0;i < n;i++)
    //         cin >> a[i];
    //     reverse(a , a + n);
    //     for(int i = 0;i < n;i++)
    //         cout << a[i] << " ";
    //     cout << '\n';
    
    // ll n,k;
    // cin>>n;
    // string s;
    // cin>>s;
    //  int i = 2;
    //  ll x=1;
    //  while (x<=n)
    //  {
    //      cout<<s[x-1];
    //      x=(i*(i+1))/2;
    //      i++;
    //  }    }
    


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
