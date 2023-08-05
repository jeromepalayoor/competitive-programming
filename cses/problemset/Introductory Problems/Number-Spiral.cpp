// https://cses.fi/problemset/task/1071

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
	ll x, y;
	cin >> y >> x;
	if (x >= y)
	{
		if (x&1)
		{
			cout << x*x - y + 1 << endl;
		}
		else
		{
			cout << (x-1)*(x-1) + y << endl;
		}
	}
	else
	{
		if (y%2==0)
		{
			cout << y*y - x + 1 << endl;
		}
		else
		{
			cout << (y-1)*(y-1) + x << endl;
		}
	}
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