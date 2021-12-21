#include <stdio.h>
 
int main ()
{
 
   FILE *fp;
   int i=25,j=3,k=26,num;
   fp = fopen ("test.c","w");
   putw(i,fp);
   putw(j,fp);
   putw(k,fp);
   fclose(fp);
   fp = fopen ("test.c","r");
  
   while((num=getw(fp))!=EOF)
   {
   printf("Data in test.c file is %d \n", num);
   }
   
   fclose(fp);
   return 0;
}
