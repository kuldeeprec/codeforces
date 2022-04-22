
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
const double pi=acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

struct contributor
{
  string name;
  int types;
  vector<pair<string,int> > v;
};
struct project{
  string name;
  int duration;
  int score;
  int days;
  int no;
  vector<pair<string,int> > v;
  vector<string> ans;
};


void ans(int c,int p,contributor arr[],project a[]){
    cout<<p<<endl;
    set<string>s;
    REP(i,p){
      cout<<a[i].name<<endl;
      int k=  a[i].no;
      REP(j,k){
        REP(l,c){
          int m=arr[i].types;
          REP(n,m){
        if(a[i].v[j].first==arr[l].v[n].first && a[i].v[j].second-1 <=arr[l].v[n].second){
          s.insert(arr[l].name);
          }

        }
      }
    }
    vector<string> v(s.begin(), s.end());
    REP(i,v.size()){
      cout<<v[i]<<" ";
    }
    cout<<endl;

}
}

void Solve()
{
  int c,p;
  cin>>c>>p;
  struct contributor arr[c]; 
  REP(i,c){
    cin>>arr[i].name;
    int n;
    cin>>n;
    arr[i].types=n;
    REP(j,n){
      string s;
      int val;
      cin>>s>>val;
      arr[i].v.push_back({s,val});
    }
  }
  struct project a[p];
  REP(i,c){
    cin>>a[i].name;
    int n;
    cin>>n;
    a[i].duration=n;
    int sc;
    cin>>sc;
    a[i].score=sc;
    int d;
    cin>>d;
    a[i].days=d;
    cin>>n;
    a[i].no=n;
    REP(j,n){
      string s;
      int val;
      cin>>s>>val;
      a[i].v.push_back({s,val});
    }
  }
  ans(c,p,arr,a);
  }
int main()
{

//   freopen("input.txt","r",stdin);
//   freopen("output.txt","w",stdout);
  Solve();
  return 0;
}