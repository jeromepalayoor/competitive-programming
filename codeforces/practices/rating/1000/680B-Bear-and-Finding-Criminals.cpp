// http://codeforces.com/contest/680/problem/B

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
	int n=0,a=0;
	cin>>n>>a;
	int t[n];
	int s=0;
	for (int i = 1; i <= n; ++i)
	{
		cin>>t[i];
	}
	if (a<=(n+1)/2)
	{
		for (int i = 1; i < a; ++i)
		{
			s+=(t[a-i]&t[a+i])*2;
		}
		for (int i = 2*a; i <= n; ++i)
		{
			s+=t[i];
		}
		s+=t[a];
	}
	else if (a>(n+1)/2)
	{
		for (int i = 1; i <= n-a; ++i)
		{
			s+=(t[a-i]&t[a+i])*2;
		}
		for (int i = 1; i < 2*a-n; ++i)
		{
			s+=t[i];
		}
		s+=t[a];
	}
	cout<<s<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}