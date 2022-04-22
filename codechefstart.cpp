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
bool check(vector<ll>v){
    bool ans=true;
    for(ll i=0; i<v.size(); i++){
        if(v[i]&1){
            ans=ans&&true;
        }
        else{
            ans=false;
        }
    }
    return ans;
}
bool check2(vector<ll>v){
    bool ans=true;
    for(ll i=0; i<v.size(); i++){
        if(v[i]%2==0){
            ans=ans&&true;
        }
        else{
            ans=false;
        }
    }
    return ans;
}
ll pairCount(map<string, ll> &d)
{
    ll sum = 0;
    for (auto i : d)
        sum += (i.second * (i.second - 1)) / 2;
  
    return sum;
}
  
// Function to return total number of strings
// which satisfy required condition
ll difference(vector<string> &array, ll m)
{
    // Dictionary changed will store strings
    // with wild cards
    // Dictionary same will store strings
    // that are equal
    map<string, ll> changed, same;
  
    // Iterating for all strings in the given array
    for (auto s : array)
    {
        // If we found the string then increment by 1
        // Else it will get default value 0
        same[s]++;
  
        // Iterating on a single string
        for (ll i = 0; i < m; i++)
        {
            // Adding special symbol to the string
            string t = s.substr(0, i) + "//" + s.substr(i + 1);
  
            // Incrementing the string if found
            // Else it will get default value 0
            changed[t]++;
        }
    }
  
    // Return counted pairs - equal pairs
    return pairCount(changed) - pairCount(same) * m;
}

void maxi()
{
//   ll n;
//   cin>>n;
//   if(n<=1399){
//       cout<<"Division 4"<<endl;
//   }
//   else if(n>1399&&n<=1599){
//       cout<<"Division 3"<<endl;
//   }
//   else if(n>1599&&n<=1899){
//       cout<<"Division 2"<<endl;
//   }
//   else if(n>1899){
//       cout<<"Division 1"<<endl;
//   }
// ll n;
// cin>>n;
// map<ll,ll>mp;
// for(ll i=0;i< n; i++){
//     ll x;
//     cin>>x;
//     mp[x]++;
// }
// ll ans=-1;
// for(auto i:mp){
//     if(i.second>=3){
//         ans=i.first;
//         break;
//     }
// }
// cout<<ans<<endl;
// ll n;
// cin>>n;
// vector<ll>v1(n);
// for(ll i=0;i<n;i++){
//     cin>>v1[i];
// }
// bool ans= check(v1)||check2(v1);
// vector<ll>v2(n);
// for(ll i=0;i<n;i++){
//     if(i%2==0){
//        v2[i]= v1[i]+1;
//     }
//     else{
//         v2[i]= v1[i];
//     }
// }
// bool ans1= check(v2)||check2(v2);
// vector<ll>v3(n);
// for(ll i=0;i<n;i++){
//     if(i%2==0){
//        v3[i]= v1[i]+1;
//     }
//     else{
//         v3[i]= v1[i];
//     }
// }
// bool ans2= check(v3)||check2(v3);
// vector<ll>v4(n);
// for(ll i=0;i<n;i++){
//     if(i%2==0){
//        v4[i]= v1[i]+1;
//     }
//     else{
//         v4[i]= v1[i]+1;
//     }
// }
// bool ans3= check(v4)||check2(v4);
// bool final= ans||ans2||ans1||ans3;
// if(final){
//     cout<<"YES"<<endl;
// }
// else{
//     cout<<"NO"<<endl;
// }
// ll n;
// cin>>n;
// vector<string>v;
// while(n--){
//     string a;
//     cin>>a;
//     v.push_back(a);
// }
// cout << difference(v, 2) << endl;
ll n;
cin>>n;
vector<ll>w(n);
for(ll i=0; i<n; i++){
    cin>>w[i];
}
if(n<=1){
    cout<<"0"<<endl;
}
ll i=1,j=n-2;
ll sum1=w[0],sum2=w[n-1];
ll num=2;
bool ok=false;
ll ans=num;
while(i<=j&&j>=i){
    if(sum1<sum2){
        sum1+=w[i];
        i++;
        num++;
    }
    if(sum2<sum1){
        sum2+=w[j];
        num++;
        j--;
    }
    if(sum1==sum2){
        ans=num;
        ok=true;
        break;

    ;  
    }
}
if(ok){
    cout<<num<<endl;
}
else{
    cout<<"0"<<endl;
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
