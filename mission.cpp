#include <bits/stdc++.h>
using namespace std;

void allPossibleSubset(string arr[], int n, int r)
{
    int count = pow(2, n);
    
    int x=1;
    for (int i = 0; i < count; i++) {
        
        for (int j = 0; j < n; j++) {
           
            if ((i & (1 << j)) != 0)
            {
                ++x;
                if(x == r)
                {
                    cout<<arr[j];
                    break;
                }
            }
           
                
        }
        if(x==r)
            {
                break;
            }
    }
}

int main()
{
    int n,r;
    
   
    cin >> n>>r;

    string arr[n];
   
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    if(r==1)
    {
        cout<<"{}";
    }

    allPossibleSubset(arr, n, r);

    return 0;
}