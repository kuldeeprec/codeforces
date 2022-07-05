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
// split fuction in c++ mode

void maxi(){
    int i,j,n,k,p,q;
    char res[500][500];
     cin>>n>>k;
    if(k%n==0){printf("0\n");}
    else{printf("2\n");}
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        res[i][j]='0';
      }
      res[i][n]=0;
    }
    p=0;q=0;
    while(k>0){
      k--;
      res[p][q]='1';
      p++;q++;q%=n;
      if(p==n){
        p=0;q++;q%=n;
      }
    }
    for(i=0;i<n;i++){
      printf("%s\n",res[i]);
    }
  }


int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    cin >> t;
    while (t--)
    {
       maxi();
    }

    return 0;
}
