
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
vector<int>v;
void Proper(vector<int>arr, int l, int r, int sum = 0)
{
    if (l > r) {
        v.push_back(sum);
        return;
    }
    Proper(arr, l + 1, r, sum + arr[l]);
    Proper(arr, l + 1, r, sum);
}
void maxi(){
    v.clear();
 int n,x;
 cin>>n;
 vector<int>a(n);
 for(int i = 0; i < n; i++){
     cin>>a[i];
}
cin>>x;
Proper(a,0,n-1);
int count = 0;
for(auto i:v){
    if(i<=x){
        (count++)%mod;
    }
}
cout<<count-1<<endl;
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


