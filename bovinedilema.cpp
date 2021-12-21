#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int countDistinct(int arr[], int n)
{
    int res = 1;
    int i, j;

    // Pick all elements one by one
    for (i = 1; i < n; i++)
    {

        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;

        // If not printed earlier, then print it
        if (i == j)
            res++;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j, k = 0;
        cin >> n;
        int a[n];
        int u = (n * (n - 1)) / 2;
        int arr[u];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                arr[k] = a[j] - a[i];
                k++;
            }
        }

        int l = sizeof(arr) / sizeof(arr[0]);
        if (l >= 1)
        {

            cout << countDistinct(arr, l) << endl;
        }

        else
        {
            cout << "0" << endl;
        }
        
    }
    return 0;
}
