// https://codeforces.com/problemset/problem/580/A

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
	int m=0,x=0,v=1;
	cin>>x;
	for (int i = 1; i < n; ++i)
	{
		int t;cin>>t;
		if (t>=x)
		{
			v++;
		}
		else
		{
			m=max(m,v);
			v=1;
		}
		x=t;
	}
	m=max(m,v);
	cout<<m<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}