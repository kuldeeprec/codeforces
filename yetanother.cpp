#include<bits/stdc++.h>
 
 using namespace std;
  int main()
  { 
   int n;
    cin>>n;
     
     while(n--)
     { 
    long long  count=0;
	 
  	 long long a,b;
  	  cin>>a>>b;
  	    count=0;
  	   long long diff= abs(a-b);
  	   for(int i=10;i>0;i--)
  	   {
  	   	 count+=diff/i;
  	   	  diff=diff%i;
		 }
		   cout<<count<<endl;
	}
		  
  	 return 0;
  }