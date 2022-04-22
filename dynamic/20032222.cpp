#include <bits/stdc++.h>
using namespace std;
#define ll long long
// vector<int> compute_lps(string s)
// {
//     int n = s.size();   
//     vector<int> lps(n);
//     int len = 0;
//     lps[0] = 0;
//     int i = 1;
//     while (i < n) {
//         if (s[i] == s[len]) {
//             len++;
//             lps[i] = len;
//             i++;
//         }
//         else {
//             if (len != 0)
//                 len = lps[len - 1];
//             else {
//                 lps[i] = 0;
//                 i++;
//             }
//         }
//     }
//     return lps;
// }
// void Longestsubstring(string s)
// {
//     vector<int> lps = compute_lps(s);
//     int n = s.size();
//     if (lps[n - 1] == 0) {
//         cout << -1;
//         return;
//     }
 
//     for (int i = 0; i < n - 1; i++) {
//         if (lps[i] == lps[n - 1]) {
//             cout << s.substr(0, lps[i]);
//             return;
//         }
//     }
//     if (lps[lps[n - 1] - 1] == 0)
//         cout << -1;
//     else
//         cout << s.substr(0, lps[lps[n - 1] - 1]);
// }
void weight(int W,int n){
  if(W<2&&n==0){
      return ;
  }
  weight(W/2,n-1);
  
}

void maxi(){
// ll n;
// cin>>n;
// vector<int>v(n);
// for(int i=0;i<n;i++){
//     cin>>v[i];
// }
// sort(v.begin(), v.end());
// cout<<v[n-1]+v[n-2]<<endl;
// string str;
// cin>>str;
// compute_lps(str);
 
 ll n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(), v.end());
for(int i=0;i<n-1;i++){
    cin>>v[i];
}
 }


int32_t main()
{
   int t;
   t=1;
   cin>>t;
   while(t--)
{
    maxi();
}
    
	return 0;
}


