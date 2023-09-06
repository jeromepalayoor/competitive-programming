// https://codeforces.com/problemset/problem/977/A


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
	for (int i = 0; i < k; ++i)
	{
		if (n%10)
		{
			n--;
		}
		else
		{
			n/=10;
		}
	}
	cout<<n<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}