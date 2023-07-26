// https://codeforces.com/contest/1851/problem/C

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
	int n, k = 0;
	cin >> n >> k;
	vector<int> nums;
	for (int i = 0; i < n; ++i)
	{
		int temp = 0;
		cin >> temp;
		nums.push_back(temp);
	}
	int fi = 0;
	int fcount = 0;
	while(fi < n)
	{
		if (nums[fi] == nums[0])
		{
			fcount++;
		}
		if (fcount == k)
		{
			break;
		}
		fi++;
	}
	if (fcount != k)
	{
		cout << "NO" << endl;
		return 0;
	}
	int bcount = 0;
	int bi = n-1;
	while(bi > -1)
	{
		if (nums[bi] == nums[n-1])
		{
			bcount++;
		}
		if (bcount == k)
		{
			break;
		}
		bi--;
	}
	if (bcount != k)
	{
		cout << "NO" << endl;
		return 0;
	}
	if (fi<=bi && nums[0] != nums[n-1])
	{
		cout << "YES" << endl;
	}
	else
	{
		if (nums[0] == nums[n-1])
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
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