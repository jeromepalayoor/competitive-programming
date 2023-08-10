// https://codeforces.com/contest/433/problem/B

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
	ll v[n+1];
	ll u[n+1];
	v[0]=0;u[0]=0;
	for (int i = 1; i <= n; ++i)
	{
		ll t=0;
		cin>>t;
		v[i]=v[i-1]+t;
		u[i]=t;
	}
	sort(u,u+n+1);
	for (int i = 1; i <= n; ++i)
	{
		ll x=u[i-1]+u[i];
		u[i]=x;
	}
	int m=0;
	cin>>m;
	for (int i = 0; i < m; ++i)
	{
		int q=0,l=0,r=0;
		cin>>q>>l>>r;l--;
		if (q==1) cout<<v[r]-v[l]<<endl;
		else cout<<u[r]-u[l]<<endl;
	}
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}