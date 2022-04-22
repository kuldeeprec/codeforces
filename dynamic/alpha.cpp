#include <bits/stdc++.h>
using namespace std;
#define ll long long

int numcode(int *n,int size) {
    if(size==1||size==0){
        return 1;
    }
    int output= numcode(n,size-1);
    if(n[size-2]*10+n[size-1]<=26){
        output+=numcode(n,size-2);
    }
    return output;
}
int numcode2(int *n,int size,int *arr) {
    if(size==1||size==0){
        return 1;
    }
    if(arr[size]>0){
        return arr[size];
    }
    int output= numcode(n,size-1);
    if(n[size-2]*10+n[size-1]<=26){
        output+=numcode(n,size-2);
    }
    arr[size]=output;
    return output;
}
int numcode3(int *input,int size){
    int *output = new int[size+1];
    output[0]=1;
    output[1]=1;
    for(int i=2;i<=size;i++){
        output[i]=output[i-1];
        if(input[i-2]*10+input[i-1]<=26){
            output[i]+=output[i-2];
        }
    }
    int ans= output[size];
    delete [] output;
    return ans;
}

void maxi(){
int n;
cin>>n;
int *a=new int[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<numcode3(a,n);

delete [] a;
  

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


