// https://codeforces.com/contest/217/problem/A

#include <cstdio>
#include <iostream>
#include <cstdint>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <ctype.h>
#include <assert.h>
#include <algorithm>
#include <map>
#include <set>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <bitset>
#include <climits>

#define sz(a) ((int)((a).size()))
#define char unsigned char
#define mp make_pair
#define pb push_back

using namespace std;

typedef long long ll;
typedef long double ld;

int rt[100];
int sz[100];

void init(int n)
{
	for (int i = 0; i < n; ++i)
	{
		rt[i]=i;
		sz[i]=1;
	}
}

struct coord
{
	ll x,y,id;
};

ll find(ll x)
{
	return rt[x]==x ? rt[x] : rt[x] = find(rt[x]);
}

ll dsu(ll a, ll b, ll cnt)
{
	a = find(a);
	b = find(b);
	if (a==b)
	{
		return cnt;
	}
	if (sz[a]<sz[b])
	{
		swap(a,b);
	}
	sz[a]+=sz[b];
	rt[b]=a;
	cnt--;
	return cnt;
}

bool cmpx(coord a, coord b)
{
	return a.x < b.x;
}

bool cmpy(coord a, coord b)
{
	return a.y < b.y;
}

int solve() {
	int n=0;cin>>n;
	coord a[n];
	init(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i].x>>a[i].y;
		a[i].id=i;
	}
	ll cnt = n;
	sort(a,a+n,cmpx);
	for (int i = 0; i < n-1; ++i)
	{
		if (a[i].x==a[i+1].x)
		{
			cnt = dsu(a[i].id, a[i+1].id, cnt);
		}
	}
	sort(a,a+n,cmpy);
	for (int i = 0; i < n-1; ++i)
	{
		if (a[i].y==a[i+1].y)
		{
			cnt = dsu(a[i].id, a[i+1].id, cnt);
		}
	}
	cout<<cnt-1<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}