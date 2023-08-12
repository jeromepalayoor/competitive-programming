// https://codeforces.com/contest/1859/problem/B

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
	int n=0;cin>>n;
	int f=1e9,s=1e9;
	ll ss=0;
	for (int i = 0; i < n; ++i)
	{
		int m=0;cin>>m;
		int a[m];
		for (int j = 0; j < m; ++j)
		{
			cin>>a[j];
		}
		sort(a,a+m);
		f=min(f,a[0]);
		s=min(s,a[1]);
		ss+=a[1];
	}
	cout<<ss-s+f<<endl;
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