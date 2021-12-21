#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
/*#define iOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
//#define mp make_pair
#define L(x) x.length()
#define B(x) x.begin()
#define E(x) x.end()
#define F(x) x.front()
#define SZ(x) x.size()
#define CLR(x) x.clear()
#define SORT(x) sort(x.begin(),x.end())
#define REV(x) reverse(x.begin(),x.end())
#define FOR(i,x,y) for(int i=x;i<y;i++)
#define S(x) scanf("%d",&x)
#define SL(x) cin>>x
#define SD(x) scanf("%lf",&x)
#define SC(x) scanf("%1s",&x)
#define SS(x) scanf("%s",x)
#define DUM() scanf("%c",&dum)
#define READ(x) freopen(x,"r",stdin)
#define WRITE(x) freopen(x,"w",stdout)
#define FILL(x,y) memset(x,y,sizeof(x))
#define IT iterator*/
int main()
{
    string s;
    int lower = 0, upper = 0, i, k, j;
    cin >> s;
    k = s.length();
    i = 0;
    while (k > 0)
    {
        if (s[i] < 92)
        {
            upper++;
        }
        if (s[i] >= 92)
        {
            lower++;
        }
        i++;
        k--;
    }
    k=s.length();
    if (lower < upper)
    { 
        for(i=0;i<k;i++)
        {
            if (s[i] >= 92)
            {
                s[i] = s[i] - 32;
            }
            
        
        }
    }
    
    if (lower >= upper)
    {
      for(i=0;i<k;i++)
        { 
            if (s[i] < 92)
            {

                s[i] = s[i] + 32;
            }
            
        }
    }

    cout << s;
    return 0;
}
