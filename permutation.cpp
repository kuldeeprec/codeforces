                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
 const int N = 1e2 + 5;
int  n, a[N];

void maxi(){
  

        cin >> n;
        bool yes = true;
        for(int i = 1;i <= n;i++) {
            cin >> a[i];
            yes &= (a[i] == i);
        }
        if(yes) {
            cout << "0\n";
            return;
        }
        if(a[1] == n && a[n] == 1)
            cout << "3\n";
        else if(a[1] == 1 || a[n] == n)
            cout << "1\n";
        else
            cout << "2\n";
    }

 int main()
    {
        kuldeepyadav12
    
        ll t;
         cin>>t;
         while(t--)
            maxi();
        
        return 0;
    }
