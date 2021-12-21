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
    // ll n;
    // cin>>n;
    //   ll num2=n/2;
    // ll num3=0;
    // if(n%2!=0)
    // {
    // 	num2--;
    // 	num3++;
	// }
	// ll ans=n/2;
	// cout<<ans<<endl;
	// for(ll i=0;i<num2;i++)
	// {
	// 	cout<<"2 ";
	// }
	// for(ll i=0;i<num3;i++)
	// {
	// 	cout<<"3 ";
	// }
    // ll n;
    // cin>>n;
    // if(n&1){
    //     n=n-1;
    //     cout<<n/2<<endl;
    // }
    // else
    // {
    //     cout<<n/2<<endl;
    // }
    ll n,m;
     cin >> n >> m;
        if(n == 1)
            cout << "0\n";
        else if(n == 2)
            cout << m << '\n';
        else
            cout << 2 * m << '\n';
    }

int main(){
    ll t;
    cin>>t;
    while(t--){
    maxi();
    }
    return 0;
}
