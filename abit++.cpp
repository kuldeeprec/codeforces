#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
     string s;
     cin>>n;
     while (n--)
     {
     	
         cin>>s;
         if (s[1]=='+')
         {
             ++count;

         }
         if (s[1]=='-')
         {
             --count;
         }
         
     }
     
  cout<<count;
  return 0;

}
