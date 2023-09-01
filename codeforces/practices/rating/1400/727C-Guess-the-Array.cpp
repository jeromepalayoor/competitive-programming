// https://codeforces.com/problemset/problem/727/C

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
	int n=0;cin>>n;
	cout<<"? 1 2\n? 2 3\n? 1 3\n";
	cout<<flush;
	int a,b,c;
	cin>>a>>b>>c;
	int t = (a+b+c)/2;
	int sol[n];
	sol[0] = t-b;
	sol[1] = t-c;
	sol[2] = t-a;
	for (int i = 4; i <= n; ++i)
	{
		cout<<"? 1 "<<i<<"\n";
	}
	cout<<flush;
	for (int i = 3; i < n; ++i)
	{
		cin>>sol[i];
		sol[i]-=sol[0];
	}
	cout<<"!";
	for (int i = 0; i < n; ++i)
	{
		cout<<" "<<sol[i];
	}
	cout<<"\n"<<flush;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}