// https://www.eolymp.com/en/contests/34160/problems/401009

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
	const unsigned int M = 1000000007;
	ll ppl = 0;
	cin >> ppl;
	ll count[ppl+1];
	count[0] = 1;
	count[1] = 1;
	for (int i = 2; i <= ppl; i++)
	{
		count[i] = count[i-1] + (i-1) * count[i-2];
	}
	cout << count[ppl] % M << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}