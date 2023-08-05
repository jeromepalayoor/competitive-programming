// https://codeforces.com/problemset/problem/200/B

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
	double sum = 0;
	double count = 0;
	for (int i = 0; i < n; ++i)
	{
		int temp = 0;
		cin >> temp;
		sum += temp;
		count += 1;
	}
	double avg = sum / count;
	cout << avg << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}