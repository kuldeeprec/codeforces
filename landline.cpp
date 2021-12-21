#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,i,min=0,max=0,val1,val2,val3,val4;
    cin>>n;
    ll a[n];
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];

    }
    for ( i = 0; i < n; i++)
    {   if(i==0){
    	
    	 val2=abs(a[i]-a[i+1]);
    	 val1= val2+1;
    	  val3=abs(a[i]-a[0]);
        val4=abs(a[i]-a[n-1]);
    	
	}
	if(i==n-1){
		val1=abs(a[i]-a[i-1]);
        val2=abs(a[i]-a[i+1]);
        val3=abs(a[i]-a[0]);
        val4=val3-1;
    }
	if(i>0&&i<n-1)
       {
		 val1=abs(a[i]-a[i-1]);
        val2=abs(a[i]-a[i+1]);
        val3=abs(a[i]-a[0]);
        val4=abs(a[i]-a[n-1]);}
        if (val1>val2)
        {
            min=val2;
        }
        else
        {
            min=val1;
        }
        if (val3>val4)
        {
            max=val3;
        }
        else
        {
            max=val4;
        }
        
        
        cout<<min<<" "<<max<<endl;
    }
    
   return 0; 
}
