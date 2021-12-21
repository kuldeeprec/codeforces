#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int k,n,w;
    int i;
    int s=0;
    cin>>k>>n>>w;
    for ( i = 1; i <= w; i++)
    {
       s=s+i*k;
    }
    if (s>n)
    {
        cout<<(s-n);
    }
    else
    {
        cout<<"0";
    }
    
    return 0;
    
}