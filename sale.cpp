#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
    int count, i, j, n, m, temp, sum=0;
    cin >> n >> m;
    int number[n];
    for (i = 0; i < n; i++)
    {
        cin >> number[i];
    }

    for (i = n - 2; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            if (number[j] > number[j + 1])
            {
                temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < m; i++)
    {
        if (number[i] >= 0)
        {
            break;
        }
        else
        {

            sum += abs(number[i]);
        }}
        cout << sum << endl;
        return 0;
    }
