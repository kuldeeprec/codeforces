#include <bits/stdc++.h>
using namespace std;
const int h = 1e5 + 5;
const int mod = 1e9 + 7;
const int N=2010;
#define ll long long
#define sandeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int MAX = 1000001;
//  ll printDivisors(ll n,ll b)
// {    ll count=0;
//     // Note that this loop runs till square root
//     for (ll i=1; i<=sqrt(n); i++)
//     {
//         if (n%i == 0)
//         {
//             // If divisors are equal, print only one
//             if (n/i == i){
//               if (n/i<b&&i<b)
//               {
//                   count++;
//               }
              
//             }
                
 
//             else {// Otherwise print both
//                 printf("%d %d ", i, n/i);
//                 if(i<b){
//                     count++;
//                 }
//                 if(n/i<b){
//                     count++;
//                 }
//                 }
//         }
//     }
//     return count;
// }
// // array to store prime factors
// ll factor[MAX] = { 0 };
 
// // function to generate all prime factors
// // of numbers from 1 to 10^6
// void generatePrimeFactors()
// {
//     factor[1] = 1;
 
//     // Initializes all the positions with their value.
//     for (ll i = 2; i < MAX; i++)
//         factor[i] = i;
 
//     // Initializes all multiples of 2 with 2
//     for (ll i = 4; i < MAX; i += 2)
//         factor[i] = 2;
 
//     // A modified version of Sieve of Eratosthenes to
//     // store the smallest prime factor that divides
//     // every number.
//     for (ll i = 3; i * i < MAX; i++) {
//         // check if it has no prime factor.
//         if (factor[i] == i) {
//             // Initializes of j starting from i*i
//             for (ll j = i * i; j < MAX; j += i) {
//                 // if it has no prime factor before, then
//                 // stores the smallest prime divisor
//                 if (factor[j] == j)
//                     factor[j] = i;
//             }
//         }
//     }
// }
 
// // function to calculate number of factors
// ll calculateNoOFactors(ll n)
// {
//     if (n == 1)
//         return 1;
 
//     ll ans = 1;
 
//     // stores the smallest prime number
//     // that divides n
//     ll dup = factor[n];
 
//     // stores the count of number of times
//     // a prime number divides n.
//     ll c = 1;
 
//     // reduces to the next number after prime
//     // factorization of n
//     ll j = n / factor[n];
 
//     // false when prime factorization is done
//     while (j != 1) {
//         // if the same prime number is dividing n,
//         // then we increase the count
//         if (factor[j] == dup)
//             c += 1;
 
//         /* if its a new prime factor that is factorizing n,
//            then we again set c=1 and change dup to the new
//            prime factor, and apply the formula explained
//            above. */
//         else {
//             dup = factor[j];
//             ans = ans * (c + 1);
//             c = 1;
//         }
 
//         // prime factorizes a number
//         j = j / factor[j];
//     }
 
//     // for the last prime factor
//     ans = ans * (c + 1);
 
//     return ans;
// }

// ll ex(ll x,ll y){
//     ll ans=1;
//     x=x%mod;
//     if (x==0)
//     {
//         return 0;
//     }
//     while (y>0)
//     {
//         if(y&1)
//             ans=(ans*x)%mod;
        
        
        
//         y=y>>1;
//         x=(x*x)%mod;
        
        
//     }
    
//     return ans;
// }
void maxi(){
// ll x,a,b;
// cin>>x>>a>>b;
// ll k=(a+(100-x)*b)*10;
// cout<<k<<endl;
//second
// ll n,k,x,flag=0;
// cin>>n>>x>>k;
// if(x%k==0){
//     flag=1;
// }
// if((n+1+k-x)%k==0){
//     flag=1;
// }
// if (flag==1)
// {
//     cout<<"YES"<<endl;
// }
// else{
//     cout<<"NO"<<endl;
// }
// //third
// ll n,k,count=0;
// cin>>n;
// // count=1LL << n-1;
// // count=count%mod;
// count=ex(2,n-1);
// cout<<count<<endl;
//fourth 
// char a[3][3];
// char r1,r2,r3,c1,c2,c3;
// int b=0,c=0,d=0,e=0,countx=0,counto=0;
// for (ll i = 0; i < 3; i++)
// {
//     for (ll j = 0; j < 3; j++)
//     {
//       cin>>a[i][j];
//       if(a[i][j]=='_'){
//         e++;
//       }
//       if(a[i][j]=='X'){
//         countx++;
//       }
//       if(a[i][j]=='O'){
//         counto++;
//       }
//     }
    
// }
// for (ll i = 0; i < 3; i++)
// {
//     if (a[i][0]==a[i][1]&&a[i][1]==a[i][2])
//     {
//         b++;
//     }
//     if (a[0][i]==a[1][i]&&a[1][i]==a[2][i])
//     {
//         c++;
//     }
    
    
// }
// if (a[0][0]==a[1][1]&&a[1][1]==a[2][2])
//     {
//         d++;
//     }
//     if (a[0][2]==a[1][1]&&a[1][1]==a[2][0])
//     {
//         d++;
//     }
// if(e==0){
//     if((countx!=5&&counto!=4)||b>1||c>1){
//       cout<<"3"<<endl;
//       return;
//     }
//     else
//     {
//         cout<<"1"<<endl;
//         return;
//     }
    
// }
// if(e>0){
//     if((d==0&&c==0&&b==0)&&(countx-counto==0||countx-counto==1)){
//         cout<<"2"<<endl;
//         return;
//     }
//     if(b>1||c>1||(countx-counto>1)){
//       cout<<"3"<<endl;
//       return;
//     }
//     if((d>0||c==1||b==1)&&(countx-counto==0||countx-counto==1)){
//         cout<<"1"<<endl;
//       return;
//     }
// }

// if(pos(b,c,d)){
//     cout<<"3"<<endl;
//     return;
// }
// if( !pos(b,c,d)&&b==0&&c==0&&d==0&&e==0||!pos(b,c,d)&&b==1&&c==0&&d==0||!pos(b,c,d)&&b==0&&c==1&&d==0||!pos(b,c,d)&&b==0&&c==0&&d==1){
//     cout<<"1"<<endl;
//     return;
// }
//  if(!pos(b,c,d)&&e==1){
//     cout<<"2"<<endl;
//     return;
// }
ll n,m,count=0;
cin>>n>>m;
for (ll i = 1; i <n; i++)
{
    for(ll j=i+1;j<=n;j++){
        if(((m%i)%j)==((m%j)%i)){
            cout<<"{"<<i<<","<<j<<"}"<<" ";
            count++;
        }
    }
}
cout<<count<<endl;
// ll n,m,count=0,y,z;
// cin>>n>>m;
// for (ll i = n; i >=2; i--)
// {
//     y=m%i;
//     z=m-y;
//     count+=printDivisors( z,i);
    
    
//     }

// cout<<count<<endl;
//last 
// ll k,d,sum=0;
// cin>>k;
// vector<ll>v;
// for (ll i = 1; i <=2*k+1; i++)
// {
//     d=k+i*i;
//     v.push_back(d);
// }
// for (ll i = 1; i <=2*k; i++)
// {
//     sum+=__gcd(v[i],v[i+1]);
    
// }
// cout<<sum<<endl;
// ll n,m;
// cin>>n>>m;
// ll count=0;
// vector<ll>v(n+1,1);
// for (ll i = 2; i <=n ; i++)
// {
//     ll x=m%i;
//     count+=v[x];
//     for (ll j = x; j <=n ; j+=i)
//     {
//         v[j]++;
//     }
    

// }


 }
 
 
    
  
    int main()
    {
        sandeepyadav12
    
        ll t;
         cin>>t;
         while(t--)
            maxi();
        
        return 0;
    }