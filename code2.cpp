#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define per(i,a,b) for(int i=(a);i>=(b);i--)
#define op(x) ((x&1)?x+1:x-1)
#define odd(x) (x&1)
#define even(x) (!odd(x))
#define lc(x) (x<<1)
#define rc(x) (lc(x)|1)
#define lowbit(x) (x&-x)
#define mp(x,y) make_pair(x,y)
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
using namespace std;
const int MAXN=2e5+10,INF=1e9;
int n,a[MAXN],ans=INF;
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    rep(i,1,n)cin>>a[i];
    rep(i,1,n-1){
        int x=a[i],y=a[i+1];
        if(x<y)swap(x,y);
        int d=x-y;
        if(d*2>x){
            ans=min(ans,(x+1)/2);
        }else{
            ans=min(ans,d+((y-d)*2+2)/3);
        }
    }
    rep(i,1,n-2){
        ans=min(ans,(a[i]+a[i+2]+1)/2);
    }
    sort(a+1,a+1+n);
    ans=min(ans,(a[1]+1)/2+(a[2]+1)/2);
    cout<<ans<<endl;
    return 0;
}