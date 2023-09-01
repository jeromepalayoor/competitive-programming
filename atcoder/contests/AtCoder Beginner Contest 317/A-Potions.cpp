// https://atcoder.jp/contests/abc317/tasks/abc317_a

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
	int N,H,X;
	cin>>N>>H>>X;
	X-=H;
	int P[N];
	for (int i = 0; i < N; ++i)
	{
		cin>>P[i];
	}
	auto it = lower_bound(P,P+N,X);
	cout<<it-P+1<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}