// https://www.eolymp.com/en/contests/34160/problems/401003

#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <cmath>
#include <array>
#include <vector>
#define sz(a) ((int)((a).size()))
#define char unsigned char

using namespace std;

typedef long long ll;
typedef long double ld;

int solve() {
	ll n = 0;
	cin >> n;
	ll a[100];
	a[0] = 2;
	a[1] = 3;
	for (int i = 2; i < 100; i++)
	{
		a[i] = a[i-1] + a[i-2];
	}
	cout << a[n-1];
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}