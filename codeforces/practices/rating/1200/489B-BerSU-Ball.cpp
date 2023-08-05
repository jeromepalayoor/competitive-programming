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
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int m;
	cin >> m;
	int b[m];
	for (int i = 0; i < m; ++i)
	{
		cin >> b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	int i = 0, j = 0, c = 0;
	while(i<n && j < m)
	{
		if (abs(a[i]-b[j])<=1)
		{
			j++;
			i++;
			c++;
		}
		else {
			if(a[i] < a[j]) i++;
			else j++;	
		}
	}
	
	if (i < n-1) {
		while(i < n) {
			if (abs(a[i]-b[j])<=1) {
				c++;
				break;
			}
		}
	} 
	
	else if (j < m - 1) {
		while(i < n) {
			if (abs(a[i]-b[j])<=1) {
				c++;
				break;
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