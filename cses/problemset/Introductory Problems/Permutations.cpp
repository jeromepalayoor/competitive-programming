// https://cses.fi/problemset/task/1070

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
	cin >> n;
	if (n==1)
	{
		cout << 1 << endl;
		return 0;
	}
	if (n <= 3)
	{
		cout << "NO SOLUTION" << endl;
		return 0;
	}
	if (n==4)
	{
		cout << "2 4 1 3" << endl;
		return 0;
	}
	for (int i = 1; i <= n; i+=2)
	{
		cout << i << " ";
	}
	for (int i = 2; i <= n; i+=2)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}