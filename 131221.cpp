//kuldeep yadav,Rajkiya engineering college sonbhadra//
#include <bits/stdc++.h>
using namespace std;
#define kuldeepyadav12            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define pb push_back
#define pf push_front
#define Pb pop_back
#define mod (ll)1000000007
const ll N=2e5+5;
ll ans=0;
 ll partition(ll arr[], ll low, ll high,ll max_el){
    ll left,right,pivot=arr[high];
    left=low;
    right=high;
    if(pivot==max_el){
        return INT_MAX;
    }
    ans++;
    while(left<right){
        while(arr[left]<=pivot){
            left++;
        }
        while(arr[right]>pivot){
            right--;
    }
    if(left<right){
        swap(arr[left],arr[right]);
    }
}
  arr[high]=arr[right];//low is choosen as pivot so assign right element that
    arr[right]=pivot;//right is now partion sho place pivot in right
    return right;// return right
}
void quicksort(ll arr[],ll low,ll high,ll max_el){
    ll pivot;
    if(high>low){
    pivot= partition(arr,low,high,max_el);
    quicksort(arr,pivot+1,high,max_el);}

}

void maxi(){
      ll n;
      cin>>n;
      ll a[n];
      ll max_el=INT_MIN;
      for(ll i=0;i<n;i++){
           cin>>a[i];
          if(a[i]>max_el){
              max_el=a[i];
          }
      }
      quicksort(a,0,n-1,max_el);
      cout<<ans/2+ans%2<<endl;
      ans=0;
    //   ll height=1;
    //   if(a[0]==1){
    //       height++;
    //   }
    //   for(ll i=1;i<n;i++){
    //       if(a[i-1]==0&&a[i]==1){
    //         height++;
    //       }
    //       else if(a[i-1]==1&&a[i]==1){
    //         height+=5;
    //       }
    //       else if(a[i-1]==0&&a[i]==0){
    //         height=-1;
    //         break;
    //       }
    //   }
    //   cout<<height<<endl;

      }

int main()
{
    kuldeepyadav12
    ll t;
    cin >> t;
    while (t--)
    {
      maxi();
    }
 
    return 0;
}
