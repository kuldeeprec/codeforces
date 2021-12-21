//kuldeep yadav,Rajkiya engineering college sonbhadra//

#include <bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define pb push_back
#define pf push_front
#define Pb pop_back
void maxi()
{

    //    ll n,r=0,count=0;
    //    cin>>n;
    //    string s;
    //    cin>>s;
    //    for (ll i = 0; i < n; i++)
    //    {
    //        if(s[i]=='x'){
    //            r++;
    //        }
    //        else{
    //            if (r>=3)
    //            {
    //                count+=r-2;
    //                r=0;
    //            }
    //            r=0;
    //        }
    //    }
    //    if (r>=3)
    //            {
    //             count+=r-2;
    //             r=0;
    //            }
    //    cout<<count<<endl;
    //  ll x,y,z,r;
    //  cin>>x>>y>>z>>r;
    //  ll min1,min2;
    //  min1=min(x,min(r,z));
    //  min2=min(x-min1,y);
    //  cout<<256*min1+min2*32<<endl;
    // ll n,x;
    // cin>>n;
    // double total=0;

    // for (ll i = 0; i <n; i++)
    // {
    //     cin>>x;
    //     total+=x;
    // }
    // cout<<(ll)ceil(total/n)<<endl;

    //     }

    //   ll  x;
    //         cin >> x;
    //         if(x <= 30)
    //             cout << "NO\n";
    //         else if(x - 30 != 6 && x - 30 != 10 && x - 30 != 14)
    //             cout << "YES\n" << "6 10 14 " << x - 30 << '\n';
    //         else
    //             cout << "YES\n" << "6 10 15 " << x - 31 << '\n';
    // ll p, x = 0, y = 0;
    // cin >> p;
    // string s;
    // cin >> s;
    // for (ll i = 0; i < p; i++)
    // {
    //     if (s[i] == 'z')
    //     {
    //         x++;
    //     }

    //     else if (s[i] == 'n')
    //     {
    //         y++;
    //     }}
    //     while ((x+y)!=0)
    //     {
    //       if(y>0){
    //           cout<<"1"<<" ";
    //           y--;
    //       }
    //       else
    //       {
    //           if (x>0)
    //           {
    //               cout<<"0"<<" ";
    //               x--;
    //           }
              
    //       }
          
    //     }
        
    // cout<<endl;
    // ll n,count=1,max1=1;
    // cin>>n;
    // ll a[n];
    // for (ll i = 0; i < n; i++)
    // {
    //    cin>>a[i];
    // }
    // sort(a,a+n);
    //  for (ll i = 0; i < n-1; i++)
    // {
    //    if (a[i]==a[i+1])
    //    {
    //        count++;

    //    }
    //    else
    //    {
    //        max1=max(count,max1);
    //        count=1;
    //    }
       
       
    // }
    //  max1=max(count,max1);
    // cout<<max1<<endl;
     string s;
        cin >> s;
        cout << s.size() << '\n';
    
}

int main()
{
    kuldeepyadav12
        ll t;
    cin >> t;
    while (t--)
    {
       maxi();
    }
 
    return 0;
}
