//kuldeep yadav rajkiya engineering college sonbhadra
#include<bits/stdc++.h>

using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
// Google
ll tc_count = 1;
#define ns()         cout << "Case #" << tc_count ++ << ": ";
// split fuction in c++ mode
vector<string>splitfun(string s,string delimiter){
vector<string>ans;
size_t pos = 0;
string token;
while ((pos = s.find(delimiter)) != string::npos) {
    token = s.substr(0, pos+1);
    ans.push_back(token);
    s.erase(0, pos + delimiter.length());
}
if(s.length()>0){
ans.push_back(s);
}
return ans;
}

void maxi(){
//     ll n;
//     cin>>n;
//     vector<ll>v(n);
//     priority_queue<ll,vector<ll>,greater<ll>>pq;
//     for(ll i=0;i<n; i++){
//         cin>>v[i];
//         pq.push(v[i]);
//     }
//     bool ok=true;
//     bool e=false;
//     bool m=true;
//    while(pq.size()>0 &&ok){
//        ll element= pq.top();
//        pq.pop();
//        if(!e){
//       if(element>1){
//           e=true;
//           m=false;
//            if(element&1){ 
//                pq.push(element/2);
//                pq.push((element/2)+1);
//            }
//            else{
//                pq.push(element/2);
//                pq.push((element/2));
//            }
//        }
//        }
//        else{
//            if(element>1){
//                e=false;
//                m=true;
//            if(element&1){ 
//                pq.push(element/2);
//                pq.push((element/2)+1);
//            }
//            else{
//                pq.push(element/2);
//                pq.push((element/2));
//            }
//        }
//        }
       

// }
//  if(e){
//  cout<<"errorgorn"<<endl;
//  }
//  else{
//  cout<<"maomao90"<<endl;
//  }

string s2;
cin>>s2;
vector<string>ans;
bool ok=true;
bool result;
if(s2.size()<2){
cout<<"NO"<<endl;
}
else{
  ans=splitfun(s2,"B");
  for(auto s:ans){
      bool ok1=false;
      for(ll j=0;j<s.length()-1;j++){
          if(s[j]=='A'){
              ok1=true;
          }
          else{
              ok1=false;
              break;
          }
      }
      if(s[s.length()-1]!='B'){
          ok1=false;
      }
      ok=ok&&ok1;
  }
  if(ok){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}


}

int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    cin >> t;
   
    while (t--)
    {
       maxi();
    }

    return 0;
}
