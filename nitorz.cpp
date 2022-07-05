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
const int INF = 2e9 + 1;

void maxi(){
//   ll n,z;
//   cin>>n>>z;
//   vector<int>v(n);
//   for(int i=0;i<n;i++){
//     cin>>v[i];
//   }
//   sort(v.begin(), v.end());
//   int maxivi=(v[n-1]|z);
//   int curvi;
//   for(int i=n-1;i>=0;i--){
//        curvi=(v[i])|z;
//        if(curvi>maxivi){
//         maxivi=curvi;
//        }
//   }
//   cout<<maxivi<<endl;
// second 
ll n;
cin>>n;
vector<ll>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int count=0;
bool ok=false;
for(int i = 0; i < n; i++){
    if(v[i]!=0&&ok==false){
        ok=true;
        count++;
    }
    else if (v[i]==0&&ok){
        ok=false;
    }
}
if(count>2){
    count=2;
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

 
 
