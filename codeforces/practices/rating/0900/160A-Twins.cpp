// https://codeforces.com/problemset/problem/160/A

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
	int n;cin>>n;
	int a[n];
	int t=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		t+=a[i];
	}
	t/=2;
	t++;
	sort(a,a+n);
	int c=0;
	for (int i = n-1; i >= 0; --i)
	{
		if (t>0)
		{
			t-=a[i];
			c++;
		}
	}
	cout<<c<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}