// https://codeforces.com/contest/1843/problem/B

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
	ll sum = 0;
	ll count = 0;
	ll open = false;
	cin >> n;
	for (ll i = 0; i < n; ++i)
	{
		ll temp = 0;
		cin >> temp;
		sum += abs(temp);
		if (temp < 0 && !open)
		{
			open = true;
			count++;
		}
		if (temp > 0)
		{
			open = false;
		}
	}
	cout << sum << " " << count << endl;
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