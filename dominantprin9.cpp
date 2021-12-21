#include <bits/stdc++.h>
using namespace std;
#define ll long long
void maxi()
{ 
    ll n,i,total=0,maxim=0,postion=-1;
    cin>>n;
    ll a[n];
    for ( i = 0; i <n; i++)
    {
          cin>>a[i];
    }
    for ( i = 0; i < n; i++)
    {   if (i==0&&a[i]>a[i+1])
    {
        total=a[i]+1;
        if (total>=maxim)
            {
                maxim=total;
                postion=i+1;
            }
        
    }
      if (i==n-1&&a[i]>a[i-1])
    {
        total=a[i]+1;
        if (total>=maxim)
            {
                maxim=total;
                postion=i+1;
            }
        
    }

        if((((i!=0)&&(i!=n-1))&&a[i]>=a[i+1]&&a[i]>a[i-1])||(((i!=0)&&(i!=n-1))&&(a[i]>a[i+1]&&a[i]>=a[i-1]))){
            total=a[i]+2;
            if (total>=maxim)
            {
                maxim=total;
                postion=i+1;
            }
            
        }
    }
     cout<<postion<<endl;
    
    }



   




int main()
{
    ll t;
    cin>>t;
    while (t--)
   {
        maxi();
    }
    return 0;
}