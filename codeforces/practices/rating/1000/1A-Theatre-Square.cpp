// https://codeforces.com/problemset/problem/1/A

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
	ll n=0,m=0,a=0;
	cin>>n>>m>>a;
	ll x=0;
	if (n%a==0) x+=n/a;
	else x+=n/a+1;
	ll y=0;
	if (m%a==0) y+=m/a;
	else y+=m/a+1;
	cout<<x*y<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}