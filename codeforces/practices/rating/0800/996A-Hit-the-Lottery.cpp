// https://codeforces.com/problemset/problem/996/A

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
	int t=0;
	t += n/100;
	n -= (n/100)*100;
	t += n/20;
	n -= (n/20)*20;
	t += n/10;
	n -= (n/10)*10;
	t += n/5;
	n -= (n/5)*5;
	t += n;
	cout<<t<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}