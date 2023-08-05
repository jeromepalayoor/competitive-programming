// https://codeforces.com/problemset/problem/148/A

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
	int k, l, m, n, d, c = 0;
	cin >> k >> l >> m >> n >> d;
	for (int i = 1; i <= d; ++i)
	{
		if (i%k==0)
		{
			c++;
			continue;
		}
		else
		{
			if (i%l==0)
			{
				c++;
				continue;
			}
			else
			{
				if (i%m==0)
				{
					c++;
					continue;
				}
				else
				{
					if (i%n==0)
					{
						c++;
						continue;
					}
				}
			}
		}
		
	}
	cout << c << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}