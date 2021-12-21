#include <bits/stdc++.h>
using namespace std;
const int h = 1e5 + 5;
const int mod = 1e9 + 7;
const int N=2010;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi(){
//  ll n;
//  cin>>n;
//  ll a[n];
//  for (ll i = 0; i < n; i++)
//  {
//     cin>>a[i];

//  }
//  sort(a,a+n);
 
//  if(a[0]==0&&a[n-1]==0){
//      cout<<"EASY"<<endl;
//  }
//  else{
//      cout<<"HARD"<<endl;
//  }
//   string s,k;
//   s=" that I hate";
//   k=" that I love";
//   cout<<"I hate";
//   for (ll i = 2; i <=n; i++)
//   {  if(i%2==1){
//       cout<<s;}
//       else
//       {
//        cout<<k;   
//       }
      
//   }
//   cout<<" it";
//   string s1,s2,s3;
//   cin>>s1>>s2;
//   for (ll i = 0; i < s1.length(); i++)
//   {
//       if(s1[i]!=s2[i]){
//           s3.push_back('1');
//       }
//       else
//       {
//           s3.push_back('0');
//       }
      
//   }
//   cout<<s3;  
// ll n;
// cin>>n;
// double a[n],k;
// double sum=0;
// for (ll i = 0; i < n; i++)
// {
//     cin>>a[i];
//     sum+=a[i];

// }
// k=sum/100.0;
// k=k/n;
// cout<<k*100<<endl;
ll n,k,p;
cin>>n;
cin>>p;
ll a[p];
vector<ll>vec;
for (ll i = 0; i < p; i++)
{
    cin>>a[i];
    vec.push_back(a[i]);

}
cin>>k;
ll b[k];
for (ll i = 0; i < k; i++)
{
    cin>>b[i];
    vec.push_back(b[i]);
}
 sort(vec.begin(),vec.end());
 int flag=1;
 for (ll i = 0; i < vec.size()-1; i++)
 {
      if (vec[i]!=vec[i+1]+1)
      {
          flag=0;
      }
      
 }
 
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