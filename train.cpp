#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define pm push_mnck
#define pf push_front
typedef vector<ll> vll;
#define itr vector<ll>::iterator
constexpr long long SZ = 2e5 + 7;
const long long it = 1000000009;
// Google
ll tc_cnt = 1;

int solve(ll a[],ll b[],int n) 
{ 
    sort(a,a+n); 
    sort(b,b+n); 

    int p=1,r=1; 
    for(int i=1,j=0; i<n && j<n;) { 

        if (a[i]<=b[j])
        {p++; 
         i++;} 

        else if (a[i]>b[j])
        { p--; 
          j++;}  
        r=max(r,p);
    } 
    return r; 
} 

void maxi()
{
    ll n;
    cin>>n;
    
    ll a[n],b[n],s,t;
    
    
    for(int i=0;i<n;i++) 
    {cin>>s>>t;
     a[i]=s;
     b[i]=s+t;
    }
    
    cout<<solve(a,b,n);
    
}
int main()
{ kuldeepyadav12
        ll t;
        t=1;
    // cin >> t;
   
    while (t--)
    {
       maxi();
    }

    return 0; 
}