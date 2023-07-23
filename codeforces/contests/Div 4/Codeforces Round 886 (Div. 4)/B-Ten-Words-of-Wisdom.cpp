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
	int idx = 0;
	int mx = 0;
	int curr = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int a = 0;
		int b = 0;
		cin >> a;
		cin >> b;
		curr++;
		if (a < 11 && b > mx)
		{
			mx = b;
			idx = curr;
		}
	}
	cout << idx << endl;
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