#include <bits/stdc++.h>
using namespace std;
#define ll long long

void maxi()
{
    ll n, k, i, count = 1, flag = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    if (n==1)
    {
        if (s[0]=='*')
        {
            count=1;
            if (count==k)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
            
            
        }
        else
        {
            flag=0;
        }
        
        
    }
    else
    {
        
    
    
    
    for (i = 0; i < n - 1; i++)
    {
        if (k == 1)
        {
            if (s[i] == '*' || s[i + 1] == '*')
            {
                flag = 1;
                break;
            }
        }
        else
        {
            if (s[i] == '*' && s[i + 1] == '*')
            {

                ++count;
                if (count >= k)
                {
                    flag = 1;
                    break;
                }

            }
            else
            {
                count = 1;
                flag=0;
            }
        }
    }}
    if (flag==1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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