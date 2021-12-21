#include <bits/stdc++.h>
using namespace std;
#define ll long long
void maxi()
{
    int n;
    cin >> n;
    int a[n+1];
    int bi=0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        bi^=a[i];
    }
    if(bi==0){
        cout << "YES\n";
    }
    else{
        int bo=0;
        for(int i=1;i<=n-2;i++){
            bo^=a[i];
            if(bo==bi){
                int be=0;
                for(int j=i+1;j<=n;j++){
                    be^=a[j];
                    if(be==bo){
                        cout << "YES\n";
                        return;
                    }
                }
            }
        }
        cout << "NO\n";
    }
}


int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        maxi();
    }
    return 0;
}