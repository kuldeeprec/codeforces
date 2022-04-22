// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
   int count=0;
    //Function to find the largest number after k swaps.
    void helper(string str,string&ans,int k,int index){
        if(k==0){
            return ;
        }
        char c=str[index];
        for(int i=index+1;i<str.length();++i){
            if(str[i]>c){
                c=str[i];
            }
        }
        if(c!=str[index]){
            k--;
        }
        for(int i=0;i<str.length();i++){
            if(str[i]==c){
                swap(str[index],str[i]);
                 count++;
                if(ans<str){
                    ans=str;
                }
                helper(str,ans,k,index+1);
                swap(str[index],str[i]);
            }
        }
    }
    string findMaximumNum(string str, int k)
    {
       // code here.
       string ans=str;
       helper(str,ans,k,0);
       return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t, k;
    string str;
     t=1;
    // cin >> t;
    while (t--)
    {
        cin >> k >> str;
        Solution ob;
        cout<< ob.findMaximumNum(str, k) << endl;
        cout<<ob.count<<endl;
    }
    return 0;
}
  // } Driver Code Ends