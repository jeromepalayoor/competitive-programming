// https://codeforces.com/contest/171/problem/D

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
	int a;
	cin >> a;
	if (a==3)
		cout<<1<<endl;
	else if (a==1)
		cout<<2<<endl;
	else if (a==4)
		cout<<2<<endl;
	else if (a==2)
		cout<<3<<endl;
	else if (a==5)
		cout<<1<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}