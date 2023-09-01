// https://codeforces.com/contest/1863/problem/B

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
	int n=0;cin>>n;
	vector<int> a;
	for (int i = 0; i < n; ++i)
	{
		int x=0;cin>>x;
		a.pb(x);
	}
	map<int,int> m;
	for (int i = 0; i < n; ++i)
	{
		m[a[i]]=i;
	}
	int s=0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i]!=1)
		{
			if (m[a[i]]<m[a[i]-1])
			{
				s++;
			}
		}
	}
	cout<<s<<endl;
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