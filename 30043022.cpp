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
#define rep(i, s, e) for (int i = s; i < e; i++)
// split fuction in c++ mode
vector<string>splitfun(string s,string delimiter){
vector<string>ans;
size_t pos = 0;
string token;
while ((pos = s.find(delimiter)) != string::npos) {
    token = s.substr(0, pos);
    ans.push_back(token);
    s.erase(0, pos + delimiter.length());
}
if(s.length()>0){
ans.push_back(s);
}
return ans;
}

void maxi(){
//  ll n,a;
//  cin>>n;
//  set<ll>r;
//  for(ll i = 0; i < n; i++){
//      cin>>a;
//      a+=i;
//      a%=n;
//      if(a<0)a+=n;
//      r.insert(a);

//  }
//   if(r.size()==n){
//       cout<<"YES"<<endl;
//   }
//   else{
//       cout<<"NO"<<endl;
//   }

// ll n;
// cin>>n;
// priority_queue<ll,vector<ll>,greater<ll>>pq;
// ll cost=0,count=0;
// for(ll i=0; i<n; i++){
//     ll a;
//     cin>>a;
//     cost+=a,count++;
//     if(a<0){
//      pq.push(a);
//     }
//     if(cost<0){
//         cost-=pq.top();
//         pq.pop();
//         count--;
//     }
// }
// cout<<count<<endl;
ll n;
cin>>n;
if(n<3){
    cout<<n<<endl;
    
}

else
{   
     
    
    if(n&1){
        cout<<(((n)*(n-1))*(n-2))<<endl;
    }
    else if(n%3==0){
        cout<<(n-1)*(n-2)*(n-3) <<endl;
    }
    else{
        cout<<(((n)*(n-1))*(n-3))<<endl;
    } 
}

	}

int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    // cin >> t;
   
    while (t--)
    {
       maxi();
    }

    return 0;
}
