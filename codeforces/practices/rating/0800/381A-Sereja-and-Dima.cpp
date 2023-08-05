// https://codeforces.com/contest/381/problem/A

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
	int i=0,j=n-1;
	int s=0,d=0;
	while(i<j)
	{
		if (a[i]>a[j])
		{
			s+=a[i];
			i++;
		}
		else
		{
			s+=a[j];
			j--;
		}
		if (i<=j)
		{
			if (a[i]>a[j])
			{
				d+=a[i];
				i++;
			}
			else
			{
				d+=a[j];
				j--;
			}
		}
	}
	if (n&1)
	{
		s+=a[i];
	}
	cout<<s<<" "<<d<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}