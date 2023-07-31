// http://codeforces.com/problemset/problem/104/A

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
	n -= 10;
	if (0 < n && n < 10)
	{
		cout << 4 << endl;
		return 0;
	}
	if (n == 10)
	{
		cout << 15 << endl;
		return 0;
	}
	if (n == 11)
	{
		cout << 4 << endl;
	}
	else
	{
		cout << 0 << endl;
	}
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}