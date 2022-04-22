#include<bits/stdc++.h>
using namespace std;


class Horse {
 public:
    
     int n;
     string s;
};
// bool low ( Horse r, Horse s){
//     return r.n<s.n;
// }

int main(){
   int m;
   cin>>m;
   Horse a[m];
   for(int i = 0; i < m; i++){
        cin>>a[i].n;
       cin>>a[i].s;
      
   }
 sort(a,a+m);
 for(int i = 0; i < m; i++){
        cout<<a[i].n;
       cout<<a[i].s<<" ";
      
   }
    return 0;
}