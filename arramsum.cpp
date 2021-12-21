
#include <bits/stdc++.h>

using namespace std;

void pairs(int arr[],int arr_size)
{
   bool ans=true;
    int sum=arr[0];
	unordered_set<int> s;
	for (int i = 0; i < arr_size; i++)
	{
		int temp = sum - arr[i];

		if (s.find(temp) != s.end()){
           ans=false;
			cout << arr[i] << ","<< temp<<" ";
        }
            

		s.insert(arr[i]);
	}
    if(ans){
        cout<<"-1"<<endl;
    }
}

/* Driver Code */
int main()
{
	int n ;
    cin>>n ;
    int A[n] ;

    for(int i = 0; i < n; i++){
        cin>>A[i] ;
    }
  int arr_size  = sizeof(A) / sizeof(A[0]);
	pairs(A,arr_size);

	return 0;
}
