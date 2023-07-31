// http://codeforces.com/problemset/problem/227/B

#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <cmath>
#include <array>
#include <vector>
#include <algorithm>
#define sz(a) ((int)((a).size()))
#define char unsigned char

using namespace std;

typedef long long ll;
typedef long double ld;

int solve() {
	ll n,m = 0;
	cin >> n;
	ll a[ll(1e5 + 3)];
	for (ll i = 0; i < n; ++i)
	{
		ll t = 0;
		cin >> t;
		a[t] = i+1;
	}
	cin >> m;
	ll x = 0;
	ll y = 0;
	for (ll i = 0; i < m; ++i)
	{
		ll t = 0;
		cin >> t;
		x += a[t];
		y += n-a[t]+1;
	}
	cout << x << " " << y << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}