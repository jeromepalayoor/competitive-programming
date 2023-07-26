// https://codeforces.com/contest/1850/problem/D

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
	ll n, k = 0;
	cin >> n >> k;
	vector<ll> nums;
	for (int i = 0; i < n; ++i)
	{
		ll temp = 0;
		cin >> temp;
		nums.push_back(temp);
	}
	if (n==1)
	{
		cout << 0 << endl;
		return 0;
	}
	sort(nums.begin(), nums.end());
	ll max = 0;
	ll count = 0;
	for (int i = 0; i < n-1; i++)
	{
		if (nums[i+1]-nums[i] <= k)
		{
			
			count++;
			if(i == n-2) count++;
		}
		else
		{
			count++;
			if (count > max)
			{
				max = count;
			}
			count = 0;
		}
	}
	if (count > max)
	{
		max = count;
	}
	cout << n - max << endl;
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