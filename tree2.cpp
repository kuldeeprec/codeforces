#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1e9 + 7
#define sandeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}
void maxi(){
    int n,x;
    cin>>n>>x;
    map<int,vector<int>>d;
    for (int i = 2; i < n+1; i++)
    {
        int u,v;
        cin>>u>>v;
        auto itr =d.find(u);
        if(itr->first==u){
            itr->second.push_back(v);
        }
        else
        {
            vector<int>l;
            l.push_back(v);
            d.insert({u,l});
        }
        
    }
    for(auto i=d.begin();i!=d.end();i++){
        vector<pair<int,int>>kul;
        auto v=i->second;
        for (auto x = v.begin(); x!=v.end(); x++)
        {
            int c=0;
            auto it= d.find(*x);
            if (it->first==*x)
            {
              c=it->second.size();
            }
            else
            {
                c=0;
            }
            kul.push_back({*x,c});
            
        }
        sort(kul.begin(),kul.end(),sortbysec);
        vector<int>l;
        for(auto it=kul.begin();it!=kul.end();it++){
            l.push_back(it->first);
        }
        i->second=l;
    

    }
    map<int,int>d1;
    for (int i = 1; i <n+1; i++)
    {
        auto ir= d.find(i);
    if(ir->first==i){
        int num=0;
        if(i==1){
            num=x;
        }
        else{
            num=d1.find(i)->second;
        }
        int j=1;
        for (auto itr = ir->second.begin(); itr!=ir->second.end(); itr++)
        {
            d1.insert({*itr,num*j});
            j++;
        }
        
    }
    }
    int sum=x;
    for (auto itr = d1.begin(); itr!=d1.end(); itr++)
    {
        sum+=itr->second;
        sum= sum % 1000000007;
    }
    cout<<sum % 1000000007<<endl;

}
 int32_t main()
    {
        sandeepyadav12
    
        int t;
         cin>>t;
         while(t--)
            maxi();
        
        return 0;
    }