#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool ok = false;
ll arraysum(vector<ll>a){
    ll sum = 0;
    for(auto i:a){
        sum+=i;
    }
    return sum;
}
 void maxi(){
		ll n,ka;
		cin>>n>>ka;
		vector<ll> motu;
		vector<ll> tomu;
		for(ll i=0;i<n;i++)
		{
			ll temp;
			cin>>temp;
			if(i%2==0)
			{
                
				motu.push_back(temp);
			}
			if(i%2==1)
			{
                 
				tomu.push_back(temp);
			}
			
		}
		sort(motu.begin(),motu.end(),greater<ll>());
		sort(tomu.begin(),tomu.end(),greater<ll>());
		ll sum1=arraysum(motu);
		ll sum2 =arraysum(tomu);
      
		if(sum2>sum1)
		{
			cout<<"YES"<<endl;
			return;
		}
		
		ll j,k;
		j=0;
		k = tomu.size()-1;
		for(ll i=0;i<ka;i++)
		{
			if(j>=motu.size() || k<0)
			{
				break;
			}
			ll temp1 = motu.at(j);
			ll temp2 = tomu.at(k);
			if(temp1>temp2)
			{
				motu.at(j) = temp2;
				tomu.at(k) = temp1;
				j++;
				k--;
			}
			else
			{
				j++;
				k--;
				i--;
				continue;
			}
			
			
			 sum1 = arraysum(motu);
			 sum2 = arraysum(tomu);


			if(sum2>sum1)
			{
				ok = true;
                break;
				
			}
            }
             
          ok ? cout<<"YES\n":cout<<"NO\n";
          
		}
	


int32_t main()
{
   ll t;
   t=1;
   cin>>t;
   while(t--)
{
    maxi();
}
    
	return 0;
}


