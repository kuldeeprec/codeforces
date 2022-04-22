#include <bits/stdc++.h>
using namespace std;
#define ll long long
int fib2(int n,int *arr){
    if(n==0||n==1){
        return 1;
    }
    if(arr[n]>0){
        return arr[n];
    }
    int output= fib2(n-1,arr)+fib2(n-2,arr);
    arr[n]=output;
    return output;
}
void maxi(){

  

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


