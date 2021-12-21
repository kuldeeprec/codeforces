#include<stdio.h>
#include<string.h>
int main(){
    int n;
    
	char string[1000];
    
    scanf("%d",&n);
    while (n--)
    {
        scanf("%*c%[^\n]",string);
        
        
    int count= length(&string);
    printf("%d",count);
    if(count>10){
          int k=count-2;
          printf("%c%d%c",string[0],k,string[count]);
          
      }
      else
      {
          printf("%s",string);
      }
   
}
    
   
     
   
      
      return 0;
     
}
 int length(char**string){
     int  count=0;
      int i=0;
       while ( (**string+i)!='\n')
     { 
         i=i+1;
         count++;
     }
	  return count;
	  }
