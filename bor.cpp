#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int t;

  cin >> t;
  while (t--)
  {
    int k = 0, h, i = 0, j, l = 0;
    int x, acount = 0, count = 0;
    cin >> x;
    h = x;
    while (x > 0)
    {
      x = x / 10;
      k++;
    }

    h = h % 10;
    i = 4 * h - 4 + k;

    while (i--)
    {
      count = count + 1;
      acount = acount + count;
      if (acount == 10)
      {
        j = acount;
        acount = 0;
        count = 0;
        l = l + j;
      }
    }
    l = l + acount;
    cout << l << endl;
  }
  return 0;
}
