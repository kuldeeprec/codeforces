#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
struct node{
  ll firstm,secondm;
};

void create(vector<ll>&arr,node *tree,ll start,ll end,ll treeindex){
        if(start == end){
            tree[treeindex].firstm = arr[start];
            tree[treeindex].secondm = INT_MIN;
            return;
        }
        ll mid= (start+end)/2;
        create(arr,tree,start,mid,2*treeindex);
        create(arr,tree,mid+1,end,2*treeindex+1);
        tree[treeindex].firstm = max(tree[2*treeindex].firstm,tree[2*treeindex+1].firstm);
        tree[treeindex].secondm = min( max(tree[2*treeindex].firstm,tree[2*treeindex+1].secondm),max(tree[2*treeindex+1].firstm,tree[2*treeindex].secondm));
        return;
}
void update(vector<ll>&arr,node *tree,ll start,ll end,ll treeindex,ll index,ll value){
        if(start == end){
          tree[treeindex].firstm = value;  
          tree[treeindex].secondm = INT_MIN;
          arr[index]=value;
          return;
        }
        ll mid= (start+end)/2;
        if(index>mid){
            update(arr,tree,mid+1,end,2*treeindex+1,index,value);
        }
        update(arr,tree,start,mid,2*treeindex,index,value);
         tree[treeindex].firstm = max(tree[2*treeindex].firstm,tree[2*treeindex+1].firstm);
        tree[treeindex].secondm = min( max(tree[2*treeindex].firstm,tree[2*treeindex+1].secondm),max(tree[2*treeindex+1].firstm,tree[2*treeindex].secondm));
        return;
}
node query(node *tree,ll start,ll end,ll left,ll right,ll treeindex){
      if(start>right||end<left){
        node newnode;
        newnode.firstm =INT_MIN;
        newnode.secondm =INT_MIN;
        return newnode;
      }
      if(start>=left&&end<=right){
        return tree[treeindex];
      }
     ll mid= (start+end)/2;
    node temp1= query(tree,start,mid,left,right,2*treeindex);
    node temp2=   query(tree,mid+1,end,left,right,2*treeindex+1);
    node temp;
  temp.firstm = max(temp1.firstm,temp2.firstm);
 temp.secondm = min( max(temp1.firstm,temp2.secondm),max(temp2.firstm,temp1.secondm));
   
 return temp;

}

void maxi(){
    ll n,q;
	cin>>n>>q;
	vector<ll>arr(n);
	for(ll i=0; i<n; i++)
	{
		cin>>arr[i];
	}
  
	node *tree=new node [4*n];
	create(arr, tree, 0, n - 1, 1);
  // for(ll i=1; i<4*n; i++){
  //   cout<<tree[i].firstm<<" "<<tree[i].secondm<<endl;
  // }

	while(q--)
	{
		char query_type;
		cin>>query_type;
		if(query_type=='q')
		{
			ll l, r;
			cin>>l>>r;
      node result=query(tree, 0, n-1, l-1, r-1,1);
			cout<<result.firstm<<" "<<result.secondm<<endl;
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
int main(){
    ll t;
    t=1;
    // cin>>t;
    while(t--){
        maxi();
    }
    
}