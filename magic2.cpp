#include<iostream>
using namespace std;   
int main()
{
    string str;
    int state = 0;
    bool pos = 1;
    cin>>str;
    int n = (int)str.size();
    for(int i = 0; i < n && pos; i++)
    {
        if(str[i] == '1') state = 1;
        else if(state == 1 && str[i] == '4') state = 2;
        else if (state == 2 && str[i] == '4') state = 0;
        else pos = 0;
    }
    if(pos) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}