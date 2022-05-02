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
#define rep(i, s, e) for (int i = s; i < e; i++)
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
 ll b,s,c,nb,ns,nc,cb,cs,cc,ans=0,r;
string a;
void maxi(){
cin >> a >> nb >> ns >> nc >> cb >> cs >> cc >> r;
    for(auto i:a)
        b+=(i == 'B'),s+= (i == 'S'),c+= (i == 'C');
    ll low = 0,high = 1e14,mid;
    while(low<=high)
    {
        mid = low + (high - low)/2;
        ll cost = max(0ll,mid*b-nb)*cb + max(0ll,mid*s-ns)*cs + max(0ll,mid*c-nc)*cc;
        if(cost <= r)
            ans = mid,low = mid +1;
        else
            high=  mid -1;
    }
    cout << ans<<endl;


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
