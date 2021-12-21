                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pll pair<ll,ll>
#define pb push_back
#define pf push_front
#define Pb pop_back
int const N = 3*1e5+5,M = 1005;

ll n,p,c;
pll arr[N];
bool yes;
vector<vector<ll>>v;
vector<ll>ans;
void dfs(ll node)
{
    for(auto i:v[node])
        yes|=(!arr[i].second);
}
int main()
{
    kuldeepyadav12
    cin >> n;
    v.resize(n+1);
    for(int i = 1;i<=n;i++)
    {
        cin >> p >> c,arr[i] = {p,c};
        if(!(~p))
            continue;
        v[p].pb(i);
    }
    for(int i = 1;i<=n;i++)
    {
        if(!(~arr[i].first) || !arr[i].second)
            continue;
        yes = false;
        dfs(i);
        if(!yes)
            ans.pb(i);
    }
    if(!ans.size())
        return cout << -1,0;
    for(auto i:ans)
        cout << i << " ";
    return 0;
    }

		
	
   

 

    


