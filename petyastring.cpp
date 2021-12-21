#include<iostream>
#include<cstring>
using namespace std;
int main()
{ 
    int i;
    int k=0;
    string  first ,second;
     cin>>first>>second;
      while (first[i]!='\0')
      {
         if (first[i]>92)
         {
            first[i]=first[i]-32;

         }
         if (second[i]>92)
         {
             second[i]=second[i]-32;
         }
         i++;
         
      }   
     
      
          if (first<second){
              k=-1;
          }
          
          else if (first>second)
          {
              k=1;
          }
          else
          {
              k=0;
          }
          
          
      
       cout<<k;      
      return 0;
      
}
