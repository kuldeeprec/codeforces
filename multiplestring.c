 #include <string.h>
    #include <stdio.h>
    int main()
    {	char s[1000];
    	int t;
    	scanf("%d",&t);
    	while(t--)
    	{
    	
    		scanf("%*c%[^\n]", s);
    		printf("%s\n", s);
    		
    	}
    }
