#include <bits/stdc++.h>
using namespace std;
const int h = 1e5 + 5;
const int mod = 1e9 + 7;
const int N=2010;
int n, a[N], p[N];
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi(){
  

	cin>>n;
	n*=2;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		p[i]=i+1;
	}
	int pre =0;
	int ans=1+n;
	for (int i=0; i<n; i++){
		bool ok=1;
		int j=0;
		for (; j<n; j++) if (a[j]!=p[j]) break;
		if (j==n){
			ans=min(min(ans,i),n-i);
		}
		if (pre)
			for (int k=0; k<n/2; k++) swap(p[k*2],p[k*2+1]); 
		else
			for (int k=0; k<n/2; k++) swap(p[k],p[k+n/2]);
		pre=1-pre;
	}
	if(ans<=n){
         cout<<ans<<endl;}
	else {
        cout<<-1<<endl;}
  
  
 
}
    
     
       
  
  

 
    int main()
    {
        kuldeepyadav12
    
        // ll t;
        //  cin>>t;
        //  while(t--)
            maxi();
        
        return 0;
    }