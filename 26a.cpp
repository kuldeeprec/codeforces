                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define pf push_front
#define Pb pop_back
const int N = 1e5 + 5;
int   n, a[N];
void maxi(){
    
    //  int flag=0;
    //   ll n,sum=0;
    //   ll avj=0-0;
    //   cin>>n;
    //   ll v[n];
    
    //   ll count=0;
    //   for (ll i = 0; i < n; i++)
    //   {
    //       cin>>v[i];
          
        
    //   }
    //  sort(v,v+n);
    //   for (ll i = 1; i < n; i++)
    //   {
    //       if (v[i]>v[0])
    //       {
    //         count++;
    //       }
          
          
        
    //   }
    //   cout<<count<<endl;
         cin >> n;
        int ans = 0, cnt = 0, z = 0;
        vector<int> v, v1;
        for(int i = 0;i < n;i++) {
            cin >> a[i];
            if(a[i] < 0)
                v1.push_back(a[i]), ans++;
            else if(a[i] > 0)
                v.push_back(a[i]);
            else
                z++;
        }
        sort(v.begin(), v.end());
        sort(v1.rbegin(), v1.rend());
        int ans1 = ans + z, ans2 = ans + (z > 0);
        if(v.size()) {
            if(v1.size() >= 2) {
                int mn = 2e9 + 1;
                for(int i = 1;i < v1.size();i++)
                    mn = min(mn, abs(v1[i] - v1[i - 1]));
                if(v[0] <= mn)
                    ans2++;
            } else if(v1.size()) {
                if(z && abs(v1[0]) >= v[0])
                    ans2++;
                else if(!z)
                    ans2++;
            } else
                ans2++;
        }
        cout << max(ans1, ans2) << '\n';
    }
 
 

 


int main(){
    kuldeepyadav12
    ll t;
    cin>>t;
    while(t--){
    maxi();
    }
    return 0;
}