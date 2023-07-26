// https://codeforces.com/contest/1851/problem/A

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
	int n, m, k, H, count = 0;
	cin >> n >> m >> k >> H;
	for (int i = 0; i < n; ++i)
	{
		int temp = 0;
		cin >> temp;
		int diff = abs(temp - H);
		if (diff%k == 0)
		{
			if (diff/k < m && temp != H)
			{
				count++;
			}
		}
	}
	cout << count << endl;
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