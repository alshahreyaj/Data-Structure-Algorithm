///----------------------///
///---Code Written by----///
///-----Al-Shahreyaj-----///
///----------------------///

///PRAGMA
//#pragma comment(linker, "/stack:200000000")
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma GCC optimize("unroll-loops")

#include<bits/stdc++.h>

///PBDS
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;

//PBDS_SET
//Index of Value - .order_of_key()
//Value at Index - .find_by_order()
//typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds_set; 
//typedef tree<int, null_type, lessorequal<int>, rb_tree_tag,tree_order_statistics_node_update> pbds_multiset; 

#define mem(a, x) memset(a, x, sizeof(a))
#define MP make_air
#define inf 1e8
#define INF 1e18
#define CP(x) printf("Case %d: ", x);
#define unq(v) v.erase(unique(all(v)),v.end())
#define one(x) __builtin_popcount(x)
#define onel(x) __builtin_popcountll(x)
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int,int>
#define pil pair<int,ll>
#define pll pair<ll,ll>
#define matrix vector<vector<ll> >
#define F first
#define S second
#define pb push_back
#define pq priority_queue
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()
#define INT ini()
#define LONG inl()
#define M 10000007
#define N 100005

int ini(){int x;scanf("%d",&x);return x;}
ll inl(){ll x;scanf("%lld",&x);return x;}



ll f(int i, int j)
{
  //Calculation 
}


int main()
{
  ll ans = LLONG_MAX;
  int lo = 1, hi = 1e6;
  while(lo + 5 <= hi) 
  {
    int mid1 = (lo + lo + hi) / 3;
    int mid2 = (lo + hi + hi) / 3;
    ll y1 = f(mid1), y2 = f(mid2);
    if(y1 <= y2) ans = min(ans, y1), hi = mid2 - 1;
    else ans = min(ans, y2), lo = mid1 + 1;
  }
  for(int i = lo; i <= hi; i++) ans = min(ans, f(i));
  cout << ans << endl;
	return 0;
}
