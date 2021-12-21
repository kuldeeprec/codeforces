#include<iostream>
using namespace std;
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    int k,i,flag=0;
    i=0;
    k=s.length();
    while (k>=0)
    {      k=k-1;
        if(s[i]==t[k]){
          flag=1;
        }
        else
        {
            flag=0;
            break;
        }
        i++;
    }
    fflush(stdin);
    if (flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}
