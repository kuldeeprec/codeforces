
 //kuldeep yadav rajkiya engineering college sonbhadra
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
// Google
ll tc_count = 1;
#define ns()         cout << "Case #" << tc_count ++ << ": ";

void maxi(){
ll r, g, b;
 cin>>r>>g>>b;
	vector<ll> v={r, g, b};
	sort(v.begin(), v.end());
	ll ans=min((v[0]+v[1]+v[2])/3, v[0]+v[1]);
	cout<<ans;

   
} 
  


int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    // cin >> t;
    while (t--)
    {
       maxi();
    }

    return 0;
}

 
 
