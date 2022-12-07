 //kuldeep yadav rajkiya engineering college sonbhadra
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
// Google
ll tc_count = 1;
ll count_ones(vector<vector<ll>>arr, ll n,ll m, ll i, ll j, vector<vector<bool>>visited )
{
    ll count = 1;
    if (i > 0 && !visited[i - 1][j] && arr[i - 1][j] == 1) //up
    {
        visited[i - 1][j] = true;
        count += count_ones(arr, n,m, i - 1, j, visited);
    }
    if (j > 0 && !visited[i][j - 1] && arr[i][j - 1] == 1) //left
    {
        visited[i][j - 1] = true;
        count += count_ones(arr, n,m, i, j - 1, visited);
    }
    if (i < n - 1 && !visited[i + 1][j] && arr[i + 1][j] == 1) //down
    {
        visited[i + 1][j] = true;
        count += count_ones(arr, n,m, i + 1, j, visited);
    }
    if (j < m - 1 && !visited[i][j + 1] && arr[i][j + 1] == 1) //right
    {
        visited[i][j + 1] = true;
        count += count_ones(arr, n,m, i, j + 1, visited);
    }
    return count;
}

void solution(){
   ll n,m;
   cin>>n>>m;
   vector<vector<ll>>arr(n,vector<ll>(m));
    vector<vector<bool>>visited(n,vector<bool>(m,false));
   for(int i=0;i< n; i++){
    for(int j=0;j< m; j++){
        cin>>arr[i][j];
    }
   }
   vector<ll>ans;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                visited[i][j] = true;
                ll current_maximum = count_ones(arr, n,m, i, j, visited);
                ans.push_back(current_maximum);
            }
        }
    }
    ll result=0;
    sort(ans.begin(), ans.end());
    for(ll i=0; i < n; i++){
        if(i&1){ 
           result+=ans[i];
        }
    }
    cout<<result;
}
  


int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    // cin >> t;
    while (t--)
    {
      solution();
    }

    return 0;
}

 
 
