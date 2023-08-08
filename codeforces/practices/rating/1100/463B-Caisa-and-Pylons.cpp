// https://codeforces.com/contest/463/problem/B

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
	int n=0;cin>>n;
	int p=0,s=0,e=0;
	for (int i = 0; i < n; ++i)
	{
		int x=0;cin>>x;
		e+=p-x;
		p=x;
		if (e<0)
		{
			s-=e;
			e=0;
		}
	}
	cout<<s<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}