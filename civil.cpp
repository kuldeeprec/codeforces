#include <bits/stdc++.h>
using namespace std;
#define ll long long
void maxi(){
ll n;
cin>>n;
vector<ll>p(n);
for(ll i=0;i<n;i++){
    cin>>p[i];
}
ll team1=0,team2=0;
bool fistteam=true;
ll first=0,last=n-1,prevf=0,prevl=n-1,sum1=0,sum2=0;
bool ok1=false;
bool ok2=false;
while(first<=last){
    prevf=first;
    prevl=last;
     if(p[first]>=0){
        ok1=true;
    }
     if(p[last]>=0){
        ok2=true;
    }
    if(p[first]<0){
        sum1+=p[first];
        ++first;
        ok1=false;
    }
     if(p[last]<0){
        sum2+=p[last];
        --last;
        ok2=false;
    }
    while((first<=last)&&ok1){
        sum1+=p[first];
        ++first;
        if(p[first]<0){
           ok1=false;
    }
    }
     while((first<=last)&&ok2){
        sum2+=p[last];
        --last;
         if(p[last]<0){
          ok2=false;
    }
    }
     if(fistteam){
      if(sum1>sum2){
          last=prevl;
          team1+=sum1;
          fistteam=false;
      }
      else{
         first=prevf;
          team1+=sum2;
          fistteam=false;
      }
     }
     else{
          if(sum1>sum2){
          last=prevl;
          team2+=sum1;
          fistteam=true;
      }
      else{
         first=prevf;
          team2+=sum2;
          fistteam=true;
      }
     }
   sum1=0,sum2=0; 
}
 ll ans=abs(team1-team2);
 cout<<ans<<endl;

}


int32_t main()
{
   int t;
   t=1;
//    cin>>t;
   while(t--)
{
    maxi();
}
    
	return 0;
}


