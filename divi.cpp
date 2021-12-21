#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,p,p1,p2,p3;
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            p=a/b;
            p1=b*p;
            p2=p1+b;
            p3=p2-a;
            cout<<p3<<endl;
        }
    }
    return(0);
}