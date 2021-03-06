
#include<bits/stdc++.h>
#define MOD 1000000007
#define MAX 6000009
#define identity 0
#define ll long long
#define slld(t) scanf("%lld",&t)
#define sd(t) scanf("%d",&t)
#define pd(t) printf("%d\n",t)
#define plld(t) printf("%lld\n",t)
#define DBUG(x) cout<<x<<endl;
#define pcc pair<char,char>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();it++)
#define mp(a,b) make_pair(a,b)
#define pb(x) push_back(x)
#define F first
#define S second

using namespace std;

ll store[MAX];
int sievephi[MAX+5];

void precalc(){
    for(int i=1;i<=MAX;i++)
        sievephi[i]=i;
        
    for(int i=2;i<=MAX;i+=2)
        sievephi[i]-=sievephi[i]/2;

    for(int i=3;i<=MAX;i+=2)
        if(sievephi[i]==i)
            for(int j=i;j<=MAX;j+=i)
                sievephi[j]-=sievephi[j]/i;
                
    store[0]=0;
    
    for(int i=1;i<MAX;i++){
        store[i]=store[i-1]+sievephi[i];
    }
}

ll phisum(ll n){
    if(n<6000000) return store[n];
    
    ll ans=(n*(n+1))/2;
    
    int d=2;
    
    for(;d*d<=n;d++){
        ans-=phisum(n/d);
    }
    
    int val=n/d;
    
    for(;val>0;val--){
        int lowd=ceil(double(n)/(val+1));
        if(n%(val+1)==0) lowd++;
        int highd=floor(double(n)/val);
        d=highd-lowd+1;
        ans-=d*store[val];
    }
    
    return ans;
}

int main()
{
    precalc();
    
    
        ll n,d;
        slld(n);slld(d);
        
        n/=d;
        
        if(!n){
            printf("0\n");
        }
        else{
            plld(phisum(n));
        }
    
    return 0;
}
