//error in program
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int n;
int m;
string w[50];
char s[10000];
int p[50];
int res[50], qz[50], qp[50];
map<string, int> all;

bool myless (int i, int j) {
	return res[i] > res[j] || res[i] == res[j] && qz[i] - qp[i] > qz[j] - qp[j] || res[i] == res[j] && qz[i] - qp[i] == qz[j] - qp[j] && qz[i] > qz[j];
}

bool myless2 (int i, int j) {
	return w[i] < w[j];
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> w[i];
		all[w[i]] = i;
		p[i] = i;
	}
	gets (s);
	for (int i = 0; i < n * (n - 1) / 2; i++) {
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
		if (x > y) res[A] += 3; else
		if (x < y) res[B] += 3; else {
			res[A]++;
			res[B]++;
		}
		qz[A] += x;
		qp[B] += x;
		qz[B] += y;
		qp[A] += y;
	}
	sort (p, p + n, myless);
	sort (p, p + n / 2, myless2);
	for (int i = 0; i * 2 < n; i++) cout << w[p[i]] << endl;
	return 0;
}