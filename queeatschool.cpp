#include <iostream>
using namespace std;
int main()
{
    long long n;
    int k, i, temp;
    string s;
    cin >> n >> k;
    cin >> s;
    int j;
    i = 0;
    while (k--)

    {
            for (j = 0; j < n - 1; j++)
            {
               if(s[j]=='B'&&s[j+1]=='G'){
               	char temp=s[j+1];
			    s[j+1] = s[j];
			    s[j]=temp;
			    j++;
            }
            
          } }

    cout << s;
    return 0;
}
