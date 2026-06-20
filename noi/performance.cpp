// https://codebreaker.xyz/problem/performance

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
	int n,q,x=0,c;
	cin>>n>>q;
	if (q%2==1)
		c=1;
	else
		c=-1;
	for (int i = 0; i < q; ++i)
	{
		int t;cin>>t;
		x+=t*c;
		c*=-1;
	}
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		a[i]=(x+i*c+c)%n+1;
	}
	cout<<a[0];
	for (int i = 1; i < n; ++i)
	{
		if (a[i]<=0)
		{
			a[i]+=n;
		}
		cout<<" "<<a[i];
	}
	cout<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}