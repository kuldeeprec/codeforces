
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
bool game(int n,int x){
    if(n==0){
        return true;
    }
    if(n<0){
        return false;
    }
    
        return game(n-x,x)||game(n-2,x)||game(n-1,x);

}

void maxi(){
 
int m,n,x;
string s;
cin>>m;
while(m--){
    cin>>n>>x;
  bool ok =game(n,x);
  if(ok){
      s+='A';
  }
  else{
      s+='B';
  }
     
}
cout<<s<<endl;
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


