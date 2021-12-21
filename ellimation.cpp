#include <iostream>
#include<cmath>
using namespace std;
int main()
    {
         int t;
         int a ,b,c,d;
         cin>>t;
         while (t--)
         {
            cin>>a>>b>>c>>d;
            if((a+b)>(c+d)){
                 cout<<a+b<<endl;
            }
            else
            {
                cout<<c+d<<endl;
            }
            
         }
         
        return 0;
    }
