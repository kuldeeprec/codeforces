#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*
bool issub(String str1, String str2)
    {
 
        ll t = 0;
        ll len = str1.length();
        ll i;
 
        
        for (i = 0; i < len; i++) {
            if (t == str2.length())
                break;
            if (str1[i] == str2[t])
                t++;
            else
                t = 0;
        }
 
        return t < str2.length() ? false : true;
    }*/
bool issub(string str1, string str2)
{
    ll j = 0;
    for (ll i = 0; i < str2.length(); i++)
    {
        if (str1[j] == str2[i])
        {
            j++;
        }
        if (j == str1.length())
        {
            return true;
        }
    }
    return false;
}

void maxi()
{
    string s;
    cin >> s;
    ll flag = 0;
    ll n = s.length();
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        queue<string> k;
        k.push("1");
        while (true)
        {
            string s1 = k.front();
            k.pop();
            if (issub(s1, s) == false)
            {
                cout << s1 << endl;
                break;
            }
            string s2 = s1;
            k.push(s1.append("0"));
            k.push(s2.append("1"));
        }
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