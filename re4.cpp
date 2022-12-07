#include <bits/stdc++.h>
using namespace std;

#define nax 100001

const int mod = 1e9 + 7;
vector<int> pow_2(nax);

void pre_compute() {
    int val = 1;
    for(int i = 0; i < nax; i++) {
        pow_2[i] = val;
        val = val * 2LL % mod;
    }
}

void solve() {
    int n = 0;
    cin >> n;
    map<int, int> freq;
    int max_value = 0;
    for(int i = 0; i < n; i++) {
        int element = 0;
        cin >> element;
        freq[element]++;
        max_value = max(max_value, element);
    }
    int ans = 0;
    int cumulative_freq = 0;
    int prev = 1;
    for(int i = 1; i <= max_value + 1; i++) {
        auto contribution = (i * 1LL * prev) % mod;
        contribution = (contribution * pow_2[n - (cumulative_freq + freq[i])]) % mod;
       
        prev = (1LL * prev * (pow_2[freq[i]] - 1)) % mod;
        cumulative_freq += freq[i];
        ans = (ans + contribution) % mod;
        if(freq[i] == 0) {
            break;
        }
    }
    cout << ans ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    pre_compute();
    
        solve();
    
    return 0;
}