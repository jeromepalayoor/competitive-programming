// https://codeforces.com/problemset/problem/492/B

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
	int n, l;
	cin >> n >> l;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];	
	}
	sort(a,a+n);
	int mx = max(a[0],l-a[n-1])*2;
	for (int i = 0; i < n-1; ++i)
	{
		mx = max(mx, a[i+1]-a[i]);
	}
	cout.precision(20);
	cout << fixed << mx/2.0 << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}