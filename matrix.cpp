#include <iostream>
using namespace std;
int main()
{
    int i, j, m, n, flag = 0;
    int count = 0;
    int arr[5][5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <5; j++)
        {
            cin >> arr[i][j];
        }
        cout << '\n';
    }

    for (i = 0; i < 5; i++)
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
    if (m < 3)
    {
        int temp;
        for (i = m; i < 4; i++)
        {
            for (i = n; i < 4; j++)
            {
                temp = arr[i + 1][j];
                arr[i + 1][j] = arr[i][j];
                arr[i][j] = temp;
            }
             count++;
        }}

        if (n < 3)
        {
            int temp;
            for (i = m; i < 4; i++)
            {
                for (j = n; i < 4; j++)
                {
                    temp = arr[i][j + 1];
                    arr[i][j + 1] = arr[i][j];
                    arr[i][j] = temp;
                }
                count++;
            }}
            if (m > 3)
            {
                int temp;
                for (i = m; i > 2; i--)
                {
                    for (j = n; i > 2; j--)
                    {
                        temp = arr[i - 1][j];
                        arr[i - 1][j] = arr[i][j];
                        arr[i][j] = temp;
                    }
                    count++;
                }}
                if (n > 3)
                {
                    int temp;
                    for (i = m; i > 2; i--)
                    {
                        for (j = n; i > 2; j--)
                        {
                            temp = arr[i][j - 1];
                            arr[i][j - 1] = arr[i][j];
                            arr[i][j] = temp;
                        }
                        count++;
                    }
                }
                cout << count;
                return 0;
            }
