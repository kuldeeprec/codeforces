                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define pf push_front
#define Pb pop_back
void maxi(){
    //  ll n,flag=0,k;
    //  cin>>n;
    // if (n == 0)
    //     return;
 
    // ll msb = 0;
    // n = n / 2;
    // while (n != 0) {
    //     n = n / 2;
    //     msb++;
    // }
 
    // k=(1 << msb);
    // cout<<k-1<<endl;
    // ll n;
    // string s;
    // cin >> n >> s;
		// int cnt = 0;
		// for(auto &it:s)
		// 	cnt += (it == '0');
		// if(n % 2 == 0 || (s[n / 2] == '1'))
		// 	cout << "BOB" << endl;
		// else
		// {
		// 	if(cnt == 1)
		// 		cout << "BOB" << endl;
		// 	else
		// 		cout << "ALICE" << endl;
		// }
        // int alice = 0, bob = 0;
		// int cnt = 0, reqd = 0;
		// for(auto &it:s)
		// 	cnt += (it == '0');
		// string str = s;
		// reverse(str.begin(), str.end());
		// if(s == str)
		// {
		// 	if(n % 2 == 0 || (s[n / 2] == '1'))
		// 		cout << "BOB" << endl;
		// 	else
		// 	{
		// 		if(cnt == 1)
		// 			cout << "BOB" << endl;
		// 		else
		// 			cout << "ALICE" << endl;
		// 	}
		// }
		// else
		// {
		// 	if(n % 2 == 0 || (s[n / 2] == '1'))
		// 		cout << "ALICE" << endl;
		// 	else
		// 	{
		// 		if(cnt == 2)
		// 			cout << "DRAW" << endl;
		// 		else
		// 			cout << "ALICE" << endl;
		// 	}
		// }
        ll n;
        cin >> n;
        map<int, ll> mp;
        ll ans = 0;
        for(int i = 0;i < n;i++) {
            int x;
            cin >> x;
            ans += (n - i) * mp[x];
            mp[x] += i + 1;
        }
        cout << ans << '\n';
    }
		
	
   

 

    

int main(){
    ll t;
    cin>>t;
    while(t--){
    maxi();
    }
    return 0;
}
