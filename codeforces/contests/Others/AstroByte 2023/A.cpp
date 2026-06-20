// https://codeforces.com/gym/477328/problem/A

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
	int n,m;
	cin>>n>>m;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		a[i]=0;
	}
	for (int i = 0; i < m; ++i)
	{
		int ind,val;
		cin>>ind>>val;
		if (val<=0)
		{
			a[ind-1]+=val;
		}
		else
		{
			a[i%n]+=val;
		}
	}
	cout<<a[0];
	for (int i = 1; i < n; ++i)
	{
		cout<<" "<<a[i];
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