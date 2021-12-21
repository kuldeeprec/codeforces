#include<iostream>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;
int main(){
  int t;
  cin>>t;
  
  while (t--)
  {
      ll n,i,count=0;;
      cin>>n;
      ll  a[n];
      for ( i = 0; i < n; i++)
      {
          cin >> a[i] ;
      }
      
      for ( i = 1; i < n; i=i+2)
      {

          if (a[i]>a[i-1]&&a[i]>a[i+1])
          {
              count++;
          }
          if (a[i]<a[i-1]&&a[i]<a[i+1])
          {
              
          }
          
          
           
      }
      
      if (t==1)
      {
          cout<<"1"<<endl;
      }
      else
      {
          cout<<"0"<<endl;
      }
      
      
      

  }
  return 0;}