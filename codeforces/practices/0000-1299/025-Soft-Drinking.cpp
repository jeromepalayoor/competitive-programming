// https://codeforces.com/problemset/problem/151/A

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
	int n, k, l, c, d, p, nl, np = 0;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int count = 0;
	l *= k;
	c *= d;
	for (int i = 0; i < c/n; ++i)
	{
		if (l>0 && l - n*nl >= 0 && p - n*np >= 0)
		{
			l -= n*nl;
			p -= n*np;
			count++;
		}
		else
		{
			break;
		}
	}
	cout << count << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}