                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define endl '\n'
#define ll long long
#define pi pair<int, int>
#define f first
#define s second
 
const int mxn = 300000;
int n, m;
int a[mxn], b[mxn], f[mxn], it[mxn];
vector<int> v[2];
 
void maxi(){
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) cin >> a[i], f[it[i] = i] = -1;
	for(int i = 0; i < n; i++){
		char c;
		cin >> c;
		b[i] = c == 'R';
	}
	
	sort(it, it + n, [&](int x, int y){ return a[x] < a[y];});
	
	v[0].clear(), v[1].clear();
	for(int i = 0; i < n; i++){
		int x = it[i], y = a[x] & 1;
		if(b[x]){
			v[y].push_back(x);
		}else if(!v[y].empty()){
			f[x] = f[v[y].back()] = (a[x] - a[v[y].back()]) / 2;
			v[y].pop_back();
		}else{
			a[x] *= -1, b[x] = 1;
			v[y].push_back(x);
		}
	}
	
	for(int i = 0; i < 2; i++)
	while(v[i].size() >= 2){
		int x = v[i].back(), y = v[i].end()[-2];
		for(int j = 0; j < 2; j++) v[i].pop_back();
		f[x] = f[y] = (2 * m - a[x] - a[y]) / 2;
	}
	
	cout << f[0];
	for(int i = 1; i < n; i++) cout << " " << f[i];
	cout << endl;
}
 
int main(){
	kuldeepyadav12
	
	ll t;
         cin>>t;
         while(t--)
            maxi();
	return 0;
}
    
