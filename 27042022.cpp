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
struct cmp {
	bool operator() (const pair<int, int> &a, const pair<int, int> &b) const {
		int lena = a.second - a.first + 1;
		int lenb = b.second - b.first + 1;
		if (lena == lenb) return a.first < b.first;
		return lena > lenb;
	}
};
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

int n;
		cin >> n;
		set<pair<int, int>, cmp> st;
		st.insert({0, n - 1});
		vector<int> a(n);
		for (int i = 1; i <= n; ++i) {
			pair<int, int> cur = *st.begin();
			st.erase(st.begin());
			int id = (cur.first + cur.second) / 2;
			a[id] = i;
			if (cur.first < id) st.insert({cur.first, id - 1});
			if (id < cur.second) st.insert({id + 1, cur.second});
		}
for(auto i:a){
    cout<<i<<" ";
}
cout<<endl;

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
