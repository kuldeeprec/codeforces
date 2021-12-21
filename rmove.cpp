#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int mod = 1e9 + 7;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi()
{  
    /*  ll n,i,j=1,k;
      cin>>n;
      ll a[n];
      for (ll i = 0; i < n; i++)
      {
          cin>>a[i];
      }
      sort(a,a+n);
      
     
      for ( i = 0; i < n-1; i++)
      {    
          if (a[i]==a[i+1]||a[i]+1==(a[i+1]))
          {  
              j++;
          }
          
          
      }
          if (n==j)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
      
      */
    // ll n,k,i,j;
    // cin>>n>>k;
     /* ll dp[n+1];dp[0]=0;
       for ( ll i = 1; i <=n; i++)
       {
         dp[i]=dp[i-1]+i*5;
        if(dp[i]+k>240){cout<<i-1;return;}
       }
        
    cout<<n;
    */
    /* i=max(n,k);
     j=min(n,k);
     cout<<min(n,k)<<" "<<(i-j)/2;
      
      */
      
      
    
     
     
     
       
  }
  

 
    int main()
    {
        kuldeepyadav12
        
         int t;
    string s;
    cin >> t;
    while(t--) {
        cin >> s;
        int cnt = 0;
        for(auto &i : s)
            cnt += (i != '0');
        cout << cnt << '\n';
        for(int i = 0;i < s.size();i++) {
            if(s[i] == '0')
                continue;
            cout << s[i];
            int rem = s.size() - i - 1;
            while(rem--)
                cout << 0;
            cout << " ";
        }
        cout << '\n';
    }
        
        return 0;
    }