// https://codeforces.com/problemset/problem/279/B

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
	int n,t;
	cin >> n >> t;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int ans = 0, sum = 0;
	int i = 0, j = 0;
	while(j < n && i < n) { 
		while (sum + a[j] <= t && j < n) {
			sum += a[j];
			j++;
		}
		ans = max(ans, j-i);
		sum += a[j];
		j++;
		while(sum > t) {
			sum -= a[i];
			i++;
		}
	}
	cout << ans << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}