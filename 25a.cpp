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
      ll x,y,z;
       cin >> x >> y >> z;
        if(z == max(x , y))
            cout << "YES\n" << 1 << " " << x << " " << y << '\n';
        else if(x == y && z < x)
            cout << "YES\n" << x << " " << z << " " << z << '\n';
        else
            cout << "NO\n";
    }
    
		
	
   

 

    

int main(){
    ll t;
    cin>>t;
    while(t--){
    maxi();
    }
    return 0;
}
