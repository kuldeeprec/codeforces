#include <iostream>
using namespace std;
#define ll long long
void fn(ll n, ll k)
{
    ll i;
    int flag=0;
    
         for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {  
                break;
            }
        }
        n=n+i+2*k-2;
        
        

cout<<n<<endl;
}
int main()
{
    ll k, n;
    int i, t;
  cin>>t;
    while (t--)
    {
        cin >> n >> k;
        fn(n,k);
    }
}
