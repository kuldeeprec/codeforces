#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 100;
vector<ll>v;
bool prime[N];
void maxi()
{
    memset(prime, true, sizeof(prime));
 
    for (ll p = 2; p * p < N; p++)
    {
        if (prime[p] == true) 
        {
            for (ll i = p * p; i < N; i += p)
                prime[i] = false;
        }
    }
 
    for (ll p = 2; p < N; p++)
        if (prime[p])
            v.push_back(p);

}
 ll smallestDivisor(ll n)
{
    for (ll i = 0; i <n; i++) {
        if (n % v[i] == 0)
        {
            return v[i];
        }
    }
    return n;
}
 
int main()
{
    maxi();
    ll n;
    cin>>n;
    ll a[n],x,y,sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(ll i=0;i<n;i++)
     {  
       
         if(a[i]==1)
         {
             sum=sum+1;
         }
        else if(prime[a[i]])
        {
           sum= sum+a[i]+1;
        }
        else
        {
            y=smallestDivisor(a[i]);
            x=a[i]/y;
            sum=sum+(a[i]+1)+x;
        }
     }
     printf("%d",sum);
     return 0;
}