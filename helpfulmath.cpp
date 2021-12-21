#include <iostream>
#include <algorithm>
using namespace std;
/*
void swap(char*s,char*t){
	char temp;
	temp=*s;
	*s=*t;
	*t=temp;
}*/
int main()
{
    int i, j, k;
    int key;
    string s;
    cin >> s;
    k = s.length();
   for ( j = 2; j < k; j+=2)
     {
         key=s[j];
        i=j-2;
        while (i>=0&&s[i]>key)
        {
            s[i+2]=s[i];
            i=i-2;
        }
        s[i+2]=key;

     }
    cout << s;

    return 0;
}
