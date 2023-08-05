// http://codeforces.com/contest/791/problem/A

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
	int a=0,b=0;
	cin>>a>>b;
	int x=0;
	while(a<=b)
	{
		a*=3;
		b*=2;
		x++;
	}
	cout<<x<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}