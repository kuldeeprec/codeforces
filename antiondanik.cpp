#include<iostream>
using namespace std;
int main(){
    long long n;
    string s;
    cin>>n;
    cin>>s;
    long k,i=0,at=0,dt=0;
    k=s.length();
    while (n--)
    { 
        if (s[i]=='A')
        {
            at++;
        }
        if (s[i]=='D')
        {
            dt++;
        }
        i++;      
        
        
    }
    if (at==dt)
    {
        cout<<"Friendship";
    }
    if (at>dt)
    {
        cout<<"Anton";
    }
    if (at<dt)
    {
        cout<<"Danik";
    }
}
