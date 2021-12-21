                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define pf push_front
#define Pb pop_back
const int N = 100000; 
int n, init[N], goal[N];
vector <int> tree[N], result;
 
void go(int p, int u, int count0, int count1) {
    int current = init[u] ^ goal[u] ^ count0;
    if (current) {
        result.push_back(u);
    }
    for (int v : tree[u]) {
        if (v != p) {
            go(u, v, count1, count0 ^ current);
        }
    }
}


 int main()
    {
        kuldeepyadav12
    
       scanf("%d", &n);
    for (int i = 0; i < n - 1; ++i) {
        int a, b;
        scanf("%d%d", &a, &b);
        a --;
        b --;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    for (int i = 0; i < n; ++ i) {
        scanf("%d", init + i);
    }
    for (int i = 0; i < n; ++ i) {
        scanf("%d", goal + i);
    }
    go(-1, 0, 0, 0);
    printf("%d\n", (int)result.size());
    for (int v : result) {
        printf("%d\n", v + 1);
    }
        
        return 0;
    }
