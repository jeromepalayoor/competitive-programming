// https://codeforces.com/problemset/problem/1879/A

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
	int s,e;
	cin>>s>>e;
	bool p = true;
	for (int i = 0; i < n-1; ++i)
	{
		int x,z;
		cin>>x>>z;
		if (x>=s && z>=e)
		{
			p = false;
		}
	}
	if (p)
	{
		cout<<s<<endl;
		return 0;
	}
	cout<<-1<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int TET = 1e9;
	cin >> TET;
	for (int i = 1; i <= TET; i++) {
		if (solve()) {
			break;
		}
	}
}