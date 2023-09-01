// https://codeforces.com/contest/1861/problem/B

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
	string a,b;
	cin>>a>>b;
	if (a==b)
	{
		cout<<"YES"<<endl;
		return 0;
	}
	if (a.size()==3)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	if (a[0]==a.back()&&a[0]==b[0]&&b[0]==b.back())
	{
		cout<<"YES"<<endl;
		return 0;
	}
	
	for (int i = 1; i < a.size(); ++i)
	{
		if (a[i]=='1'&&a[i-1]=='0'&&b[i]=='1'&&b[i-1]=='0')
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
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