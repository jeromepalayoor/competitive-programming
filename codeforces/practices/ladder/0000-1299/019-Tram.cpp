// https://codeforces.com/problemset/problem/116/A

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
	int m = 0;
	int c = 0;
	for (int i = 0; i < n; ++i)
	{
		int a = 0;
		int b = 0;
		cin >> a;
		cin >> b;
		c -= a;
		c += b;
		if (c>m)
		{
			m=c;
		}
	}
	cout << m << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}