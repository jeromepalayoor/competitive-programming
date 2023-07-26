// https://codeforces.com/contest/1850/problem/A

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
	for (int i = 0; i < n; ++i)
	{
		int a = 0;
		int b = 0;
		int c = 0;
		cin >> a >> b >> c;
		if (a+b>=10 || a+c>=10 || b+c >= 10)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}