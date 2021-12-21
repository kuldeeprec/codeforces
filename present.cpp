#include <bits/stdc++.h>
#define F first
#define S second
typedef long long ll;
 
using namespace std;
 
int main()
{
    ll n;
    cin >> n;
    pair<ll,ll>p[n];
    for(int i =0;i<n;i++) {
        cin >> p[i].F;
        p[i].S = i+1;
    }
    sort(p,p+n);
    for(int i =0;i<n;i++) {
        cout << p[i].S << ' ';
    }
    return 0;
}