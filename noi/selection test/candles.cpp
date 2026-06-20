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
	int N,K;
	cin>>N>>K;
	int a[N];
	int b[N];
	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
	}
	
	int i = 0, j = N-1, cnt = 0;
	while(i <= j) {
		if (abs(a[i]) > abs(a[j])) {
			b[cnt] = i;
			i++;
		}
		
		else {
			b[cnt] = j;
			j--;
		}
		cnt++;	
	}

	int pos1 = N-K, pos2 = N-K+1;
	for(int i = N-K+1; i < N; i++) {
		if(a[b[pos1]] * a[b[i]] < 0) {
			pos2 = i;
			break;
		}
	}
	if (a[b[pos1]] * a[b[pos2]] >= 0) {
		cout << abs(a[b[pos1]]) << endl;
		return 0;
	}
	if (pos2 == N-K+1 && a[b[pos1]] * a[b[pos2]] >= 0 ) pos2 = N-1;
	else cout << abs(a[b[pos2]]) * 2 + abs(a[b[pos1]]) <<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}