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
void maxi(){
    string s;
    cin>>s;
    int n= s.length();
    bool a[n][n];
    memset(a,false,sizeof(a));
    int x,y,max=INT_MIN;
    for (int i = n-1; i >=0; i--)
    {
        for ( int j = i; j<=n-1; j++)
        {
            if(i==j){
                a[i][j]=true;
            }
            else if(s[j]==s[i]){
                if(j-i==1){
                    a[i][j]=true;
                }
                else
                {
                    a[i][j]=a[i+1][j-1];
                }
                
            }
            if(a[i][j] && j-i >=max){
                x=i,y=j,max=j-i;
            }
            
        }
        
    }
    cout<<s.substr(x,y-x+1)<<endl;
    }

    
int main(){
    kuldeepyadav12
    ll t;
    cin>>t;
    while(t--){
    maxi();
    }

    return 0;
}
