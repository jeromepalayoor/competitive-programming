// http://codeforces.com/problemset/problem/450/A

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
	if (vec1[2] == vec2[2]){
		if (vec1[0] == vec2[0])
		{
			return vec1[1] > vec2[1];
		}
		return vec1[0] > vec2[0];
	}
	else
	{
		return vec1[2] > vec2[2];
	}
}

int solve() {
	int n=0,m=0;
	cin >> n >> m;
	vector<vector<int>> a;
	for (int i = 0; i < n; ++i)
	{
		int t = 0, c = 0;
		cin >> t;
		while(t>0)
		{
			t -= m;
			c++;
		}
		a.push_back({i,t,c});
	}
	sort(a.begin(), a.end(), comp);
	cout << a[0][0]+1 << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}