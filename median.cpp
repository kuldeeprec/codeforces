#include <bits/stdc++.h>
using namespace std;
  long countPairs(vector<int>arr, int n)
{
    int count_2 = 0, count_others = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 2)
            count_2++;
        else if (arr[i] > 2)
            count_others++;
    }
    long ans
        = 1L * count_2 * count_others
          + (1L * count_others * (count_others - 1)) / 2;
    return ans;
}
int main() {
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i= 0; i <n; i++){
    cin>>arr[i];
  }
  long ans=countPairs(arr,n);
  cout<< (n*(n-1))/2-ans;
 
    
  return 0;
}