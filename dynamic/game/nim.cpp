#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll countWays(ll n,ll m)
    {
        // your code here
        if(m>n){
          vector<ll>output(m+1);
           output[0] =1;
           output[1] =1;
           for(ll i=2;i<m;i++){
          output[i] =output[i-1]*2;
        }
        }
        else{

        
        vector<ll>output(n+1);
        output[0] =1;
        output[1] =1;
        for(ll i=2;i<m;i++){
          output[i] =output[i-1]*2;
        }
        for(ll i=m;i<=n;i++){
            if(m==2){
             output[i] =output[i-1]+output[i-2];
            }
            else if(m==3){
                output[i] =output[i-1]+output[i-2]+output[i-3];
            }
            else if(m==4){
                 output[i] =output[i-1]+output[i-2]+output[i-3]+output[i-4];
            }
            else if(m==5){
                 output[i] =output[i-1]+output[i-2]+output[i-3]+output[i-4]+output[i-5];
            }
            else if(m==6){
                 output[i] =output[i-1]+output[i-2]+output[i-3]+output[i-4]+output[i-5]+output[i-6];
            }
            else if(m==7){
                 output[i] =output[i-1]+output[i-2]+output[i-3]+output[i-4]+output[i-5]+output[i-6]+output[i-7];
            }
             else if(m==8){
                 output[i] =output[i-1]+output[i-2]+output[i-3]+output[i-4]+output[i-5]+output[i-6]+output[i-7]+output[i-8];
            }
             else if(m==9){
                 output[i] =output[i-1]+output[i-2]+output[i-3]+output[i-4]+output[i-5]+output[i-6]+output[i-7]+output[i-8]+output[i-9];
            }
             else if(m==10){
                 output[i] =output[i-1]+output[i-2]+output[i-3]+output[i-4]+output[i-5]+output[i-6]+output[i-7]+output[i-8]+output[i-9]+output[i-10];
            }
             else if(m==11){
                 output[i] =output[i-1]+output[i-2]+output[i-3]+output[i-4]+output[i-5]+output[i-6]+output[i-7]+output[i-8]+output[i-9]+output[i-10]+output[i-11];
            }
             else if(m==12){
                 output[i] =output[i-1]+output[i-2]+output[i-3]+output[i-4]+output[i-5]+output[i-6]+output[i-7]+output[i-8]+output[i-9]+output[i-10]+output[i-11]+output[i-12];
            }
            
        }
        return output[n];
        }
       
    }
void maxi(){
 ll s,m;
 cin>>s>>m;
 cout<<countWays(s,m)<<endl;
 
 }


int main()
{
   ll t;
   t=1;
   cin>>t;
   while(t--)
{
    maxi();
}
    
	return 0;
}


