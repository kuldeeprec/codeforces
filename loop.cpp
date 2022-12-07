// int n;
//      cin>>n;
//      int input[n];
//      for(int i=0; i<n; i++){
//         cin>>input[i];
//      }
//        int output[n];
//         output[0]=1;
//        for(int i=1;i<n;i++){
//            output[i]=1;
//            for(int j=i-1;j>=0;j--){
//                if(input[j]>=input[i]){
//                    continue;
//                }
//                int possibleans=output[j]+1;
//                if(possibleans>output[i]){
//                    output[i]=possibleans;
//                }
//            }
//        }
//        cout<<*max_element(output,output+n);
//         return 0;
// rajkiya engineering college sonbhadra

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }
    int j=2;
    int r=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(mp[arr[i]]>0){
           r+=mp[arr[i]];
           if(j*k>(j-1)*k+r){
             ans=(j-1)*k+r;
           }
           else{
            j++;
           }   
        }
       mp[arr[i]]++;
    }
    

     
      return 0;
    }
   


