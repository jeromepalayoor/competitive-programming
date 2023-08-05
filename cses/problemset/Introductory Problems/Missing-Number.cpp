// https://cses.fi/problemset/task/1083

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
	ll sum = 0;
	cin >> n;
	for (int i = 0; i < n-1; ++i)
	{
		int t = 0;
		cin >> t;
		sum += t;
	}
	cout << n*(n+1)/2 - sum << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}