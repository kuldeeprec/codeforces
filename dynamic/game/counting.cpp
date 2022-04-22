#include <bits/stdc++.h>
using namespace std;
#define ll long long
int finalans=INT_MAX;
bool check(vector<char> a)
{
    for(int i=1;i<a.size();i++)
    {
        if(a[i-1]==a[i])
            return false;
    }
    return true;
}
void minimumSwaps(vector<char> &a, int swaps=0,int idx=0)
{
    if(check(a))
    {
        finalans=min(finalans,swaps);
    }
    for(int i=idx;i<a.size();i++)
    {
        for(int j=i+1;j<a.size();j++)
        {
            swap(a[i],a[j]);
            minimumSwaps(a,swaps+1,i+1);
            swap(a[i],a[j]);
        }
    }
}
void maxi(){
 string s;
 cin>>s;
 vector<char>a(s.length());
 for(int i=0;i<s.length();i++){
     a.push_back(s[i]);
 }
 minimumSwaps(a,0,0);
 cout<<finalans<<endl;
 
 }


int main()
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


