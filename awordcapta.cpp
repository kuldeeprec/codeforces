#include<iostream>
#include<cstring>
using namespace std;
int main()
{ 
    int i;
    
    string  first;
     cin>>first;
      i =0;
      
         if (first[i]>92)
         {
            first[i]=first[i]-32;

         }
          
      cout <<first;
      return 0;
       }
