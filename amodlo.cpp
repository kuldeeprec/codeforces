#include<iostream>
#include<algorithm>
using  namespace std;
int main(){
    long long l,r,j;
    long long a;
    int t,i,flag=1;
    /*cin>>t;
    for ( i = 0; i < t; i++)
    {
        cin>>l>>r;
        for ( j = 1; j <=2*r; j++)
        {
            if (l%j>j/2&&r%j>j/2)
            {
                flag=0;
                break;
            }
            else{
            	flag=1;
			}
            
        }
        if (flag==0)
        {
          cout<<"YES"<<endl;;
          
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }*/
      int test=1;
    cin>>test;
    while(test--)
    {
        long long  l,r;
        cin>>l>>r;
        if(((r+2)/2)<=l)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;

    
}
