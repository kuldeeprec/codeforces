#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int mod = 1e9 + 7;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi()
{  
   ll n,low,high,x,ans=0;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> x;
        if(!i) {
            low = x;
            high = x;
        } else {
            if(x > high) {
                high = x;
                ans++;
            } else if (x<low) {
                low = x;
                ans++;
            }
        }
    }
    cout << ans;
     
     
     
       
  }
  

 
    int main()
    {
        kuldeepyadav12
        
            maxi();
        
        return 0;
    }