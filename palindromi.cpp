//kuldeep yadav rajkiya engineering college sonbhadra
#include<bits/stdc++.h>

using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
// Google
ll tc_count = 1;
#define ns()         cout << "Case #" << tc_count ++ << ": ";

void maxi(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int i=0,j=str.length()-1;
    int count=0;
    while(i<j){
     if(str[i]!=str[j]){
        count++;
     }
     i++;
     j--;
    }
    count= count/2+count%2;
    cout<<count<<endl;
}

int main()
{
    kuldeepyadav12
        ll t;
   
    cin >> t;
   
    while (t--)
    {
       maxi();
    }

    return 0;
}
