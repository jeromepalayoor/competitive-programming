#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <cmath>
#include <array>
#include <vector>
#define sz(a) ((int)((a).size()))
#define char unsigned char

using namespace std;

typedef long long ll;
typedef long double ld;

int solve() {
	ll n = 0;
	cin >> n;
	ll sum = 0;
	while(n!=1)
	{
		sum += n;
		if (n%2 == 0)
		{
			n = n / 2;
		}
		else
		{
			n = (n - 1) / 2;
		}
	}
	cout << sum + 1<< endl;
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