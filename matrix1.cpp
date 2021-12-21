#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int i, j, m, n, flag = 0;
    int count = 0;
    int arr[5][5];
    for (i = 0; i <5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    
    }

    for (i = 0; i <5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                m = i;
                n = j;
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            break;
        }
    }
     count=abs(m-2)+abs(n-2);
     cout << count;
     
    return 0;
    }
