// rajkiya engineering college sonbhadra
#include<bits/stdc++.h>
using namespace std;

void maxi(){
  int n;
  cin>>n;
  vector<int>v;
  vector<int>ans;
  map<int,int>mp;
  for(int i=0;i<n;i++){
     int res ;
     cin>>res;
     for(int j=0;j<res;j++){
         int k;
         cin>>k;
         mp[k]++;
     }
     if(res>=0){
      int ansr=res;
      if(mp.size()==4){
       ansr= 1+ansr;
     }
     else if(mp.size()==5){
     ansr= 2+ansr;
     }
     else if(mp.size()>=6){
      ansr= 4+ansr;
     }
     ans.push_back(ansr);
    mp.clear();
  }
 }
    int maxr=0; 
    int result=0;
 for(int i=0;i < n; i++){
     if(maxr<ans[i]){
        maxr=ans[i];
        result=i+1;
     }
 }
 if(result==1){
     cout<<"Radha";
 }
 else{
  cout<<result;
 }

  }
  
int main()
{
    
       maxi();
    

    return 0;
}

