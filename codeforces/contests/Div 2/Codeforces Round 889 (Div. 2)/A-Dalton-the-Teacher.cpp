// https://codeforces.com/contest/1855/problem/A

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
	ll count = 0;
	for (int i = 0; i < n; ++i)
	{
		ll t = 0;
		cin >> t;
		if (t==i+1)
		{
			count++;
		}
	}
	if (count%2==0)
	{
		cout << count / 2 << endl;
	}
	else
	{
		cout << (count + 1) / 2 << endl;
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