#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;
int main(){
    int n,next,i,j=0,sum,min;
    cin>>n;
    for ( i = 1; i <=n; i++)
    { int a,b;
        cin>>a >>b;
        if (i==1)
        {
            sum=a+b;
            min=sum;
        }
        if(i>1){
		
        j=sum;
        next=sum-a+b;
        sum=next;
        if (abs(next)>abs(j))
        {
            min=next;
        }
    }
        
    }
 cout<<min;    
        
    return 0;
    
}
