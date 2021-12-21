#include<iostream>
#include<algorithm>
#include<cmath>
#include <string>
#include <vector>
#define ll long long
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll n,i,k=0,max=0,c;
        cin>>n;
        ll a[n],b[n];
        for ( i = 0; i < n; i++)
        { cin>> b[i];
        }
void generateGrayarr(ll n)
{
    // base case
    if (n <= 0)
        return;
 
    // 'arr' will store all generated codes
    vector<ll> arr;
 
    // start with one-bit pattern
    arr.push_back(0);
    arr.push_back(1);
 
    // Every iteration of this loop generates 2*i codes from previously
    // generated i codes.
    int i, j;
    for (i = 2; i < (1<<n); i = i<<1)
    {
        // Enter the prviously generated codes again in arr[] in reverse
        // order. Nor arr[] has double number of codes.
        for (j = i-1 ; j >= 0 ; j--)
            arr.push_back(arr[j]);
 
        // append 0 to the first half
        for (j = 0 ; j < i ; j++)
            arr[j] = 0 + arr[j];
 
        // append 1 to the second half
        for (j = i ; j < 2*i ; j++)
            arr[j] = 1 + arr[j];
    }
 

}
        void generateGrayarr(ll n);
         for ( i = 0; i < n; i++)
        { 
        {
           a[i]= arr[k]+a[i];
        }
        
    
    }
    return 0;}
