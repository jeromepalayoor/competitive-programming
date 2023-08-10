// https://codeforces.com/problemset/problem/230/B

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

bool prime[1000001];

void sieve ()
{
	int i,j;
	prime[0] = prime[1] = true;

	for (i=4; i<1000001; i+=2)
		prime[i] = true;

	for (i=3; i*i<=1000001; i+=2)
		if (!prime[i])
			for (j=i*i; j<1000001; j+=2*i)
				prime[j] = true;
}

int solve() {
	ll n; cin >> n;
	ll s = sqrt(n);
	if (!prime[s]&&s*s==n)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int TET = 1e9;
	cin >> TET;
	sieve();
	for (int i = 1; i <= TET; i++) {
		if (solve()) {
			break;
		}
	}
}