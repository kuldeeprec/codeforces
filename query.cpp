
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        map<pair<int, int>, int> mp;
        int arr[n]; 
            for(int i=0;i<n;i++){
                int temp ;
                cin >> temp;
                int pwr = (int)log2(temp);
                arr[i] = pwr;
                mp[{pwr,i}]++;
            }
            int q;
            cin >> q;
            for(int i =0;i<q;i++){
                int si,ei,x;
                cin>>si;
                cin>>ei;
                cin>>x;
                int pwr = (int)log2(x);
                int cnt = 0;
                for(int j= si-1;j<ei;j++){
                    if(arr[j]==pwr)cnt++;
                }
                // cnt=mp[{pwr,ei-1}]-mp[{pwr,si-1}];
                cout<<cnt<<endl;
                int ans =(ei-si+1)-cnt;
                
                cout << ans << endl;
            }
    }
	return 0;
}