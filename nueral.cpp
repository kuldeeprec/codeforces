#include <bits/stdc++.h>

using namespace std;

pair <int, int> arr [1000 + 1];

bool compare(const pair <int, int> & p1, const pair <int, int> & p2){

    return (p1.second < p2.second);
}

int main ()
{
   

     int a, b, ans=1, n;
     int last=0, limit=0;
        cin >> n;

        for (int j = 0; j < n ; j++) {

            cin >> a >> b;
            arr[j] = make_pair(a, b);
        }

        sort(arr, arr + n, compare);

        for (int j = 1; j < n; j++) {

            if (arr[j].first > arr[last].second) {

                last = j;
                ans++;
            }

            else if (arr[j].first > limit) {

                limit = arr[last].second;
                last = j;
                ans++;
            }
        }

        cout << ans ;
          return 0;
    }

  
