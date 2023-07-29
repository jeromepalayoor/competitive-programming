// https://codeforces.com/contest/1851/problem/D

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
	ll sum = 0;
	vector<ll> nums;
	ll a = 0;
	cin >> a;
	sum += a;
	ll prev = a;
	ll curr = a;
	nums.push_back(a);
	for (int i = 0; i < n-1; ++i)
	{
		curr = 0;
		cin >> curr;
		nums.push_back(curr-prev);
		prev = curr;
		sum += curr;
	}
	ll missing = (n*(n-1))/2-curr;
	if (missing > n)
	{
		cout << "NO" << endl;
		return 0;
	}
	if (find(nums.begin(), nums.end(), missing) != nums.end())
	{
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
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