
#include<bits/stdc++.h>
using namespace std;
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define REP(i, j) FOR(i, 0, j, 1)

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

  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  Solve();
  return 0;
}