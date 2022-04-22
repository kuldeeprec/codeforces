#include <bits/stdc++.h>
using namespace std;
#define ll long long
int lis(int*input,int n){
    int *output=new int[n];
    output[0]=1;
    for(int i=1;i<n;i++){
         output[i]=1;
         for(int j=i-1;j>=0;j--){
              if(input[j]>input[i]){
                  continue;
              }
              int possible=output[j]+1;
              if(possible>output[i]){
                  output[i]=possible;
              }
         }
    }
    int best=0;
    for(int i=0;i<n;i++){
        if(best<output[i]){
            best=output[i];
        }
    }
    return best;
}

void maxi(){
int n;
cin>>n;
int *a=new int[n];
for(  int i = 0; i < n; i++){
    cin>>a[i];
}
cout<<lis(a,n);

delete[] a;
  

}


int32_t main()
{
   int t;
   t=1;
//    cin>>t;
   while(t--)
{
    maxi();
}
    
	return 0;
}


