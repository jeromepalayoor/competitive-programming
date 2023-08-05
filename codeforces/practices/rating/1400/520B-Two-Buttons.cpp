// https://codeforces.com/problemset/problem/520/B

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
	int n = 0, m = 0;
	cin >> n >> m;
	if (m <= n)
	{
		cout << n-m << endl;
		return 0;
	}
	int c = 0;
	while(m!=n)
	{
		if (m & 1 or m < n)
		{
			m++;
			c++;
		}
		
		else
		{
			m /= 2;
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