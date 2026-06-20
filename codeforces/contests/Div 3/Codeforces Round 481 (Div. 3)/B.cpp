// https://codeforces.com/contest/978/problem/B

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
	string s;
	cin>>s;
	int c=0,m=0;
	for (auto ch: s)
	{
		if (ch=='x')
		{
			if (c<2)
			{
				c++;
			}
			else
			{
				m++;
			}
		}
		else
		{
			c=0;
		}
		if (c==3)
		{
			m++;
			c=0;
		}
	}
	cout<<m<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}