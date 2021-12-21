#include<iostream>
using namespace std;
int main()
{
    long long n;
    int count=0;
    cin>>n;
    while (n>5)
    {
        n=n-5;
        count++;
    }
    count++;
    cout<<count;
    
    return 0;
    
}
