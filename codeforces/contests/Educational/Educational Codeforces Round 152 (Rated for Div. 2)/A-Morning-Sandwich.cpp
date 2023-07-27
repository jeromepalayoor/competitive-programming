// https://codeforces.com/contest/1849/problem/A

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
	int b, c, h = 0;
	cin >> b >> c >> h;
	if (c+h<b-1)
	{
		cout << c+h+c+h+1 << endl;
	}
	else
	{
		cout << 2*b-1 << endl;
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