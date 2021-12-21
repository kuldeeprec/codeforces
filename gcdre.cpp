#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int mod = 1e9 + 7;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
     
// }
void maxi(){
// {   int a,b,c;
//        cin >> a >> b >> c;
//         cout << "1";
//         while(a > 1)
//             cout << "0", a--;
//         int y = 1;
//         for(int i = 1;i < c;i++)
//             y *= 10;
//         for(int i = c;i < b;i++)
//             y *= 11;
//         cout << " " << y << '\n';

ll  a,b,c, t,n,i,j,k,l,p,m,h,d;
  
  cin>>a>>b>>c;
  n=1;m=1;k=1;
 for(i=0;i<a-1;i++) 
  n*=10;
 for(i=0;i<b-1;i++)
  m*=10;
  for(i=0;i<c-1;i++)
  k*=10;
  cout<<n<<" "<<m+k<<endl;
    }
    
     
       
  
  

 
    int main()
    {
        kuldeepyadav12
    
        ll t;
         cin>>t;
         while(t--)
            maxi();
        
        return 0;
    }