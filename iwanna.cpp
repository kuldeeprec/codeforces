#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int mod = 1e9 + 7;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void maxi(){
 ll n,x,y;
    cin >> n;
    set<ll>st;
    cin >> x;
    while(x--) {
        cin >> y;
        st.insert(y);
    }
    cin >> x;
    while(x--) {
        cin >> y;
        st.insert(y);
    }
    if(st.size() == n) {
        cout << "I become the guy.";
         return;
    }
    cout << "Oh, my keyboard!";
    }
    
     
       
  
  

 
    int main()
    {
        kuldeepyadav12
    
        // ll t;
        //  cin>>t;
        //  while(t--)
            maxi();
        
        return 0;
    }