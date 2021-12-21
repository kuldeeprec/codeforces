#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
const int NM_MAX = 100;
 
int t;
 
int n, m;
 
int b[NM_MAX + 2][NM_MAX + 2];
 
int l[NM_MAX + 2], r[NM_MAX + 2];
 
int sol[NM_MAX + 2][NM_MAX + 2];
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vector <int> aux;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
                cin >> b[i][j];
            sort(b[i] + 1, b[i] + m + 1);
            l[i] = 1;
            r[i] = m;
        }
        for(int k = 1; k <= m; k++)
        {
            int p = 1;
            for(int i = 1; i <= n; i++)
                if(b[i][l[i]] < b[p][l[p]])
                    p = i;
            for(int i = 1; i <= n; i++)
                if(i == p)
                    sol[i][k] = b[i][l[i]++];
                else
                    sol[i][k] = b[i][r[i]--];
        }
        for(int i = 1; i <= n; i++, cout << "\n")
            for(int k = 1; k <= m; k++)
                cout << sol[i][k] << " ";
    }
    return 0;
}