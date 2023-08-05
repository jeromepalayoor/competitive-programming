// https://codeforces.com/problemset/problem/248/A

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
	int l = 0;
	int r = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int s,t = 0;
		cin >> s;
		cin >> t;
		l += s;
		r += t;
	}
	cout << min(n-l,l) + min(n-r,r) << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}