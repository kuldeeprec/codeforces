                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long 
#define pb push_back
#define pf push_front
#define Pb pop_back
void maxi(){
    // ll n;
    //         cin >> n;
    //         ll a[n];
            
    //     for(ll i = 0;i < n;i++)
    //         cin >> a[i];
    //     if(a[0] + a[1] <= a[n - 1])
    //         cout << "1 2 " << n << '\n';
    //     else
    //         cout << "-1\n";
    ll n;
    cin>>n;
    ll a[n];
    
        for(ll i = 0;i < n;i++)
            cin >> a[i];
        ll ans = 0;
        for(ll i = 1;i < n;i++) {
            if(a[i] > a[i - 1]) {
                ll lst = a[i - 1];
                while(a[i] > 2 * lst)
                    lst *= 2, ans++;
            } else {
                ll lst = a[i];
                while(a[i - 1] > 2 * lst)
                    lst *= 2, ans++;
            }
        }
        cout << ans << '\n';
    }

    
    
    
    

    


int main(){
    kuldeepyadav12
    ll t;
    cin>>t;
    while(t--){
    maxi();
    }

    return 0;
}
