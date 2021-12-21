#include<iostream>
using namespace std;
bool pairsum(int arr[],int n,int k){
	int i,j;
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j]==k)
            {
              cout<<arr[i]<<arr[j];
                         }
            
        }
        
    }
    
}
int main(){
    int n,i,k;
    cin>>n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    pairsum(arr,n,k);
    return 0;
}
