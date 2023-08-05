// https://cses.fi/problemset/task/1094

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
	int n = 0;
	cin >> n;
	ll prev = 0;
	ll s = 0;
	for (int i = 0; i < n; ++i)
	{
		ll t = 0;
		cin >> t;
		if (t<prev)
		{
			s += prev-t;
		}
		prev = max(prev,t);
	}
	cout << s << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}