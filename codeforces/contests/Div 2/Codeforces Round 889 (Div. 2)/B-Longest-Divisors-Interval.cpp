// https://codeforces.com/contest/1855/problem/B

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
	ll n = 0;
	cin >> n;
	for (int i = 1; i < 61; ++i)
	{
		if (n%i != 0)
		{
			cout << i-1 << endl;
			break;
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