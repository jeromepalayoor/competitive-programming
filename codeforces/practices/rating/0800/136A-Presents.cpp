// https://codeforces.com/problemset/problem/136/A

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
	for (int i = 0; i < n; ++i)
	{
		int t=0;cin>>t;
		a[t-1]=i;
	}
	cout<<a[0]+1;
	for (int i = 1; i < n; ++i)
	{
		cout<<" "<<a[i]+1;
	}
	cout<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}