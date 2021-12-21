//kuldeep yadav,Rajkiya engineering college sonbhadra//
#include <bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define pb push_back
#define pf push_front
#define Pb pop_back
#define mod (ll)1000000007
bool check(ll x)
{
    set<ll>st;
    ll cnt = 0;
    while(x)
        st.insert(x%10),cnt++,x/=10;
    return cnt == st.size();
}

void maxi(){
//   int n;
//    cin >> n;
//         map<int, int> mp;
//         vector<int> v;
//         for(int i = 0, x;i < n;i++) {
//             cin >> x;
//             if(mp.count(x))
//                 v.push_back(x);
//             else
//                 mp[x] = 1;
//         }
//         for(auto &i : mp)
//             cout << i.first << " ";
//         for(auto &i : v)
//             cout << i << " ";
//         cout << '\n';

//   long n,x,i,a1=0,a2=0,a3=0;
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         cin>>x;
//         if(i%3==0)
//         a1+=x;
//         if(i%3==1)
//         a2+=x;
//         if(i%3==2)
//         a3+=x;
//     }
//     if(a1>=a2&&a1>=a3)
//     cout<<"chest";
//     else if(a2>=a1&&a2>=a3)
//     cout<<"biceps";
//     else cout<<"back";
// ll n,count=0;
// cin>>n;
// ll mi=INT64_MAX,mx=-1;
//     for(ll i=0;i<n;++i)
//     {
// 			ll a;
// 			cin>>a;
// 			mi=min(mi,a);
// 			mx=max(mx,a);
// 		}
// 		cout<<mx-mi+1-n<<endl;

// ll n,z=0,neg=0,sum=0;
// cin>>n;
// ll a[n];
// for (ll i = 0; i < n; i++)
// {
//     cin>>a[i];
//     if(a[i]==0){
//         z++;
//         a[i]=1;
//     }
//     sum+=a[i];
    
// }
// if(sum==0){
//     z++;
// }
// cout<<z<<endl;

//     ll l,r;
//     cin >> l >> r;
//     for(int i = l;i<=r;i++)
//         if(check(i)){
//             cout << i;
//              return;}
//     cout << -1;
// }
  string str;
  cin >> str;
  ll len = str.length();
  vector<ll>between(500000,0);
  
  ll counter = 0;
  for(ll i = 0; i < len; i++){
    if(str[i] == '.'){
      counter++;
    } else {
      between[counter]++;
    }
  }
  for(ll i = 0; i <= counter; i++){
    if(between[i] == 0 || between[i] > 11){
      cout << "NO" << endl;
      exit(0);
    }
    if(between[i] == 1 && (i != 0 && i != counter)){
      cout << "NO" << endl;
      exit(0);
    }
    if(between[i] > 8 && i == 0){
      cout << "NO" << endl;
      exit(0);
    }
    if(i == counter && between[i] > 3){
      cout << "NO" << endl;
      exit(0);
    }
  }
  if(counter == 0){
    cout << "NO" << endl;
    exit(0);
  }
  ll curcounter = 0;
  cout << "YES" << endl;
  ll csc = 0;
  for(ll i = 0; i < len; i++){
    cout << str[i];
    if(str[i] == '.'){
      curcounter++;
      csc = 0;
    } else {
      csc++;
      if(csc == min(between[curcounter]-1, (ll)3) && curcounter != 0 && curcounter != counter){
	cout << endl;
      }
      
    }
  }
  cout << endl;
}

  
    
     
    


int main()
{
    kuldeepyadav12
    //     ll t;
    // cin >> t;
    // while (t--)
    // {
    //    maxi();
    // }
 maxi();
    return 0;
}
