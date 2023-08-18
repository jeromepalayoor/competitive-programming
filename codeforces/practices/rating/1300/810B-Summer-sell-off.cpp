// https://codeforces.com/contest/810/problem/B

#include <cstdio>
#include <iostream>
#include <cstdint>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <ctype.h>
#include <assert.h>
#include <algorithm>
#include <map>
#include <set>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <bitset>
#include <climits>

#define sz(a) ((int)((a).size()))
#define char unsigned char
#define mp make_pair
#define pb push_back

using namespace std;

typedef long long ll;
typedef long double ld;

bool comp(const vector<ll>& vec1, const vector<ll>& vec2){
	if (vec1[0] == vec2[0])
	{
		return vec1[1] > vec2[1];
	}
	return vec1[0] > vec2[0];
}

int solve() {
	int n=0,f=0;cin>>n>>f;
	vector<ll> c;
	ll s=0;
	for (int i = 0; i < n; ++i)
	{
		int k=0,l=0;cin>>k>>l;
		if (k!=0&&l>k)
		{
			s+=k;
			c.pb(min(l-k,k));
		}
		else if (k!=0)
		{
			s+=l;
		}
	}
	sort(c.begin(), c.end());
	reverse(c.begin(), c.end());
	for (int i = 0; i < sz(c); ++i)
	{
		if (f==0) break;
		f--;
		s+=c[i];
	}
	cout<<s<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}