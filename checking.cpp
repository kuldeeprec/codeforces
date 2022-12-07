
#include<bits/stdc++.h>
#define int long long
using namespace std;
int c[2000002],n,m;
bool check(int x) {
    int s=0,ns=0;
    for(int i=1;i<=n;++i) {
        s+=min(x,c[i]);
        if(c[i]<x) ns+=(x-c[i])/2;
    }
    if(ns+s>=m)    return true;
    else return false;
}
void solve() {
    cin >> n >> m;
    for(int i=1;i<=m;++i)
        c[i]=0;
    for(int i=1;i<=m;++i) {
        int x;
        cin >> x;
        c[x]++;
    }
    int l=0,r=200000;
    while(abs(l-r)<=10) {
        int m=(l+r)/2;
        if(check(m)) r=m+1;
        else l=m-1;
    }
    for(int i=l-5;i<=r+5;++i)
        if(!check(i)&&check(i+1)) {
            cout << i+1 << endl;
            return;
        }
}
signed main() {
    int T;
    cin >> T;
    while(T--)
        solve();
}