#include <bits/stdc++.h>
using namespace std;
const int h = 1e5 + 5;
const int mod = 1e9 + 7;
const int N=2010;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void maxi(){

//    ll a[4];
//    cin>>a[0]>>a[1]>>a[2]>>a[3];
//    set<ll>v;
//    v.insert(a[0]);
//    v.insert(a[1]);
//    v.insert(a[2]);
//    v.insert(a[3]);
//    cout<<4-v.size()<<endl;
// ll n,k=0,r=INT_MAX,pos1=0,pos2=0;
// cin>>n;
// ll a[n];
// for (ll i = 0; i < n; i++)
// {
//     cin>>a[i];
//     if(a[i]>k){
//         k=a[i];
//         pos1=i;
//     }
//     if(a[i]<=r){
//         r=a[i];
//         pos2=i;
//     }

// }
// ll resutl=0;
// if(pos2<pos1){
// resutl=pos1+n-1-pos2-1;}
// else{
//    resutl=pos1+n-1-pos2; 
// }
// cout<<resutl<<endl;
//

//   string s;
//  set<char>st;
//     while(cin >> s) {
//         if(s[s.size()-2]!='{') {
//             st.insert(s[s.size()-2]);
//         } if (s[s.size()-1] == '}') {
//             break;
//         }
//     }
//     cout << st.size();
// ll n;   
// cin>>n;
//  string s;
//  cin>>s;
//   set<char>st;
//   for (ll i = 0; i < s.length(); i++)
//   {   s[i] = tolower(s[i]);
//       st.insert(s[i]);
//   }
//   if(st.size()==26){
//      cout <<"YES" ;}
//      else
//      {
//          cout<<"NO";
//      }
//      map<string,int> m;
// int ans = 0;
// 	int n; cin >> n;
// 	m["Tetrahedron"] = 4;
// 	m["Cube"] = 6;
// 	m["Octahedron"] = 8;
// 	m["Dodecahedron"] = 12;
// 	m["Icosahedron"] = 20;
	
//      for (ll i = 0; i < n; i++)
//       {
// 	    string s; cin >> s;
// 	    ans += m[s];
// 	}
// 	cout << ans;

// 
//  string a,b,c;
//     cin >> a >> b >> c;
 
//     a=a+b;
 
//     sort(a.begin(),a.end());
//     sort(c.begin(),c.end());
 
//     if(a==c)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }
 int n, ans=0;
// vector<int> v={100, 20, 10, 5, 1};
 
// 	cin>>n;
// 	for(auto it:v)
// 	{
// 		int cur=n/it;
// 		n-=cur*it;
// 		ans+=cur;
// 	}
// 	cout<<ans;
cin >> n;
        cout << (n - 1) / 2 << '\n';
 
}

 
    
 
    int main()
    {
        kuldeepyadav12
    
        ll t;
         cin>>t;
         while(t--)
            maxi();
        
        return 0;
    }