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
    //   ll n;
    //   cin>>n;
    //   ll k=2;
      
    //   for(ll i=1;i<n;i++){
    //       cout<<k++<<" ";
    //   }
    //   cout<<1<<endl;
    // ll  n, k, l, c, d, p, nl, np,re=0;
    // cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    // re=k*l/nl;
    // ll pe=c*d;
    // ll pr=p/np;
    // cout<<min(min(re,pe),pr)/n<<endl;
    // ll n;
    // cin>>n;

    // if((n%4==0)){
    //     cout<<"YES"<<endl;
    // }
    // else
    // {
    //     cout<<"NO"<<endl;
    // }
    // ll n,can1=0,can2=0;
    // cin>>n;
    // ll a[n];
    // for (ll i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    //     if(a[i]==1){
    //         can1++;
    //     }
    //     else
    //     {
    //         can2++;
    //     }
        
    // }
    // can2%=2;
    // if (can1 % 2 == 0 && (can2 == 0 || can1 >= 2))
    // {
    //     cout<<"YES"<<endl;
        
    // }
    
    // else
    // {
    //     cout<<"NO"<<endl;
    
    // }
    ll n,sum=0,i=1,k=0,prev=0;
    cin>>n;
    while (1)
    {
        sum+=(i*(i+1))/2;
        if(sum>n){
            break;
        }
        i++;
        k++;
        
    }
    cout<<k<<endl;
    
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
