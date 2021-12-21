#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
    void maxi() {
        int r;
        cin>>r;
    ll temp = r;   
    int flag = 0;
        
    if (r < 0) {
        temp*= -1;
        flag = 1;
    }
    ll  reverse = 0;
    ll k=1<<31;
        
    while (temp > 0) {
        int mod = temp % 10;
        temp/= 10;
        if(  reverse*10 >k-1)
            cout<< 0<<endl;
             break;
        reverse = reverse*10 + mod;
    }

    if (flag) {
         cout<< -reverse<<endl;
    }
   else{
    cout<<reverse<<endl;}
        
    }
    
    int main()
    {
        maxi();
        return 0;
    }