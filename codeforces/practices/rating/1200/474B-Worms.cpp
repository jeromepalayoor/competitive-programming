// https://codeforces.com/problemset/problem/474/B

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

int solve() {
	int n;
	cin>>n;
	vector<int> a(n+1, 0);
	for (int i = 1; i <= n; ++i)
	{
		cin>>a[i];
		a[i]+=a[i-1];
	}
	int m;
	cin>>m;
	for (int i = 0; i < m; ++i)
	{
		int b;
		cin>>b;
		auto it = lower_bound(a.begin(), a.end(), b);
		cout<<it-a.begin()<<endl;
	}
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}