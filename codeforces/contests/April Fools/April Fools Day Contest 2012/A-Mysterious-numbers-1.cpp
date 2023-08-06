// https://codeforces.com/contest/171/problem/A

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
	ll a1=0,a2=0;
	cin>>a1>>a2;
	ll o = 0;
	while(a2)
	{
		o*=10;
		o+=a2%10;
		a2/=10;
	}
	cout<<a1+o<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}