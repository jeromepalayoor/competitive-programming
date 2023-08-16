/*
ID: usacotr13
TASK: ride
LANG: C++
*/
#include <cstdio>
#include <iostream>
#include <cstdint>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <ctype.h>
#include <assert.h>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <bitset>
#include <climits>
#include <fstream>

#define sz(a) ((int)((a).size()))
#define char unsigned char
#define mp make_pair
#define pb push_back

using namespace std;

typedef long long ll;
typedef long double ld;

#ifndef ONLINE_JUDGE
	ofstream fout ("ride.out");
	ifstream fin ("ride.in");
#endif

int calc(string s) {
	ll r=2;
	for (int i = 0; i < sz(s); ++i)
	{
		r*=(int) s[i] - (int) 'A' + 1;
	}
	return r%47;
}

int solve() {
	string a,b;
	fin>>a>>b;
	int x=calc(a);
	int y=calc(b);
	if (x==y)
	{
		fout<<"GO"<<endl;
	}
	else
	{
		fout<<"STAY"<<endl;
	}
	return 0;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// int TET = 1e9;
	// cin >> TET;
	// for (int i = 1; i <= TET; i++) {
	// 	if (solve()) {
	// 		break;
	// 	}
	// }
	solve();
}