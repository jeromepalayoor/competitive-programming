// https://codeforces.com/contest/363/problem/B

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
	int n=0,k=0;
	cin>>n>>k;
	int h[n+1];
	h[0]=0;
	for (int i = 1; i <= n; ++i)
	{
		cin>>h[i];
	}
	if (n==k){
		cout<<1<<endl;
		return 0;
	}
	for (int i = 1; i <= n; ++i)
		h[i]=h[i]+h[i-1];
	int m=1e9,j=0;
	for (int i = 1; i <= n-k+1; ++i)
	{
		if (m>h[i+k-1]-h[i-1])
		{
			j=i;
			m=h[i+k-1]-h[i-1];
		}
	}
	cout<<j<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}