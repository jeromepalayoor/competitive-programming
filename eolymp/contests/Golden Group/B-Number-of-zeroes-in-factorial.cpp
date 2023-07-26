// https://www.eolymp.com/en/contests/34161/problems/401018

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
	ll zeros = 0;
	while(n != 0)
	{
		zeros += n/5;
		n /= 5;
	}
	cout << zeros << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}