#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int mod = 1e9 + 7;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi()
{  
    int n, a,b=0,c,x1,x2,x3,x4,i,j,k;
    cin>>n;
    int ans=0,bal=0;
    // ll r[4];
    // cin>>r[0]>>r[1]>>r[2]>>r[3];
    // sort(r,r+4);
    // cout<<r[3]-r[2]<<" "<<r[3]-r[1]<<" "<<r[3]-r[0];
      
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        bal += x;
        if (bal < 0)
            ans++;
        bal = max(0, bal);
    }
    cout<<ans<<endl;
    }
     
       
  
  

 
    int main()
    {
        kuldeepyadav12
        // ll t;
        // cin>>t;
        // while(t--)
            maxi();
        
        return 0;
    }