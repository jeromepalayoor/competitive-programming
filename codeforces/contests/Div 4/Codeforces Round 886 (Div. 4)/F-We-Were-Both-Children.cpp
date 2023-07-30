// https://codeforces.com/contest/1850/problem/F

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
	int n;
	cin >> n;
	vector<ll> cnt(n + 1, 0), mx(n + 1, 0);
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		if(x <= n)
		{
			cnt[x]++;
		}
	}
	for(int i = 1; i <= n; ++i) {
		for(int j = i; j <= n; j += i) mx[j] += cnt[i];
	}
	cout << *max_element(mx.begin(), mx.end()) << endl;
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