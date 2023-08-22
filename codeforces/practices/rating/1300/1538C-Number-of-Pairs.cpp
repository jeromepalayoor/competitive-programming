// https://codeforces.com/problemset/problem/1538/C

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
	int n=0,l=0,r=0;
	cin>>n>>l>>r;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll t=0;
	for (int i = 0; i < n; ++i)
	{
		int x=a[i];
		int xl = l-x;
		int xr = r-x;
		if (xr<0)
		{
			continue;
		}
		auto llx = lower_bound(a,a+n,xl) - a;
		auto rrx = upper_bound(a,a+n,xr) - a;
		if (l<=2*a[i]&&2*a[i]<=r) {
			t--;
		}
		t+=rrx-llx;
	}
	cout<<t/2<<endl;
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