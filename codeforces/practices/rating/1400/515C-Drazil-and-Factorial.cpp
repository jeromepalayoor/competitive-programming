// https://codeforces.com/contest/515/problem/C

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

#define sz(a) ((int)((a).size()))
#define char unsigned char
#define mp make_pair
#define pb push_back

using namespace std;

typedef long long ll;
typedef long double ld;

int solve() {
	int n=0;cin>>n;
	string s;
	vector<int> r;
	cin>>s;
	for (int i = 0; i < n; ++i)
	{
		if (s[i]=='2')
		{
			r.pb(2);
		}
		else if (s[i]=='3')
		{
			r.pb(3);
		}
		else if (s[i]=='4')
		{
			r.pb(3);
			r.pb(2);
			r.pb(2);
		}
		else if (s[i]=='5')
		{
			r.pb(5);
		}
		else if (s[i]=='6')
		{
			r.pb(5);
			r.pb(3);
		}
		else if (s[i]=='7')
		{
			r.pb(7);
		}
		else if (s[i]=='8')
		{
			r.pb(7);
			r.pb(2);
			r.pb(2);
			r.pb(2);
		}
		else if (s[i]=='9')
		{
			r.pb(7);
			r.pb(3);
			r.pb(3);
			r.pb(2);
		}
	}
	sort(r.begin(), r.end());
	reverse(r.begin(), r.end());
	for (int i = 0; i < sz(r); ++i)
	{
		cout<<r[i];
	}
	cout<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}