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
// split fuction in c++ mode
ll const N = 1e5+5;
void maxi(){
    ll n, arr[N],ans[N][2];
	vector<string>a,b;
	cin >> n; 
	for(int i = 0;i<n; i++){
        cin>> arr[i];
    }
	ans[0][0] = 0,ans[0][1] = arr[0];
	for(int i =0;i<n; i++)
    {
        string s;
        cin >> s; 
        a.push_back(s);
        reverse(s.begin(), s.end());
        b.push_back(s);
    }
	for(int i = 1;i<n; i++)
	{
	    ans[i][0] = ans[i][1] = 1e18;
	    if(a[i-1] <= a[i])
	       ans[i][0] = ans[i-1][0];
	    if(a[i-1] <= b[i])
	       ans[i][1] = ans[i-1][0] + arr[i];
	    if(b[i-1] <= a[i])
	      ans[i][0] = min(ans[i][0],ans[i-1][1]);
	    if(b[i-1]<=b[i])
	       ans[i][1] = min(ans[i][1],ans[i-1][1] + arr[i]);
	}
	ll low = min(ans[n-1][1],ans[n-1][0]);
	if(low == 1e18){
       cout <<-1;
    }
    else{
    cout << low; 
    }
	     
	
	
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
