#include<bits/stdc++.h>
 using namespace std;
 #define ll long long
  int main()
  {
  	 ll n;
  	  cin>>n;
  	   if(n%2==0)
  	{
  		 n=n/2;
  		  ll sum=n*(n+1)-n*n;
  		   cout<<sum<<endl;
	  }
	   else
	    {
	    	n=n/2;
	    	
	    	 
	    	ll k=n+1;
	    	 ll sum=n*(n+1)-k*k;
	    	  cout<<sum<<endl;
		}
	   return 0;
  	 
  }