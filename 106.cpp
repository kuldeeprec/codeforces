//kuldeep yadav,Rajkiya engineering college sonbhadra//

#include <bits/stdc++.h>
using namespace std;
#define kuldeepyadav12  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define pf push_front
#define Pb pop_back
bool com(const ll &a, const ll &b)
{
    return b > a;
}
void maxi()
{
   
//    int n;
//     cin >> n;
// int ax,bx,ay,by,cx,cy;
// cin>>ax>>ay>>bx>>by>>cx>>cy;
// if((ax>bx && ax>cx && ay>by && ay>cy) || (ax<bx && ax<cx && ay<by && ay<cy)|| (ax>bx && ax>cx && ay<by && ay<cy)|| (ax<bx && ax<cx && ay>by && ay>cy))
//        cout<<"Yes"<<endl;
// else 
//     cout<<"No"<<endl;
ll n,k,x,prev=INT64_MAX;
cin>>n>>k;
map<ll,ll>a;
for (ll i = 0; i < k; i++)
{    cin>>x;
    a[x]=i+1;
}
for (auto &i:a)
{
    if(n%(i.first)<prev){
        x=i.first;
        prev=n%(i.first);
    }
}

// map<ll,ll>::iterator itr;
// itr=a.begin();
cout <<a[x]<<" "<<n/x<<endl;




 
 

}
   

int main()
{
    kuldeepyadav12
    //     ll t;
    // cin >> t;
    // while (t--)
    // {
      
    // }
maxi();
    return 0;
}
