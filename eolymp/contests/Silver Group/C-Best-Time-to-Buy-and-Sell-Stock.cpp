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
	ll n;
	cin >> n;
	ll a[n];
	ll min = 0;
	ll profit = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
		else
		{
			if (a[i] - min > profit)
			{
				profit = a[i] - min;
			}
		}
	}
	cout << profit;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}