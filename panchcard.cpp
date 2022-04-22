//kuldeep yadav rajkiya engineering college sonbhadra
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
// Google
ll tc_cnt = 1;
#define ns()               cout << "Case #" << tc_cnt ++ << ": ";
const long long mex=1e5+1;
void maxi()
{
int R,C;
    cin>>R>>C;
     ns()cout<<endl;
    for(int i=1;i<=2;i++)
    {
        cout<<".";
    }
    for(int i=1;i<=(2*C)-1;i++)
    {
        if(((i&1))==1)
           cout<<"+";
        else
           cout<<"-";
    }
    cout<<endl;
    for(int i=1;i<=2;i++)
    {
        cout<<".";
    }
    for(int i=1;i<=(2*C)-1;i++)
    {
        if((i&1)==0)
           cout<<".";
        else
           cout<<"|";
    }
    cout<<endl;
    for(int i=3;i<=(2*R)+1;i++)
    {
        bool flag;
        if((i&1)==1)
        {
            flag = true;
        }
        else
        {
        flag = false;
        }
             if(flag)
             {
                 for(int k=1;k<=(2*C)+1;k++)
                    {
                        if((k&1)==0)
                        cout<<"-";
                        else
                        cout<<"+";
                    }
                    cout<<endl;
             }
             else
             {
                 for(int k=1;k<=(2*C)+1;k++)
                    {
                        if((k&1)==0)
                        cout<<".";
                        else
                        cout<<"|";
                    }
                    cout<<endl;
             }
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
