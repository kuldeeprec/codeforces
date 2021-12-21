                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long 
#define pb push_back
#define pf push_front
#define Pb pop_back
bool com(const ll &a,const ll &b){
    return a%2==0&&b%2!=0;
}
void maxi(){
    // ll s1,s2,s3,s4;
    // cin>>s1>>s2>>s3>>s4;
    // ll k=0;
    // if(max(s1,s2)>min(s3,s4)&&min(s2,s1)<max(s3,s4)){
    //     k=1;
    // }
    // k ? cout << "YES\n" : cout << "NO\n";
    // ll n;
    //        cin >> n;
    //     vector<int> v1, v2, v;
    //     for(int i = 0, x;i < n;i++) {
    //         cin >> x;
    //         if(x & 1)
    //             v1.push_back(x);
    //         else
    //             v2.push_back(x);
    //     }
    //     sort(v1.begin(), v1.end());
    //     int e = v2.size();
    //     int ans = v1.size() * e + e * (e - 1) / 2;
    //     for(int i = 0;i < v1.size();i++) {
    //         for(int j = i + 1;j < v1.size();j++)
    //             if(__gcd(v1[i], 2 * v1[j]) > 1)
    //                 ans++;
    //     }
    //     cout << ans << '\n';
    // }
        // string s;
        // cin >> s;
        // ll ans = 0, lst = -1;
        // char exp = '?';
        // for(int i = 0;i < s.size();i++) {
        //     if(exp == '?' || exp == s[i] || s[i] == '?') {
        //         ans += i - lst;
        //         if(exp != '?')
        //             (exp == '0') ? exp = '1' : exp = '0';
        //         else if(s[i] != '?')
        //             (s[i] == '0') ? exp = '1' : exp = '0';
        //     } else {
        //         lst = i - 1;
        //         while(lst >= 0 && s[lst] == '?')
        //             lst--;
        //         ans += i - lst;
        //         (s[i] == '0') ? exp = '1' : exp = '0';
        //     }
        // }
        // cout << ans << '\n';
        // bool a[51];
        // memset(a,true,sizeof(a));
        // for (ll i = 2; i*i < 51; i++)
        // {
        //     if(a[i]==true){
        //   for (ll j = i*i; j <51; j+=i)
        //   {
        //       a[j]=false;
        //   }}
          
        // }
        
        // ll n,m;
        // cin>>n>>m;
        // ll i=n+1;
        // while (a[i]!=true&&i<=m)
        // {
        //    i++;
            
        // }
        // (i==m)?cout<<"YES\n":cout<<"NO\n";
        // ll n;
        // cin>>n;
        // for (ll i = 1; i <=n; i++)
        // {
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        // ll n,x;
        // cin >> n;
        // map<int , vector<int>> mp;
        // for(int i = 0 , x;i < n;i++)
        //     cin >> x , mp[x].push_back(i + 1);
        // int ans = -1;
        // for(auto &i : mp)
        //     if(i.second.size() == 1) {
        //         ans = i.second.back();
        //         break;
        //     }
        // cout << ans << '\n';
    //     ll d1,d2,d3;
    //     cin>>d1>>d2>>d3;
 
    // if(d3>=d1+d2){
    //  cout<<(d1+d1+d2+d2);
    // }
    // else if(d2>=d1+d3){
    //     cout<<(d1+d3+d1+d3);
    // }
    // else if(d1>=d2+d3){
    //     cout<<(d2+d3+d2+d3);
    // }
    // else{
    //     cout<<(d1+d2+d3);
    // }
         ll n;
    // cin >> n;
    // if(n&1){cout << -1;
    //    return;}
    // for(int i =2;i<=n;i+=2) {
    //     cout << i << ' ' << i-1 << ' ';
    // }
     cin >> n;
        int w = (n - 1) / 2, d = !(n & 1);
        for(int i = 0;i < n;i++) {
            for(int j = i + 1, k = 0;j < n;j++, k++) {
                if(k < w)
                    cout << "1 ";
                else if(k >= w + d)
                    cout << "-1 ";
                else
                    cout << "0 ";
            }
        }
        cout << '\n';
    }
    

        
        
    
int main(){
    kuldeepyadav12
    ll t;
    cin>>t;
    while(t--){
    maxi();
    }
    
    return 0;
}
