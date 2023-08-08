// http://codeforces.com/contest/66/problem/B

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
	int n=0;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int m = 0;
	for (int i = 0; i < n; ++i)
	{
		int c=1;
		int prev=a[i];
		for (int j = i-1; j >= 0; --j)
		{
			if (a[j]<=prev)
			{
				c++;
				prev=a[j];
			}
			else
			{
				break;
			}
		}
		prev=a[i];
		for (int j = i+1; j < n; ++j)
		{
			if (a[j]<=prev)
			{
				c++;
				prev=a[j];
			}
			else
			{
				break;
			}
		}
		m=max(c,m);
	}
	cout<<m<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}