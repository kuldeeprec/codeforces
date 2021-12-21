#include<bits/stdc++.h>
#define kuldeep ios_base::sync_with_stdio(false);cin.tie(0);
#define ll long long 
using namespace std;
const ll N = 1e6+5;
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
 
}

int main()
{
    kuldeep;
    maxi();
    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        ll m=x;
        x=x/2;
        m=m/x;

        if(!(prime[m]))
            cout <<"Alice\n";
        else
            cout <<"Bob\n";
    }
    return 0;
}
