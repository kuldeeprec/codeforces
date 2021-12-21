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
    ll n,m,k=0,l=0;
    cin>>n>>m;
    char a,b,c;
    for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
      cin>>a;
       if(a=='C'||a=='M'||a=='Y'){
           k++;
       }

    }
    }
    if(k){
        cout<<"#Color"<<endl;
    }
    else
    {
        cout<<"#Black&White"<<endl;
    }
    

    }
		
	
   

 

    

int main(){
    // ll t;
    // cin>>t;
    // while(t--){
    // maxi();
    // }
    maxi();
    return 0;
}
