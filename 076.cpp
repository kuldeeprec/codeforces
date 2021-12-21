                                //kuldeep yadav,Rajkiya engineering college sonbhadra//                    
                      //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long 
#define pb push_back
#define pf push_front
#define Pb pop_back
bool com(const ll &a,const ll &b){
    return a%2==0&&b%2!=0;
}
ll count1=0;
 

void subsequence(string str)
{
     
    for (int i = 0; i < str.length(); i++)
    {
         
        for (int j = str.length(); j > i; j--)
        {
            string sub_str = str.substr(i, j);
            if(sub_str=="QAQ"){
                count1++;
            }
 
            for (int k = 1; k < sub_str.length() - 1; k++)
            {
                string sb = sub_str;
 
                sb.erase(sb.begin() + k);
                subsequence(sb);
            }
        }
    }
}
void maxi(){
    // ll n;
	// cin >> n;
	// cout << n + 1;
    // ll a,b,n;
    // cin>>a>>b>>n;
    // int flag=0;

 
    // for(int i=0;;i++)
	// {
	// 	if(n==0)
    //     {
    //         break;
    //     }
 
	// 	if(i%2==0)
	// 	{
	// 		flag=0;
	// 		n-=__gcd(n,a);
	// 	}
	// 	else
	// 	{
	// 		flag=1;
	// 		n-=__gcd(n,b);
	// 	}
	// }

    // cout<<flag<<endl;
    // ll x,y,r;
    // cin>>x>>y;
    // r=min(x,y);
    // ll k=1;
    // for (ll i = 2; i <=r; i++)
    // {
    //     k*=i;
    // }
    // cout<<k<<endl;
    // ll n,m;
    // cin>>n>>m;
    // ((n*m)>=n*(m-1)+m*(n-1))?cout<<"YES\n":cout<<"NO\n";
    // string s;
    // cin>>s;
    // ll n= s.length();
    // s='S'+s;
    // ll dp[n+1]={0},nA=0,nQ=0;dp[0]=0;
    // for (ll i = 1; i <=n; i++)
    // {
    //     if(s[i]=='Q'){
    //         dp[i]=dp[i-1]+nA;
    //         nQ++;
    //     }
    //     if (s[i]=='A'){
    //         nA+=nQ;
    //     }
    //     dp[i]=max(dp[i],dp[i-1]);
        
        
    // }
    // cout<<dp[n]<<endl;
    
}    
    
int main(){
    kuldeepyadav12
    // ll t;
    // cin>>t;
    // while(t--){
    //  maxi();
    // }
    string s;
    cin>>s;
    subsequence(s);
     cout<<count1<<endl;
    return 0;
}
