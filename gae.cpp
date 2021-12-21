#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    long long int a[n],x,y,sum=0;
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(long long int i=0;i<n;i++)
     {   
         if(a[i]==1)
         {
             sum=sum+1;
         }
        else
       {    
           sum=sum+a[i];
           x=a[i];
           for(long long int i=2;x>1;)
           {
             while(x%i==0)
             {
                 sum=sum+(x/i);
                 x=x/i;
             }
             if(i==2){
                 i++;
             }
             else
             {
                 i+=2;
             }
             
           }   
        }
     }
     printf("%lld",sum);
     return 0;
 }