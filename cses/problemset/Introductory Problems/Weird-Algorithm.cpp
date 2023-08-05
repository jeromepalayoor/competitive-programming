// https://cses.fi/problemset/task/1068

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
	ll n;
	cin >> n;
	cout << n;
	while(n!=1)
	{
		if (n&1)
			n = 3*n + 1;
		else
			n /= 2;
		cout << " " << n;
	}
	cout << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}