// https://codeforces.com/problemset/problem/617/A

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
	int x;cin>>x;
	int s=(x-x%5)/5;
	if (x%5>0)
	{
		s++;
	}
	cout<<s<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}