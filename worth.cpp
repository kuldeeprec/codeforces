#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k,cnt = 0;

        cin >> n >> m >> k;
        double mat[n + 1][m + 1];

        for (ll i = 0; i <= n; i++)
        {

            for (ll j = 0; j <= m; j++)
            {
                if (i == 0 || j == 0)
                {
                    mat[i][j] = 0;
                }
                else
                {
                    cin >> mat[i][j];
                    if(mat[i][j]>=k){
                        cnt++;
                    }
                }
            }
        }
        for (ll i = 0; i <= n; i++)
        {
            ll sum = 0;
            for (ll j = 0; j <= m; j++)
            {

                sum += mat[i][j];
                mat[i][j] = sum;
            }
        }
        for (ll i = 0; i <= m; i++)
        {
            ll sum = 0;
            for (ll j = 0; j <= n; j++)
            {

                sum += mat[j][i];
                mat[j][i] = sum;
            }
        }

        ll  mini;
        ll squence = 2;
        mini = n+1;
        while (mini--)
        {
            while (squence <= mini)
            {
                ll i, j;
                i = squence;
                j = m;
                while (i <= n)
                {
                    ll x, y, z;
                    x = i - squence + 1;
                    y = j - squence + 1;
                    z = mat[i][j] - mat[x - 1][j] - mat[i][y - 1] + mat[x - 1][y - 1];
                    if ((z / (squence * squence)) < k)
                    {
                        i += 1;
                    }
                    else
                    {
                        ll start = squence;
                        ll end = m+1;
                        ll ans;
                        while (start <= end)
                        {
                            ll mid = (start + end) / 2;
                            x = i - squence + 1;
                            y = mid - squence + 1;
                            z = mat[i][mid] - mat[x - 1][mid] - mat[i][y - 1] + mat[x - 1][y - 1];
                            if ((z / (squence * squence)) < k)
                            {
                                start = mid + 1;
                            }
                            else
                            {
                                ans = mid;
                                end = mid - 1;
                            }
                        }
                        cnt += m+1 - ans + 1;
                        i++;
                    }
                }
                squence++;
            }
        }
        cout<< cnt<<endl;
    }

    return 0;
}