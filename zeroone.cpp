#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void maxi()
{
    string s;
    cin>>s;
    ll n=s.length();
    ll previzero=0,currentzero=1;
    ll previone=0,currentone=1;
    for (ll i = 0; i < n-1; i++)
    {
      if (s[i]=='0'&&s[i+1]=='0')
      {
          currentzero++;

      }
       if(s[i]=='1'&&s[i+1]=='1'){
          currentone++;
      }
       if(s[i]=='0'&&s[i+1]=='1'){
          if (previzero<currentzero)
          {  previzero=currentzero;
              currentzero=1;
          }
          
      }
        if(s[i]=='1'&&s[i+1]=='0'){
          if (previone<currentone)
          {previone=currentone;
              currentone=1;
          }
          
      }
    }
     if (previone<currentone)
          {previone=currentone;
              currentone=1;
          }
            if (previzero<currentzero)
          {  previzero=currentzero;
              currentzero=1;
          }
    cout<<previzero<<" "<<previone<<endl;
    

   

   }

    int main()
    {
        ll t;
        cin >> t;
        while (t--)
        {
            maxi();
        }
        return 0;
    }