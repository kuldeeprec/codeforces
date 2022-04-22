
#include <bits/stdc++.h>
using namespace std;
#define int long long




int32_t main()
{
   int n;
   int k;
   cin>>n>>k;
   vector<int>a(n+1);
   map<int, int>m;
   for(int i=0;i<n;i++){
       cin>>a[i];
       m[a[i]]++;
   }
   int count=0;
   int count3= m.size();
   for(auto i:m){
       if(i.second>=k){
           n-=i.second;
           count++;
       }
   }
   cout<<count3<<endl;
   count+=n/k+n%k;
   cout<<count<<endl;

    
	return 0;
}


