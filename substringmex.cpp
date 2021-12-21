#include <bits/stdc++.h>
using namespace std;
#define ll long long
void maxi()
{      int n;
        cin >> n;
        int f[105] = {};
        for(int i = 0;i < n;i++) {
            int x;
            cin >> x;
            f[x]++;
        }
        int a = -1 , b = -1;
        for(int i = 0;i <= 100;i++) {
            if(f[i] <= 1 && a == -1)
                a = i;
            if(f[i] == 0 && b == -1)
                b = i;
            if(~a && ~b)
                break;
        }
        cout << a + b << '\n';
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