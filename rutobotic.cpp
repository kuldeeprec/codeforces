Educational Codeforces Round 126 A B C
// A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int t;
  scanf("%d",&t);
  while(t--){
    int n;
    scanf("%d",&n);
    int v[2][25];
    for(int i=0;i<2;++i)
      for(int j=0;j<n;++j)
        scanf("%d",&v[i][j]);
    ll res=0;
    for(int i=1;i<n;++i){
      ll a=abs(v[0][i]-v[0][i-1]) + abs(v[1][i]-v[1][i-1]);
      ll b=abs(v[1][i]-v[0][i-1]) + abs(v[0][i]-v[1][i-1]);
      if(a>b)
        swap(v[0][i],v[1][i]);
      res+=min(a,b);
    }
    printf("%lld\n",res);
  }
  return 0;
}

// B 
#include <bits/stdc++.h>
const int base = 32768;
double begintime, endtime;

using namespace std;
inline void CALC_TIME()
{    
    endtime = clock();
    cout<<"\nexecution time : "<<(endtime-begintime+1)/1000<<" s";
}
int n, x, a[base+8];
vector<int>l[base+8];
queue<int>s;
int main()
{
    begintime = clock();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(a, -1, sizeof(a));
    for(int i = 0; i < base; i++)
    {
        l[(i+1)%base].push_back(i);
        l[(i*2)%base].push_back(i);
    }
    a[0] = 0;
    s.push(0);
    while(!s.empty())
    {
        x = s.front();
        s.pop();
        for(int tmp : l[x])
            if(a[tmp] == -1)
            {
                a[tmp] = a[x]+1;
                s.push(tmp);
            }
    }
    cin>>n;
    while(n--)
    {
        cin>>x;
        cout<<a[x]<<' ';
    }
    return 0;
}

// C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int t;
  scanf("%d",&t);
  while(t--){
    int n;
    scanf("%d",&n);
    int mx=0;
    vector<int> v(n);
    for(auto &x:v){
      scanf("%d",&x);
      mx=max(mx,x);
    }
    ll res=1e18;
    for(int h=mx;h<=mx+3;++h){
      ll two=0, one=0;
      for(auto &x:v){
        two += (h-x)/2;
        one += (h-x)%2;
      }
      ll all=one+two*2;
      ll days=all/3*2;
      if(all%3==1)
        ++days;
      if(all%3==2)
        days+=2;
      res=min(res,max(one*2-1, days));
    }
    printf("%lld\n",res);
  }
  return 0;
}