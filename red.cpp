#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int mod = 1e9 + 7;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi()
{  
    /* ll r,b,d,k,e,f;
     cin>>r>>b>>d;
     k=min(r,b);
     f=max(r,b);
     e=k*(d+1);
      if (e>=f)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }*/
      ll n,m,k,a,b,c,d;
      cin>>n>>m>>k;
      a=m-1+(m)*(n-1);
      b=n-1+n*(m-1);
      c=min(a,b);
      d=max(a,b);
      if (k>=c&&k<=d)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
      
  	

  
      
      
      
       
  }
  

 
    int main()
    {
        kuldeepyadav12
        ll t;
        cin >> t;
        while (t--)
        {
            maxi();
        }
        return 0;
    }