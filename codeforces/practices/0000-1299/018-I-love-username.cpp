// https://codeforces.com/problemset/problem/155/A

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
	int x = 0;
	int y = 0;
	int c = 0;
	cin >> n;
	cin >> x;
	y = x;
	for (int i = 0; i < n-1; ++i)
	{
		int t = 0;
		cin >> t;
		if (t<x)
		{
			x=t;
			c++;
		}
		if (t>y)
		{
			y=t;
			c++;
		}
	}
	cout << c << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}