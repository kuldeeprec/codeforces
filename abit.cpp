#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
     char s;
      char value='X';
     cin>>n;
     while (n--)
     {
     	
         cin>>s>>value;
         if (s=='++')
         {
             ++count;

         }
         if (s=='--')
         {
             --count;
         }
         
     }
     
  cout<<count;
  return 0;

}
