#include<iostream>
using namespace std;

#define F(i, m, n) for(int(i) = m; i < n; ++i)
#define FR(i, k, n) for(int(i) = n-1; i >= k; --i)
#define f(i, n)  F(i, 0, n)
#define fr(i, n) FR(i, 0, n)
#define p1(x) cout << x <<"\n";
#define p2(x,y) cout << x << " " << y << "\n";
#define p3(x,y,z) cout << x << " " << y << " " << z << "\n";
#define o1(x) cin >> x;
#define o2(x,y) cin >> x >> y;
#define o3(x,y,z) cin >> x >> y >> z;
#define pi 3.1415926535897932384626
int main()
{
   // ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
 
    int n;
    cin >> n;
    int arr[n];
    f(i,n) cin >> arr[i];
    int ans = 0;
    f(i,n)
    {
       int c = 0;
       int x = arr[i];
       while(x!=-1)
       {
           x = arr[x-1];
           c++;
       }
       ans = max(ans,c);
    }
    cout << ans+1 << endl;
    return 0;
}
