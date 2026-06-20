// https://codeforces.com/contest/1873/problem/D

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
	string s;
	cin>>s;
	int x=0,co=0;
	for (auto c: s)
	{
		if (x==0 && c=='B')
		{
			x+=1;
		}
		else if (x>0)
		{
			x++;
			if (x==k)
			{
				x=0;
				co++;
			}
		}
		if (x==k)
		{
			x=0;
			co++;
		}
	}
	if (x>0)
	{
		co++;
	}
	cout<<co<<endl;
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