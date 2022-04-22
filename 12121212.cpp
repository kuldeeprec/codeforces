#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=1,mex=0,x;
    cin>>n;
    int a[n];
    int counti[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    counti[n-1]=1;
    for(int i=n-1;i>0;i--)
    {
          if(a[i-1]==a[i])
          {
             counti[i]=counti[i-1]+1;
              
          }
          else
          {
             counti[i]=1;
          }
           
    }
    for(int i=0;i<n-1;i++){
        count=counti[i]+counti[i+1];
        if(count>mex){
            mex=count;
            x=i;
        }
    }
    cout<<x<<endl;
}