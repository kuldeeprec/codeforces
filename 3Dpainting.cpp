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

     ns()cout<<endl;
    vector<int> col1(3);
    vector<int> col2(3);
    vector<int> col3(3);
    vector<int> col4(3);
    for(int i=0;i<3;i++)
    {
        cin>>col1[i]>>col2[i]>>col3[i]>>col4[i];
    }
    int p1 = *min_element(col1.begin(),col1.end());
    int p2 = *min_element(col2.begin(),col2.end());
    int p3 = *min_element(col3.begin(),col3.end());
    int p4 = *min_element(col4.begin(),col4.end());
    int t = 1000000;
    int t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    if(t>0)
    {
        if(t>=p1)
        {
            t1 = p1;
            t -= p1;
        }
        else
        {
            t1 = t;
            t = 0;
        }
    }
    else
    {
        t1 = 0;
    }
    if(t>0)
    {
        if(t>=p2)
        {
            t2 = p2;
            t -= p2;
        }
        else
        {
            t2 = t;
            t = 0;
        }
    }
    else
    {
        t2 = 0;
    }
    if(t>0)
    {
        if(t>=p3)
        {
            t3 = p3;
            t -= p3;
        }
        else
        {
            t3 = t;
            t = 0;
        }
    }
    else
    {
        t3 = 0;
    }
    if(t>0)
    {
        if(t>=p4)
        {
            t4 = p4;
            t -= p4;
        }
        else
        {
            t4 = t;
            t = 0;
        }
    }
    else
    {
        t4 = 0;
    }
    int sum = (t1 + t2 + t3 + t4);
    if(sum==(1000000))
    {
        cout<<t1<<" "<<t2<<" "<<t3<<" "<<t4<<endl;
    }
    else
    {
        cout<<"IMPOSSIBLE"<<endl;
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
