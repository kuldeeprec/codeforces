#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d",&n);
 
    int i;
    for(i=n+1;1;i++){
        int j=i;
        int a,b,c;
        a=j%10;
        j=j/10;
        b=j%10;
        j=j/10;
        c=j%10;
        j=j/10;
 
        if(a!=b && a!=c && a!=j && b!=c && b!=j && c!=j)
        {
            printf("%d",i);
            break;
        }
    }
 
    return 0;
}