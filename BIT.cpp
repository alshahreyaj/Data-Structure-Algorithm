#include<bits/stdc++.h>
using namespace std;

const int N = 100009;

int a[N];

void update(int indx, int val, int n)
{
    while(indx <= n)
    {
        a[indx] += val;
        indx += indx & (-indx);
    }
}

int cnt(int indx)
{
    int ans = 0;
    while(indx > 0)
    {
        ans += a[indx];
        indx -= indx & (-indx);
    }
    return ans;
}

int main()
{
    int n, q;
    cin >> n >> q;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        update(i, x, n);
    }
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        cout << cnt(r) - cnt(l-1) << endl;
    }
}
