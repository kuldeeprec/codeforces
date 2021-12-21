#include<iostream>
#include<cmath>
using namespace std;
int main(){
 int t,n,flag=1;
 long long i,j,key;
 long long precost,cost;
 cost=precost=0;
 cin>>t;
 while (t--)
 {
     cin>>n;
 long long a[n];
 for ( i = 0; i < n; i++)
 {
     cin>>a[i];
 }
  for ( j = 1; j < n; j++)
     {
         key=a[j];
        i=j-1;
        while (i>=0&&a[i]>key)
        {
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;

     }
     
     for ( i = n-1,j=1; i >=0; i--,j++)
     {   
        if (cost>=precost)
        {    precost=cost;
            cost= a[i]*j;
            flag=0;
        
        }
        else
        {   flag=1;
            break;
        }
     }
     if(flag==0){
     	precost=cost;
	 }
     cout<<precost;
     cost=precost=0;
     fflush(stdout);
 
 }
 
 return 0;
}
