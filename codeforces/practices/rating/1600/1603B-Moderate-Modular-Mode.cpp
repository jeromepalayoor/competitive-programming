// https://codeforces.com/contest/1603/problem/B

#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <cmath>
#include <array>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#define sz(a) ((int)((a).size()))
#define char unsigned char

using namespace std;

typedef long long ll;
typedef long double ld;

int solve() {
	ll x=0,y=0;cin>>x>>y;
	if (x>y)
	{
		cout<<x+y<<endl;
		return 0;
	}
	if (x==y)
	{
		cout<<x<<endl;
		return 0;
	}
	cout<<y-(y%x)/2<<endl;
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