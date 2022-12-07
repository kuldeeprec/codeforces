#include "bits/stdc++.h"
using namespace std;
const int N=1e5+5;
vector<int> v[N];
bool poss = 1;
int p[N];
int h[N];
int tot[N];
int b[N];
int g[N];

void dfs(int z,int par){
	int badchild = 0;
	tot[z] = p[z];
	for(int x:v[z]){
		if(x==par)continue;
		dfs(x,z);
		tot[z] += tot[x];
		badchild += b[x];
	}
	if(h[z] > tot[z]) poss = 0;
	if(h[z] < -tot[z]) poss = 0;
	if((tot[z] + h[z]) % 2) poss = 0;
	g[z] = (tot[z] + h[z]) / 2;
	b[z] = (tot[z] - h[z]) / 2;
	if(b[z] > p[z] + badchild){
		poss = 0;
	}
	
}

void maxi(){
	int n,m;
	cin>>n>>m;
	poss = 1;
	for(int i=1;i<=n;i++){
		v[i].clear();
		cin>>p[i];
	}
	for(int i=1;i<=n;i++){
		cin>>h[i];
	}
	for(int i=1;i<n;i++){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	
	dfs(1,0);
	if(poss){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
}
int main(){
	int t;
    cin>>t;
	while(t--){
       maxi();
    }
    
	return 0;
}
