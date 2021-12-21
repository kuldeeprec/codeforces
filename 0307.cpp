//kuldeep yadav,Rajkiya engineering college sonbhadra//
#include <bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define pb push_back
#define pf push_front
#define Pb pop_back
#define mod (ll)1000000007
const int N=2e5+5;


void maxi(){
ll n;
cin>>n;
  vector<int>v(2*n);
  int c1=0;
  int c2=0;
  for(int i=0;i<2*n;i++){
    cin>>v[i];
    if(v[i]&1) c1++;
    else c2++;
  }
  if(c1==c2) cout<<"Yes"<<"\n";
  else cout<<"No\n";
  return;

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
