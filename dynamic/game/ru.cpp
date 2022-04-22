#include<bits/stdc++.h>
using namespace std;
    int minSwaps(string s) {
        
        int cz=0,oz=0,ez=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='G'){
                cz++;
                
                if(i%2!=0){
                    oz++;
                }else{
                    ez++;
                }
            }
        }
        
        if(n%2==0){
            if(cz!=n/2){
                return -1;
            }
            return min(cz-oz,cz-ez);
            
        }else{
            
            if(cz==n/2){
                return cz-oz;
            }else if(cz==n/2+1){
                return n/2+1-ez;
            }else{
                return -1;
            } 
        }
    
    }
    
    int main(){
        int t;
        t=1;
        while(t--){
         string s;
         cin>>s;
       cout<<minSwaps(s);
        }
    }