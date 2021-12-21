#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi()
{  
    
    ll n,k=0;
    cin>>n;
    ll p=n;
 while (p>0) {
		k++;
		p >>= 1;
	}
     k--;
     ll r=(ll)pow(2,k+1);
     r=r-1;
 
  ll sum=(n*(n+1))/2-2*r;
  cout<<sum<<endl;

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