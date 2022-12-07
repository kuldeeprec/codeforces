#include "bits/stdc++.h"
using namespace std;
   vector<int> removeDuplicates(vector<int>s){
     
   int n = s.size();
   vector<int>str;
   if (n == 0){
  return str;
   }
     
    for(int i=0;i<n-1;i++){
      
        if(s[i]!=s[i+1]){
            str.push_back(s[i]);
        }
    }
 
   str.push_back(s[n-1]);
   return str;   
}
int main(){
	int n,k;
    cin>>n>>k;
    vector<int>m(n);
    vector<int>ans;
    for(int i=0;i<n; i++){
        cin>>m[i];
    }
    for(int i=0;i<k;i++){
       int x,y;
       cin>>x>>y;
       m[x-1]=y;
      vector<int>re=removeDuplicates(m);
      ans.push_back(re.size());
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
 
    
    
	return 0;
}
