#include<iostream>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--)
  { ll n,i,j=8;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        if (n<1)
        {
            cout<<"0";
        }
        else if (n==1)
        {
             cout<<"9";
        }
        else
        { 
		if (j>9)
        {
            j=0;
        }  
           if (i==0&&n!=1)
           {
               cout<<"9";
           }
           
            else{
			
            cout<<j;
            ++j;}
        }
        
        
    }
    cout<<endl;
      
  }
  
return 0;
}
