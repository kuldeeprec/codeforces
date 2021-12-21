#include <bits/stdc++.h>
using namespace std;
#define ll long long
auto dp=vmake(2*100000+1,vector<int>(1,-1));
 
bool f(vector<int> a){
    int N=a.size();
    int sum=0;
    auto dp=vmake(N+1,N*2000+1,false);
    dp[0][0]=true;
    for(int i=0;i<N;i++){
        for(int sa=0;sa<=sum;sa++){
            if(dp[i][sa]==false) continue;
            dp[i+1][sa]=true;
            dp[i+1][sa+a[i]]=true;
        }
        sum+=a[i];
    }
    return sum%2 or dp[N][sum/2]==false;
}
void maxi()
{
     int N;
    cin>>N;
    vector<int> a(N);
    cin>>a;
    if(f(a)){
        cout<<0<<endl;
    }else{
        int id=-1;
        for(int i=0;i<N;i++){
            auto b=a;
            b.erase(b.begin()+i);
            if(f(b)){
                cout<<1<<endl;
                cout<<i+1<<endl;
                return;
            }
        }
    }
}


int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        maxi();
    }
    return 0;
}