#include <bits/stdc++.h>
using namespace std;
const int h = 1e5 + 5;
const int mod = 1e9 + 7;
const int N=2010;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi(){
ll n,m,k=1;
cin>>n>>m;
for (ll i = 1; i <=n; i++)
{
    for (ll j = 1; j<=m; j++)
    {
        if(i%2!=0){
         cout<<"#";
        }
        else
        {
           if(i%2==0&&k==1&&j!=m){
           cout<<".";

        } 
         if(i%2==0&&k==1&&j==m){
           cout<<"#";
           continue;
        }
        if(i%2==0&&k==m&&j==1){
           cout<<"#";
        
        
        }if(i%2==0&&k==m&&j!=1){
           cout<<".";
           continue;
        }
        }
        
    }
    if (k==1&&i%2==0)
    {
        k=m;
    }
    else if(k==m&&i%2==0){
        k=1;
    }
    
    
    cout<<"\n";
}

 
}
 
 
    
 
    int main()
    {
        kuldeepyadav12
    
        // ll t;
        //  cin>>t;
        //  while(t--)
            maxi();
        
        return 0;
    }