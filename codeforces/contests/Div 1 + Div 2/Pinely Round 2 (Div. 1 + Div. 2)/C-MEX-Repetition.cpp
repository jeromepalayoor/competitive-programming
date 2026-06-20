// https://codeforces.com/problemset/problem/1863/C

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
	int n,k;
	cin>>n>>k;
	int a[n];
	set<int> b;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		b.insert(a[i]);
	}
	int m=0;
	for (auto i: b)
	{
		if (i == m)
		{
			m++;
		}
		else
		{
			break;
		}
	}
	if (n==1)
	{
		if (k%2==0)
		{
			cout<<min(1,a[0])<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
		return 0;
	}
	if (k%2==0)
	{
		cout<<m;
		for (int i = 0; i < n-1; ++i)
		{
			cout<<" "<<a[i];
		}
	}
	else
	{
		for (int i = 1; i < n; ++i)
		{
			cout<<a[i]<<" ";
		}
		cout<<m;
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