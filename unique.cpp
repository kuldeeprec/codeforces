#include <bits/stdc++.h>
using namespace std;
#define ll long long
void maxi()
{  ll x,total=0,i,flag=1;
   cin>>x;
   vector<ll>t;
  
       if(x<=9){
           cout<<x<<endl;
       }
       else
       {
        for ( i = 9; i>=1; i--)
        {
            total+=i;
            if(total<=x){
                 t.push_back(i);
                 if (total==x){
            
                total=x;
                break;
            }
               
            }
            if(total>x){
                total-=i;
            }
            
            
        }
         if (total!=x)
            {flag=0;
                
            }
       
            if (flag)
            {
                for (auto ir = t.rbegin(); ir != t.rend(); ++ir){
        cout << *ir;  }
       
        cout<<endl; 
            }
         
          else
          {
              cout<<"-1"<<endl;
          }   
        }
    }



   




int main()
{
    ll t;
    cin>>t;
    while (t--)
   {
        maxi();
    }
    return 0;
}