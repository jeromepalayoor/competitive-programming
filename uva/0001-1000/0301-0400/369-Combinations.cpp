// https://onlinejudge.org/external/3/369.pdf

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

ll a[101][101];

int solve() {
	ll n=0,m=0;
	cin>>n>>m;
	if (n==0&&m==0)
		return 1;
	cout<<n<<" things taken "<<m<<" at a time is "<<a[n][m]<<" exactly."<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	a[1][1] = 1;
	a[1][0] = 1;
	for (int i = 2; i <= 100; i++) {
		a[i][0] = 1;
		for (int j = 1; j <= i; j++) {
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	int TET = 1e9;
	// cin >> TET;
	for (int i = 1; i <= TET; i++) {
		if (solve()) {
			break;
		}
	}
}