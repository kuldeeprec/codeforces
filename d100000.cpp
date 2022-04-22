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
#define ns()               cout << "Case #" << tc_count ++ << ": ";
const long long mex=1e5+1;
void maxi()
{
    ns();
     int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int count = 0;
    int ans = 1;
    for(int i=0;i<n;i++)
    {
        if(ans<=v[i])
        {
            count++;
            ans++;
        }
        else
        {
            continue;
        }
    }
    cout<<count<<endl;
     
    

}
int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    cin >> t;
   
    while (t--)
    {
       maxi();
    }

    return 0;
}
