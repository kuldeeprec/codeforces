#include<bits/stdc++.h>
using namespace std;
int smallestDivisor(int n)
{
    if (n % 2 == 0)
    {
        return 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
        {
            return i;
        }
    }
    return n;
}
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            return false;
        }
    return true;
}
 
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
 bool z= isPrime(a[i]);
         if(a[i]==1)
         {
             sum=sum+1;
         }
        else if(z==true)
        {
           sum= sum+a[i]+1;
        }
        else
        {
            y=smallestDivisor(a[i]);
            x=a[i]/y;
            sum=sum+(a[i]+1)+x;
        }
        printf("%d\n",sum);
     }
     return 0;
}