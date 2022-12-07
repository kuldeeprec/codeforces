
 //kuldeep yadav rajkiya engineering college sonbhadra
#include<bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
const ll mini = -2147483848;
// Google
ll tc_count = 1;
#define ns()         cout << "Case #" << tc_count ++ << ": ";
void create(vector<ll>&arr,ll *tree,ll start ,ll end, ll treeindex){
         if(start == end){
            tree[treeindex]=arr[start];
           
            return;
         }
         ll mid= (start+end)/2;
         create(arr,tree,start,mid,2*treeindex);
         create(arr,tree,mid+1,end,2*treeindex+1);
         tree[treeindex]=max(tree[2*treeindex],tree[2*treeindex+1]);
}
void update(vector<ll>&arr,ll *tree,ll start,ll end,ll treeindex,ll index,ll value){
      if(start==end){
        arr[index]=value;
        tree[treeindex]=value;
        return;
      }
      ll mid= (start+end)/2;
      if(index>mid){
        update(arr,tree,mid+1,end,2*treeindex+1,index,value);
      }
      update(arr,tree,start,mid,2*treeindex,index,value);
      tree[treeindex]= max(tree[2*treeindex],tree[2*treeindex+1]);
}
ll query(ll *tree,ll start,ll end,ll left,ll right,ll treeindex){
        if(start>right||end<left){
           return mini;
        }
        if(start>=left&&end<=right){
          return tree[treeindex];
        }
        ll mid= (start+end)/2;
        ll ans1= query(tree,start,mid,left,right,2*treeindex);
        ll ans2= query(tree,mid+1,end,left,right,2*treeindex+1);
        return max(ans1,ans2);
}

void maxi(){
  ll n, q;
	cin>>n>>q;
	vector<ll>arr(n);
	for(ll i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	ll *tree=new ll [4*n];
	create(arr, tree, 0, n - 1, 1);
	//at this poll of time i have my tree with me.
	while(q--)
	{
		char query_type;
		cin>>query_type;
		if(query_type=='q')
		{
			ll l, r;
			cin>>l>>r;
			cout<<query(tree, 0, n-1, l-1, r-1,1)<<endl;
		}
		else
		{
			ll x, y;
			cin>>x>>y;
			//we need to update arr[x]=y;
			update(arr, tree, 0, n - 1, 1, x-1, y);
		}
	}

   
} 
  


int main()
{
    kuldeepyadav12
        ll t;
        t=1;
    // cin >> t;
    while (t--)
    {
       maxi();
    }

    return 0;
}

 
 
