#include <iostream>
using namespace std;
/*
#define iOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
#define IT iterator
//#define ld long double
 
using namespace std;
typedef long long int lli;
typedef long double ld;
typedef unsigned long long int llu;
typedef pair<int,int> P;
typedef vector<int> VI;
typedef vector< VI > VVI;
typedef vector< P > VP;
typedef vector< VP > VVP;
typedef vector<string> VS;
typedef vector< VS> VVS;
typedef map<int,int> MAP;*/
int main()
{
    long long n;

    int flag = 0;
    cin >> n;
    while (n !=0)
    { 
      
        if (n % 10 == 4 || n % 10 == 7)
        { 
            flag=1;
            
        }
        else
        {
            flag=0;
            break;
        }
		 n=n/10;
		}
        if (flag==1)
        {
            cout<<"YES";
        }
        if(flag==0)
        {
            cout<<"NO";
        }
        
        

        return 0;
    }
