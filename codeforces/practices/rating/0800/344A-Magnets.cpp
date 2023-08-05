// http://codeforces.com/contest/344/problem/A

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
	int n;
	cin >> n;
	int prev = 0;
	int grp = 1;
	bool y = true;
	cin>>prev;
	for (int i = 1; i < n; ++i)
	{
		int t = 0;
		cin >> t;
		if (t!=prev)
		{
			grp++;
			prev=t;
		}
	}
	cout<<grp<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}