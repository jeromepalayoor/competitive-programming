// https://cses.fi/problemset/task/1069

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
	int mx = 1;
	int cnt = 1;
	string s;
	cin >> s;
	for (int i = 1; i < sz(s); ++i)
	{
		if (s[i] == s[i-1])
		{
			cnt++;
		}
		else
		{
			mx = max(mx, cnt);
			cnt = 1;
		}
	}
	cout << max(mx, cnt) << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}