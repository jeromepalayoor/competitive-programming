// https://atcoder.jp/contests/abc317/tasks/abc317_b

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
	int N=0;cin>>N;
	int A[N];
	int T=0;
	for (int i = 0; i < N; ++i)
	{
		cin>>A[i];
		T+=A[i];
	}
	sort(A,A+N);
	T=(A[N-1]*(A[N-1]+1))/2 - (A[0]*(A[0]-1))/2 - T;
	cout<<T<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}