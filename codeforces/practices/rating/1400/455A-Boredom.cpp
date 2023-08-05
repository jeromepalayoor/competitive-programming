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

bool comp(const vector<int>& vec1, const vector<int>& vec2){
	return vec1[0] > vec2[0];
}

int solve() {
	int n = 0;
	cin >> n;
	vector<vector<int>> a;
	for (int i = 0; i < n; ++i)
	{
		int t = 0; cin >> t;
		a.push_back({t,i});
	}
	sort(a.begin(), a.end(), comp);
	int s1, s2;
	vector<int> b, c;
	for (int i = 0; i < n; ++i)
	{
		if (!(find(b.begin(), b.end(), a[i][1]-1) != b.end())&&!(find(b.begin(), b.end(), a[i][1]+1) != b.end()))
		{
			b.push_back(a[i][1]);
			s1 += a[i][0];
		}
		if (!(find(c.begin(), c.end(), a[i+1][1]-1) != c.end())&&!(find(c.begin(), c.end(), a[i+1][1]+1) != c.end())&&i<n-1)
		{
			c.push_back(a[i+1][1]);
			s2 += a[i+1][0];
		}
	}
	cout << max(s1,s2) << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}