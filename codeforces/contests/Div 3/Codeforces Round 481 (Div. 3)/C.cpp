// https://codeforces.com/contest/978/problem/C

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

int solve() {
	int n,m;
	cin>>n>>m;
	ll a[n+1];
	a[0]=0;
	for (int i = 1; i <= n; ++i)
	{
		cin>>a[i];
		a[i]+=a[i-1];
	}
	for (int i = 0; i < m; ++i)
	{
		ll b;
		cin>>b;
		
	}
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}