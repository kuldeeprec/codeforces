#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int t;
int main()
{
    cin >> t;
    while (t--)
    {
        string s;
        int k, m = 0, i,z=0,f=0;
        cin >> s;
        k = s.length();

            for (i = 0; i < k ; i++)
            {
                if (s[i] == '0')
                {
                    z++;
                    
                }
                else
                {
                    f++;
                }
                
            
        }
        if (z>f)
        {
            m=f;
        }
        else
        {
            m=z;
        }
        
        
        if (m % 2 != 0)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NET" << endl;
        }
    }
    return 0;
}
