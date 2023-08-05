// http://codeforces.com/contest/734/problem/A

#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <cmath>
#include <array>
#include <vector>
#include <algorithm>
#define sz(a) ((int)((a).size()))
#define char unsigned char

using namespace std;

typedef long long ll;
typedef long double ld;

int solve() {
	string s = "";
	int n = 0;
	cin >> n >> s;
	int ss = 0;
	for (int i = 0; i < n; ++i)
	{
		if (s[i]=='A')
			ss++;
		else
			ss--;
	}
	if (ss<0)
		cout << "Danik" << endl;
	else if (ss>0)
		cout << "Anton" << endl;
	else
		cout << "Friendship" << endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}