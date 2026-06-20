// https://codeforces.com/contest/1339/problem/B

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
	int n=0;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	if (n%2==1)
	{
		cout<<a[(n-1)/2];
		for (int i = 0; i < (n-1)/2; ++i)
		{
			cout<<" "<<a[(n-1)/2-i-1];
			cout<<" "<<a[(n-1)/2+i+1];
		}
	}
	else
	{
		for (int i = 0; i < n/2; ++i)
		{
			cout<<a[n/2-i-1];
			cout<<" "<<a[n/2+i]<<" ";
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