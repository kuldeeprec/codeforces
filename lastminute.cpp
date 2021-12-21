#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long n,k,m,j,i,count=0;
        cin>>n;
        
        for ( i = 0; i < n/2+1; i++)
        {   cin>>k;
            cin>>m;
            
            if (k==m)
            { m++;
              count++;
                
            }
            if(j==k){
            	count++;
			}
            j=m;
            
        }
        cout<<count;
    }
    return 0;
}
