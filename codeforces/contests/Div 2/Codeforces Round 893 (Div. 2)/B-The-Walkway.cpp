// https://codeforces.com/contest/1858/problem/B

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
	int n,m,d;cin>>n>>m>>d;
	vector<int> s(m);
	for (int i = 0; i < m; ++i)
	{
		cin>>s[i];
	}
	s.insert(s.begin(), 1-d);
	s.pb(n+1);
	int a=2e9;
	vector<int> r;
	for (int i = 1; i <= m; i++)
	{
		int A = s[i]-s[i-1]-1;
		int B = s[i+1]-s[i]-1;
		int C = s[i+1]-s[i-1]-1;
		int D = C/d - (A/d + B /d);
		if (D<a)
		{
			a=D;
			r.clear();
		}
		if (D==a)
		{
			r.pb(s[i]);
		}
	}
	int b=0;
	for (int i = 1; i < s.size(); ++i)
	{
		b += (s[i]-s[i-1]-1)/d;
	}
	b+=int(s.size())-2;
	cout<<a+b-1<<" "<<r.size()<<endl;
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