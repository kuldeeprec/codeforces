#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int sum(vector<int> a)
{
	int sum = 0;
	for(auto i : a)
	{
		sum += i;
	}
	return sum;
}


int main()
{
	int t;
	cin>>t;
	string y = "YES";
	string n0 = "NO";

	while(t--)
	{
		int n,ka;
		cin>>n>>ka;
		vector<int> a;
		vector<int> b;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			if(i%2==0 || i==0)
			{
                 cout<<temp<< endl;
				a.push_back(temp);
			}
			if(i%2==1)
			{
                 cout<<temp<< endl;
				b.push_back(temp);
			}
			
		}
		sort(a.begin(),a.end(),greater<ll>());
		
		sort(b.begin(),b.end(),greater<ll>());
	

		int sum1 = sum(a);
		int sum2 = sum(b);

		if(sum2>sum1)
		{
			cout<<y<<endl;
			continue;
		}
		string result = n0;
		int j,k;
		j=0;
		k = b.size()-1;
		for(int i=0;i<ka;i++)
		{
			if(j>=a.size() || k<0)
			{
				break;
			}
			int temp1 = a.at(j);
			int temp2 = b.at(k);
			if(temp1>temp2)
			{
				a.at(j) = temp2;
				b.at(k) = temp1;
				j++;
				k--;
			}
			else
			{
				j++;
				k--;
				i--;
				continue;
			}
			
			
			int sum1 = sum(a);
			int sum2 = sum(b);


			if(sum2>sum1)
			{
				result = y;
				break;
			}

		}
	
		
		cout<<result<<endl;
	}

	return 0;
}

