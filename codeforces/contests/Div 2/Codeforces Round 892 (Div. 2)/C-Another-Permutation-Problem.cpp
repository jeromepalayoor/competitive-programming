// https://codeforces.com/contest/1859/problem/C

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
	ll s=0;
	for (int i = 1; i <= n; ++i)
	{
		ll ss=0;
		int m=0;
		for (int j = 0; j < i; ++j)
		{
			ss+=j*j;
			m=max(m,j*j);
		}
		for (int j = 0; j <= n-i ; ++j)
		{
			ss+=(i+j)*(n-j);
			m=max(m,(i+j)*(n-j));
		}
		ss-=m;
		s=max(s,ss);
	}
	cout<<s<<endl;
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