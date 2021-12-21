#include <bits/stdc++.h>
using namespace std;
const int h = 1e5 + 5;
const int mod = 1e9 + 7;
const int N=2010;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
void maxi(){
   long double n,k,b,c,d,i,sum=0;
   cin>>n;
//    vector<ll>vec;
//     ll a[n];
//     for ( i = 0; i <n; i++)
//     {
//      cin>>a[i];
//     }
//     for ( i = 0; i < n; i++)
//     {
//         sum+=a[i];
//         vec.push_back(a[i]);
//         if(sum==k){
        
//             vec.pop_back();
//             c=a[i];
//             i++;
//             if(i<n){
//             sum+=a[i];
//             vec.push_back(a[i]);
//             vec.push_back(c);
//             }

//         }
//     }
//     if(sum==k){
//     cout<<"NO"<<endl;
//     }
//     else
//     {
//         cout<<"YES"<<endl;
//         for ( i = 0; i < vec.size(); i++)
//         {
//             cout<<vec[i]<<" ";
//         }
//         cout<<endl;
//     }
   k=n;
   b=n;
   ll p=(ll)n;
   int flag=0;
    if(p<2||p%2!=0){
        cout<<"NO"<<endl;
    }
    else if(n==2||n==4){
        cout<<"YES"<<endl;
        
    }

    else
    {
        k=k/2;
        b=b/4;
        if(isPerfectSquare(k)||isPerfectSquare(b)){
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    
    

  
  
 
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