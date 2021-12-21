/*kuldeep yadav*/
#include<iostream>
using namespace std;
int main(){
    int n,i,count=0;
    string s;
    cin>>n;
	 cout<< endl;
    cin>>s;
    for ( i = 0; i < n; i++)
    {
           if (s[i]==s[i+1])
           {
             count++;
           }
           
    }
    cout<<count;
    return 0;
    
}
