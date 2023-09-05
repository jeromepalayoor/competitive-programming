// https://codeforces.com/problemset/problem/50/A

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
	int m,n;
	cin>>m>>n;
	if (m%2==0)
	{
		cout<<(m/2)*n<<endl;
	}
	else if (n%2==0)
	{
		cout<<(n/2)*m<<endl;
	}
	else
	{
		cout<<((m-1)/2)*n+(n-1)/2<<endl;
	}
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}