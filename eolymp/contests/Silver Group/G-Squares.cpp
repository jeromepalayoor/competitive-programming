// https://www.eolymp.com/en/contests/34160/problems/401008

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
	vector<int> nums;
	for (int i = 0; i < n; ++i)
	{
		int temp = 0;
		cin >> temp;
		nums.push_back(temp);
	}
	sort(nums.begin(), nums.end());
	int i = 0;
	int count = 0;
	while(i<n-3)
	{
		if (nums[i] == nums[i+1] && nums[i] == nums[i+2] && nums[i] == nums[i+3])
		{
			count++;
			i += 4;
		}
		else
		{
			if (nums[i] == nums[i+1] && nums[i] == nums[i+2])
			{
				i += 3;
			}
			else
			{
				if (nums[i] == nums[i+1])
				{
					i += 2;
				}
				else
				{
					i++;
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}