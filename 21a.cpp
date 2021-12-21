                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define pf push_front
#define Pb pop_back
void maxi(){
    // ll n;
    // cin>>n;
    // ll ans= (n-1)/2+1;
    // cout<<ans<<endl;
    // ll n;
    //  cin>>n;
    //  ll a[2*n];
    //  for (ll i = 0; i < 2*n; i++)
    //  {
    //      cin>>a[i];
    //  }
     
    // vector<ll>output;
    // unordered_map<ll,bool>seen;
    // for (ll i = 0; i < 2*n; i++)
    //  {
    //      if(seen.count(a[i])<=0){
    //          seen[a[i]]=true;
    //          output.push_back(a[i]);
    //      }
    //  }
    //  for (ll i = 0; i < output.size(); i++)
    //  {
    //      cout<<output[i]<<" ";
    //  }
    //  cout<<endl;
    //  ll n;
    //  cin>>n;
    //  ll a[n][n];
    //  for (ll i = 0; i < n; i++)
    //  {
    //      for (ll j = 0; j < n; j++)
    //  {
    //       if(i==0||j==0){
    //           a[i][j]=1;
    //       }
    //       else
    //       {
    //           a[i][j]=a[i-1][j]+a[i][j-1];
    //       }
          
    //  }
    //  }
    //  cout<<a[n-1][n-1]<<endl;
    //  unordered_map<char,ll>num;
    //   cin>>num['1']>>num['2']>>num['3']>>num['4'];
    //   string s;
    //   cin>>s;
    //   ll count=0;
    //  for (ll i = 0; i < s.length(); i++)
    //  {
    //      count+=num[s[i]];
    //  }
     
    //   cout<<count<<endl;
      ll a,b;
      cin>>a>>b;
      if(a==b){
          cout<<0<<endl;
      }
      else
      {
          if(b>a){
          if(a&1&& !(b&1)|| !(a&1)&& (b&1)){
           cout<<1<<endl;
          }
          else{
              cout<<2<<endl;
          }
          

          }
          if(b<a){
          if(a&1&& (b&1)|| !(a&1)&& !(b&1)){
           cout<<1<<endl;
          }
          else{
              cout<<2<<endl;
          }
          

          }
      }
      

    }
		
	
   

 

    

int main(){
    ll t;
    cin>>t;
    while(t--){
    maxi();
    }
    
    return 0;
}
