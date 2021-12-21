#include<bits/stdc++.h>
 using namespace std;
  int main()
  
  {
  	 int ans=0;
  	int n=1;
int arr1[4][4];
 
 for(int i=0;i<4;i++)
 {
 	 for(int j=0;j<4;j++)
 	 {
	  
 	arr1[i][j]=n;
 	 n=n+2;
 	 cout<<arr1[i][j]<<" ";
 }
 cout<<endl;
 }
  cout<<endl;
  cout<<"Is your birthday date  is present in above matrix then press 1 otherwise press 0 "<<endl;
   
    int check1;
     cin>>check1;
       if(check1==1)
         ans+=arr1[0][0];
          
           
            int o=2;
         
       int arr2[4][4];
       for(int i=0;i<4;i++)
       {
       	for(int j=0;j<4;j++)
       	{
                  if(j==2)
                  o=o+2;
                  if(i>0&&j==0)
                  o=o+2;
       		    
       		  arr2[i][j]=o;
       		   o=o+1;
       		    
       		  cout<<arr2[i][j]<<" ";
       		
       		  
       		
		   }
		    cout<<endl;
	   }
	     cout<<endl;
  cout<<"Is your birthday  date is present in above matrix then press 1 otherwise press 0 "<<endl;
           int check2;
            cin>>check2;
		   if(check2==1)
		   ans+=arr2[0][0];
		   
		    
		     int p=4;
		      int arr3[4][4];
		       for(int i=0;i<4;i++)
		       {
		       	 for(int j=0;j<4;j++)
		       	 {    
		       	     if(i>0&&j==0)
		       	      p=p+4;
		       	 	arr3[i][j]=p;
		       	 	 p=p+1;
		       	 	 cout<<arr3[i][j]<<" ";
					}
		       	  cout<<endl;
			   }
			     cout<<endl;
  cout<<"Is your birthday date  is present in above matrix then press 1 otherwise press 0 "<<endl;
           int check3;
            cin>>check3;
		   if(check3==1)
		   ans+=arr3[0][0];
		   
		   int q=8;
		    int arr4[4][4];
		     for(int i=0;i<4;i++)
		     {
		     	 for(int j=0;j<4;j++)
		     	 {   if(i==2&&j==0)
		     	        q=q+8;
		     	 	arr4[i][j]=q;
		     	 	q=q+1;
		     	 	cout<<arr4[i][j]<<" ";
				  }
				   cout<<endl;
			 }
			 cout<<"Is your birthday date  is present in above matrix then press 1 otherwise press 0 "<<endl;
           int check4;
            cin>>check4;
		   if(check4==1)
		   ans+=arr4[0][0];
		   
		   int r=16;
		     int arr5[4][4];
		      for(int i=0;i<4;i++)
		      {
		      	for(int j=0;j<4;j++)
		      	{
		      		 arr5[i][j]=r;
		      		  r=r+1;
		      		   cout<<arr5[i][j]<<" ";
				  }
				   cout<<endl;
			  }
			  cout<<"Is your birthday date is present in above matrix then press 1 otherwise press 0 "<<endl;
           int check5;
            cin>>check5;
		   if(check5==1)
		   ans+=arr5[0][0];
		    cout<<endl;
		     cout<<"Your Birthday date is ..."<<endl;
		      cout<<ans<<endl;
 
  	 return 0;
  }