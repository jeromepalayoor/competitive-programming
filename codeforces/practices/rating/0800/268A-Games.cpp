// https://codeforces.com/contest/268/problem/A

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
	int a[n][2];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i][0]>>a[i][1];
	}
	int t=0;
	for (int i = 0; i < n; ++i)
	{
		int x = a[i][0];
		for (int j = 0; j < n; ++j)
		{
			if (i!=j&&a[j][1]==x)
			{
				t++;
			}
		}
	}
	cout<<t<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}