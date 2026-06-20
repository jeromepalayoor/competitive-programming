// https://codebreaker.xyz/problem/globalwarming

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

bool comp(vector<int> a, vector<int> b)
{
	return a[0] > b[0];
}

int solve() {
	int n;
	cin>>n;
	vector<vector<int>> v;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin>>a;
		v.pb({a,i});
	}
	sort(v.begin(), v.end(), comp);
	
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}