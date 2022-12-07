 #include "bits/stdc++.h"
using namespace std;
  
int main(){
	int n;
    cin>>n;
    vector<int>state(n),A(n),B(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
     for(int i=0;i<n;i++){
        cin>>B[i];
    }
    for(int bit = 1<<30;bit > 0;bit>>=1){
        bool possible = true;

        for(int i = 0;i < n;i++){
            if(state[i]==0 && !(A[i]&bit))possible = false;
            else if(state[i]==1 && !(B[i]&bit))possible = false;
            else if(!(A[i]&bit) &&!(B[i]&bit))possible = false;
        }
        if(!possible)continue;
        for(int i = 0;i < n;++i){
            if (state[i] != -1)continue;
            if (!(A[i]&bit))state[i] = 1;
            else if (!(B[i]&bit))state[i] = 0;
        }
      
    }
    int ans;
    int count_ = 0;
    ans = (1 << 30) - 1;
    for(int i = 0;i < n;i++){
        if(state[i]==1){
            ans&=B[i];
            count_++;
        }
        else ans&=A[i];
    }
    cout<<ans<<" "<<count_;
    
	return 0;
}
 