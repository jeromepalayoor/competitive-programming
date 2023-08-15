// https://codeforces.com/contest/1858/problem/C

#include <cstdio>
#include <iostream>
#include <cstdint>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <ctype.h>
#include <assert.h>
#include <iostream>
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
	int n=0;cin>>n;
	vector<pair<int,int>> v(n+1);
	for (int i = 1; i <= n; ++i)
	{
		v[i].first = i;
		v[i].second = 1;
	}
	cout<<"1 ";
	v[1].second=0;
	for (int x = 2; x <= n; ++x)
	{
		if (v[x].second==0)
		{
			continue;
		}
		ll i=x;
		while(i<=n)
		{
			cout<<i<<" ";
			v[i].second=0;
			i*= 2;
		}
	}
	cout<<endl;
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