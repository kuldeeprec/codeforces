/*kuldeep yadav rec sonbhadra*/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{ int z=0,c=0,y[26];
   string s;
   cin>>s;
   while(z++<s.size()) y[s[z-1]-97]=1;
   z=0;
   while(z++<26) if(y[z-1]==1) c++;
   if(c%2) cout<<"IGNORE HIM!";
   else cout<<"CHAT WITH HER!";
        

    return 0;
}
