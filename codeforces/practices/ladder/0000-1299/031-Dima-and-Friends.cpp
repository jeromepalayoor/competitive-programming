// http://codeforces.com/problemset/problem/272/A

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
	int n = 0, s = 0, a = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int t = 0; cin >> t;
		s += t;
	}
	for (int i = 1; i <= 5; i++)
	{
		if ((s+i)%(n+1)!=1)
		{
			a++;
		}
	}
	cout << a << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}