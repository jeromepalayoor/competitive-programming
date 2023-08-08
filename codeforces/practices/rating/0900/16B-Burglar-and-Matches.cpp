// http://codeforces.com/contest/16/problem/B

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

bool comp(const vector<int>& vec1, const vector<int>& vec2){
	if (vec1[1] == vec2[1])
	{
		return vec1[0] > vec2[0];
	}
	return vec1[1] > vec2[1];
}

int solve() {
	int n=0,m=0;
	cin>>n>>m;
	vector<vector<int>> x;
	for (int i = 0; i < m; ++i)
	{
		int a=0,b=0;
		cin>>a>>b;
		x.push_back({a,b});
	}
	sort(x.begin(), x.end(), comp);
	ll s=0;
	int z=0;
	for (int i = 0; i <= n; ++i)
	{
		if (x[z][0]<=n-i)
		{
			s+=x[z][0]*x[z][1];
			i+=x[z][0]-1;
		}
		else
		{
			s+=(n-i)*x[z][1];
			i+=n-i+1;
		}
		z++;
		if (z==m)
		{
			break;
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