
/*
	ॐ 
		JAI SHREE RAM 
						ॐ
*/

//Written by Bhuwanesh Nainwal
#include <bits/stdc++.h>

typedef long long int ll;

#define fast            	ios_base::sync_with_stdio(false) , cin.tie(NULL) , cout.tie(NULL)
#define vi              	vector<ll>
#define vvi             	vector<vector<int>>
#define vpi             	vector<pair<ll,ll>>
#define vs					vector<string>
#define pb              	push_back
#define mii             	map<ll , ll>
#define msi             	map<string , ll>
#define mci             	map<char , ll>
#define umii             	unordered_map<ll , ll>
#define umsi             	unordered_map<string , ll>
#define umci             	unordered_map<char , ll>
#define all(x)				auto it = x.begin() ; it != x.end() ; it++ 			
#define vc              	vector<char>  
#define vs              	vector<string>
#define seti            	set<ll>
#define setc            	set<char>
#define sets            	set<string>     
#define dqi            		deque<ll>
#define dqc            		deque<char>
#define dqs            		deque<string>
#define null            	NULL
#define fr              	first
#define sc              	second
#define sbit				__builtin_popcount
#define lz					__builtin_clz
#define tz					__builtin_ctz
#define max3(a, b, c)   	max(a, max(b, c))
#define min3(a, b, c)   	min(a, min(b, c))

using namespace std;

const ll M = 1e9 + 7;
const ll INF = 1e9;
const ll LINF = 1e18;
const ll N = 1e4;
const ll prc = 1e-9;  // Check for precision error in double

/* Choosing r items out of n but don't forget to declare dp and memset it */

// ll dp[N][N];	//Memset it inside main function

// ll combination(int n , int r )
// {
//     if(r == 0 || n == r)
//         return 1;
//     if(dp[n][r] != -1)
//         return dp[n][r];
//     dp[n][r] = combination(n - 1 , r) + combination(n - 1 , r - 1) ;
//     return dp[n][r];
// }

/* End */

/* Depth first search */


// vi adjacency[N];		//Declare them dynamically inside the main function for more than one test cases like new vi [n] and new ll [n]()
// vi visited(N);

// void dfs(ll i)
// {
// 	visited[i] = 1;

// 	for(ll j = 0 ; j < adjacency[i].size() ; j++)
// 	{
// 		if(visited[adjacency[i][j]] == 0)
// 			dfs(adjacency[i][j]);
// 	}
// }

/* End */

/* Breadth first search */

// vi adjacency[N];
// vi visited(N);
// queue<ll> q;

// void bfs(ll k)
// {
// 	//process vertex

// 	visited[k] = 1;
// 	q.push(k);
	
// 	while(!q.empty())
// 	{
// 		ll i = q.front();
// 		q.pop();
		// for(ll j = 0 ; j < adjacency[i].size() ; j++)
// 		{
// 			if(visited[adjacency[i][j]] == 0)
// 			{
// 				//process vertex
				
// 				visited[adjacency[i][j]] = 1;
// 				q.push(adjacency[i][j]);			
// 			}
// 		}
// 	}
// }




/* End */

/* Divisors of a number */

// void divisors(ll n)
// {
// 	   for(ll i = 1 ; i <= sqrt(n) ; i++)
//     {
//         if(n % i == 0)
//         {
//             if(i != n / i)
//             {
//                 cout<<i<<n / i;
//             }
//             else
//                 cout<<i;
//         }
//     }
// }

/* End */ 

/* Binary exponentiation */

// ll binpow(ll a , ll n)
// {
//  
//  ll res = 1;
	
// 	while(n)
// 	{
// 		if(n % 2 != 0)
// 			res = res * a;

// 		a = a * a;
// 		n = n / 2; 
// 	}

// 	return res;
// }

/* End */

/* Greatest comman divisor (Euclid) */

// ll gcd(ll a , ll b)
// {
//     if(b == 0)
//         return a;
    
//     return gcd(b , a % b);
// }

/* End */

/* Greatest comman divisior (Extended Euclid) */

// ll gcd(ll a , ll b , ll &x , ll &y)
// {
// 		if(b == 0)
// 		{
// 			x = 1;
// 			y = 0;
// 			return a;
// 		}

// 		ll x1 , y1;

// 		ll g = gcd(b , a % b , x1 , y1);
// 		x = y1;
// 		y = x1 - (a / b) * y1;

// 		return g;
// }

/* End */

/* Prime factorisation */

// void pfact(ll n)
// {


//     while(n % 2 == 0)
//     {
// 		cout<<"2"<<" ";
//         n /= 2;
//     }
    
//     for (ll i = 3; i <= sqrt(n); i = i + 2)  
//     {  
//         while (n % i == 0) 
//         {
// 			cout<<i<<" ";
//             n = n / i;  
//         }
//     }  

//     if(n > 2)
//         cout<<n<<" ";
// }

/* End */


/* Disjoint Set Union */



// vi parent(N);
// vi depth(N);


// void make_set(ll child)
// {
//     parent[child] = child;
//     depth[child] = 0;
// }

// ll find_set(ll child)
// {
//     if(child == parent[child])
//         return child;
    
//     ll result = find_set(parent[child]);

//     parent[child] = result;
//     return result;
// }

// void union_set(ll child1 , ll child2)
// {
//     ll parent1 = find_set(child1);
//     ll parent2 = find_set(child2);
//     if(parent1 != parent2)
//     {
//         if(depth[child1] < depth[child2])
//             swap(child1 , child2);
//         parent[child2] = child1;

//         if(depth[child1] == depth[child2])
//             depth[child1]++;
//     }
// }

/* End */

/* Factorial of a number */

// ll fac(ll n)
// {
//     ll ans = 1;
//     for(ll i = 1 ; i <= n ; i++)
//         ans *= i;
//     return ans;
// }

/* End */

/* Euler totient function */

/* O(sqrt(n)) */

// ll phi(ll n)
// {
// 	ll res = n;

// 	for(ll i = 2 ; i * i <= n ; i++)
// 	{
// 		if(n % i == 0)
// 		{
// 			while(n % i == 0)
// 			{
// 				n /= 2;
// 			}
// 			res -= res / i;
// 		}
// 	}
// 	if(n > 1)
// 		res -= res / n;

// 	return res;
// }


/* O(n log log n) for all phi 1 => n , based on sieve */

// vi phi(ll n)
// {
// 	vi p(n + 1);

// 	for(ll i = 0 ; i <= n ; i++)
// 		p[i] = i;
	
// 	for(ll i = 2 ; i <= n ; i++)
// 	{
// 		if(p[i] == i)
// 		{
// 			for(ll j = i ; j < n ; j += i)
// 				p[j] -= p[j] / i;
// 		}
// 	}
// 	return p;
// }

/* O(n log n) based on division  sum property */

// vi phi(ll n)
// {
// 	vi p(n + 1);
// 	p[0] = 0;
// 	p[1] = 1;
// 	for(ll i = 2 ; i <= n ; i++)
// 		p[i] = i - 1;

// 	for(ll i = 2 ; i <= n ; i++)
// 	{
// 		for(ll j = i * 2 ; j <= n ; j += i)
// 			p[j] -= p[i];
// 	}
// 	return p;
// }

/* End */


/* End */

//Lazy propagation

//Updating a node

// void upd(ll ind , ll l , ll r , ll val)
// {
// 	lazy[ind] += val;

// 	seg[ind] += (r - l + 1) * val;
// }

// void shift(ll ind , ll l , ll r)
// {
// 	ll mid = (l + r) / 2;

// 	upd(2 * ind + 1 , l , mid , lazy[ind]);
// 	upd(2 * ind + 2 , mid + 1 , r , lazy[ind]);

// 	lazy[ind] = 0;
// }

// void range_update(ll ind , ll x , ll y , ll l , ll r , ll val)
// {
// 	if(x > r || y < l)
// 		return;

// 	if(x <= l && r <= y)
// 	{
// 		upd(ind , l , r , val);
// 		return;
// 	}

// 	ll mid = (l + r) / 2;

// 	shift(ind , l , r);

// 	range_update(2 * ind + 1 , x , y , l , mid , val);
// 	range_update(2 * ind + 2 , x , y , mid + 1 , r , val);

// 	seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2]; 
// }

// ll sum_query(ll ind , ll x , ll y , ll l , ll r)
// {
// 	if(x > r || l > y)
// 		return 0;
	
// 	if(l >= x && r <= y)
// 		return seg[ind];

// 	shift(ind , l , r);

// 	ll mid = (l + r) / 2;

// 	return sum_query(2 * ind + 1 , x , y , l , mid) + sum_query(2 * ind + 2 , x , y , mid + 1 , r);

// }


/* End */

/* 
-----------------------------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------------------------
								Do not dare to touch before this 
-----------------------------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------------------------

*/



void solve()
{
	ll n;
	
	cin >> n;

	vi a(n);
	vi b(n);
	vi c(n);


	for(auto &val : c)
		cin >> val;

	for(auto &val : a)
		cin >> val;

	for(auto &val : b)
	{
		cin >> val;
	}


	ll dp[n] = {0};

		
	ll maxi = 0;

	for(ll i = 1 ; i < n ; i++)
	{
		if(a[i] - b[i] == 0)
			dp[i] = c[i] + 1;
		else
			dp[i] = c[i] + 1 + max(abs(a[i] - b[i]) , dp[i - 1] - abs(a[i] - b[i]));
		maxi = max(dp[i] , maxi);
	}
	
	// cout << dp[n - 1] <<"\n";
	cout << maxi << "\n";
}	


int main()
{
	fast;
	ll T;
	// T = 1;
	cin>>T;

	while(T--)
	{
		solve();
	}

	return 0;
}