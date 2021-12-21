//kuldeep yadav,Rajkiya engineering college sonbhadra//
#include <bits/stdc++.h>
using namespace std;
#define kuldeepyadav12  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define pf push_front
#define Pb pop_back
int n;
int m;
string w[50];
char s[10000];
int p[50];
int result[50], win[50], loose[50];
map<string, int> all;
 
bool myless (int i, int j) {
	return result[i] > result[j] || result[i] == result[j] && win[i] - loose[i] > win[j] - loose[j] || result[i] == result[j] && win[i] - loose[i] == win[j] - loose[j] && win[i] > win[j];
}
 
bool myless2 (int i, int j) {
	return w[i] < w[j];
}
void maxi(){
//     string s;
//     cin>>s;
//     int n= s.length();
//   bool was[255];
//   for (char c='A';c<='J';c++) was[c] = false;
//   for (int i=0;i<n;i++)
//     if (s[i] >= 'A' && s[i] <= 'J') was[s[i]] = true;
//   int ans = 1, q = 10;
//   for (char c='A';c<='J';c++)
//     if (was[c]) {
//       if (q == 10 && s[0] >= 'A' && s[0] <= 'J') ans *= 9;
//       else ans *= q;
//       q--;
//     }
//   if (s[0] == '?') ans *= 9;
//   cout<<ans;
//   for (int i=1;i<n;i++)
//     if (s[i] == '?') cout<<"0";
//   cout<<endl;
//second

}


 

int main()
{
    //kuldeepyadav12
    //     ll t;
    // cin >> t;
    // while (t--)
    // {
    //  maxi();
    // }
    int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> w[i];
		all[w[i]] = i;
		p[i] = i;
	}
	for (int i = 0; i <=n * (n - 1) / 2; i++) {
		gets (s);
		for (int j = 0; s[j]; j++)
			if (s[j] == '-' || s[j] == ':')
				s[j] = ' ';
		stringstream in (s);
		string a, b;
		int x, y;
		in >> a >> b >> x >> y;
		int A = all[a];
		int B = all[b];
		if (x > y) result[A] += 3; else
		if (x < y) result[B] += 3; else {
			result[A]++;
			result[B]++;
		}
		win[A] += x;
		loose[B] += x;
		win[B] += y;
		loose[A] += y;
	}
	sort (p, p + n, myless);
	sort (p, p + n / 2, myless2);
	for (int i = 0; i * 2 < n; i++) cout << w[p[i]] << endl;
    return 0;
}
