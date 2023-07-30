// https://codeforces.com/contest/1850/problem/E

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
	int n  = 0;
	ll c = 0;
	cin >> n >> c;
	vector<int> nums;
	for (int i = 0; i < n; ++i)
	{
		int t = 0;
		cin >> t;
		nums.push_back(t);
	}
	ll front = 0;
	ll back = 1e9;
	ll mid = (back+front) / 2;
	while(1)
	{
		ll sum = 0;
		sum = 0;
		for (int i = 0; i < n; ++i)
		{
			sum += (nums[i] + mid + mid) * (nums[i] + mid + mid);
			if (sum > c)
			{
				break;
			}
		}
		if (sum == c)
		{
			break;
		}
		if (sum < c)
		{
			front = mid+1;
		}
		if (sum > c)
		{
			back = mid-1;
		}
		mid = (back+front) / 2;
	}
	cout << mid << endl;
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