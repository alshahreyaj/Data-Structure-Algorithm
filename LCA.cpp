#include<bits/stdc++.h>
using namespace std;
#define N 30009
#define pb push_back
int a[N], st[N], en[N], par[N][20], tmm, lvl[N], tree[N * 4], lz[N * 4];
vector<int> v[N];

void dfs(int n, int p)
{
	lvl[n] = p == -1? 1 : (lvl[p] + 1);
    st[n] = ++tmm;
    par[n][0] = p;
    for(int i = 1; i < 20; i++)
	{
        if(par[n][i - 1] != -1) par[n][i] = par[par[n][i - 1]][i - 1];
	}
	for(int x: v[n])
	{
		if(x != p) dfs(x, n);
	}
	en[n] = tmm;
}

int lca(int x, int y)
{
	if(lvl[x] < lvl[y]) swap(x, y);
	for(int i = 19; i >=0; i--)
	{
		if(lvl[x] - (1 << i) >= lvl[y])
		{
			x = par[x][i];
		}
	}
	if(x == y) return x;
	for(int i = 19; i >= 0; i--)
	{
		if(par[x][i] != -1 && par[x][i] != par[y][i])
		{
			x = par[x][i];
			y = par[y][i];
		}
	}
	return par[x][0];
}
