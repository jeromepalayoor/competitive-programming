// https://codeforces.com/contest/1792/problem/B

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
	ll a1,a2,a3,a4;
	cin>>a1>>a2>>a3>>a4;
	if (a1==0)
		cout << 1 << endl;
	else
		cout << a1 + min(a2,a3)*2 + min(a1+1,abs(a2-a3)+a4) << endl;
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