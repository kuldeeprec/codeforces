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
#define ns()         cout << "Case #" << tc_count ++ << ": ";
// split fuction in c++ mode
const int N=1e5+5;

int n, ans=0;
int a[N], start[N], finish[N];
void maxi(){

    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        if(a[i]>a[i-1])
            finish[i]=finish[i-1]+1;
        else
            finish[i]=1;
        ans=max(ans, finish[i]);
    }
    for(int i=n;i>=1;i--)
    {
        if(a[i]<a[i+1])
            start[i]=start[i+1]+1;
        else
            start[i]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i+1]-a[i-1]>1)
        {
            ans=max(ans, 1 + finish[i-1] + start[i+1]);
        }
        ans=max(ans, 1 + finish[i-1]);
        ans=max(ans, 1 + start[i+1]);
    }
    cout<<ans;
   
} 
  


int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    // cin >> t;
    while (t--)
    {
       maxi();
    }

    return 0;
}

 
 
