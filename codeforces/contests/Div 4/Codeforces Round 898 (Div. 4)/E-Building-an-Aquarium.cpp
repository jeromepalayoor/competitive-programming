// https://codeforces.com/contest/1873/problem/E

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
	int n,x;
	cin>>n>>x;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	ll l=0, h=2000000007;
	while(l<h)
	{
		ll m = l + (h-l+1)/2;
		ll t=0;
		for (int i = 0; i < n; ++i)
		{
			t+=max(0LL,m-a[i]);
		}
		if (t<= x)
		{
			l = m;
		}
		else
		{
			h = m - 1;
		}
	}
	cout<<l<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int TET = 1e9;
	cin >> TET;
	for (int i = 1; i <= TET; i++) {
		if (solve()) {
			break;
		}
	}
}