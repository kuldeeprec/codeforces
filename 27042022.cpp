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
#define rep(i, s, e) for (int i = s; i < e; i++)
#define ns()         cout << "Case #" << tc_count ++ << ": ";
// split fuction in c++ mode
vector<string>splitfun(string s,string delimiter){
vector<string>ans;
size_t pos = 0;
string token;
while ((pos = s.find(delimiter)) != string::npos) {
    token = s.substr(0, pos+1);
    ans.push_back(token);
    s.erase(0, pos + delimiter.length());
}
if(s.length()>0){
ans.push_back(s);
}
return ans;
}
// int n;
// int arr[200005];
// int brr[200005];
// int cnt[200005];
// vector<int> al[200005];
void maxi(){
//    cin>>n;
// 		rep(x,0,n) cin>>arr[x];
// 		rep(x,1,n+1) al[x].clear();
// 		rep(x,1,n+1) cnt[x]=0;
		
// 		rep(x,0,n) cnt[arr[x]]++;
		
// 		int mx=0;
// 		rep(x,1,n+1) mx=max(mx,cnt[x]);
		
// 		rep(x,0,n) brr[x]=arr[x];
// 		sort(brr,brr+n);
		
// 		rep(x,0,n) al[brr[x]].push_back(brr[(x+mx)%n]);
		
// 		rep(x,0,n){
// 			cout<<al[arr[x]].back()<<" \n"[x==n-1];
// 			al[arr[x]].pop_back();
// 		}
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
