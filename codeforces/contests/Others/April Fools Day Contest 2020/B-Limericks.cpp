// https://codeforces.com/contest/1331/problem/B

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
	for (int i = 2; i <= sqrt(a); ++i)
	{
		if (a%i==0)
		{
			cout << i << a/i << endl;
			return 0;
		}
	}
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}