#include <bits/stdc++.h>
using namespace std;
 
 
#define ll long long
 
int main()
{
    ios::sync_with_stdio(false);
    string s;
    map<string, int> mp;
    int i, j, k, l, cnt = 0, mx = 0; char c1, c2;
    int n;
    cin >> n;
    cin >> s;
    for(i=0;i<n-1;i++){
        cnt = 0;
        c1 = s[i];
        c2 = s[i+1];
        for(j=0;j<n-1;j++){
            if(s[j] == c1 && s[j+1] == c2){
                cnt++;
            }
        }
        vector<char> v;
        v.push_back(c1);
        v.push_back(c2);
        string d (v.begin(), v.end());
        mp.insert(pair<string, int>(d, cnt));
        mx = max(mx, cnt);
        v.clear();
    }
 
    map<string, int> :: iterator itr;
    for(itr = mp.begin(); itr != mp.end();itr++){
        if(itr -> second == mx){
            cout << itr -> first;
            return 0;
        }
        //cout << itr -> first << " " << itr -> second << "\n";
    }
}