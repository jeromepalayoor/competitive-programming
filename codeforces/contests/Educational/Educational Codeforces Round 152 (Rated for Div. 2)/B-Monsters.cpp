// https://codeforces.com/contest/1849/problem/B

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

bool comp(const vector<ll>& vec1, const vector<ll>& vec2){
	if (vec1[1] == vec2[1])
	{
		return vec1[0] < vec2[0];
	}
	return vec1[1] > vec2[1];
}

int solve() {
	vector<vector<ll>> nums;
	ll n, k = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; ++i)
	{
		ll temp = 0;
		cin >> temp;
		ll count = 0;
		temp = temp % k;
		if (temp > 0)
		{
			temp -= k;
		}
		vector<ll> temp3;
		temp3.push_back(i);
		temp3.push_back(temp);
		nums.push_back(temp3);
	}
	sort(nums.begin(), nums.end(), comp);
	for (int i = 0; i < n-1; ++i)
	{
		cout << nums[i][0] << " ";
	}
	cout << nums[n-1][0] << endl;
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