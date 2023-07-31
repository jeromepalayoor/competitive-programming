// https://codeforces.com/contest/1331/problem/C

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
	int a;
	cin >> a;
	cout << (a&32)+((a&1)<<4)+((a<<1)&8)+((a>>1)&4)+(a&2)+((a>>4)&1) << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}