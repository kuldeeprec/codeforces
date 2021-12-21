#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
using namespace std;
map <int,int> m;
int t,n;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		m.clear();
		register int ans=0;
		scanf("%d",&n);
		for(register int i=1,a;i<=n;i++)
		{
			scanf("%d",&a);
			if(!m.count(a)) ans++,m[a]=1;
		}
		printf("%d\n",ans);
	}
	return 0;
}
