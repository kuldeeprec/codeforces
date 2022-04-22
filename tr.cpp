
#include <bits/stdc++.h>
using namespace std;
map<pair<int, int>, int> dp;
int maxGCD(int N,vector<int> A,int Q,vector<int> Queries){
    vector<int>b;
    for(int i=0;i<Q;i++){
        int ans=INT_MIN;
        int r=Queries[i];
    swap(A[r],A[(r+1)%N]);
    for(int j=0;j<N;j++){
        int maximum;
        if(dp[{A[j],A[(j+1)%N]}]==0){
           maximum  =__gcd(A[j],A[(j+1)%N]);
            dp[{A[j],A[(j+1)%N]}]=maximum;
        }
        else{
            maximum=dp[{A[j],A[(j+1)%N]}];
        }
      
      ans=max(ans,maximum);
    }
    b.push_back(ans);
   
}
int re=b[0];

for(int i=1;i<b.size();i++){
   re^=b[i];
}
return re;
}
void maxi(){
int n,m;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
} 
cin>>m;
int Q=m;
vector<int>b;
vector<int>c;
while(m--){
    int i;
    cin>>i;
    c.push_back(i);
}

cout<<maxGCD(n,a,Q,c);
}


int32_t main()
{
   int t;
   t=1;
//    cin>>t;
   while(t--)
{
    maxi();
}
    
	return 0;
}


