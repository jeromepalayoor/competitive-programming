// https://codebreaker.xyz/problem/catfight

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
	int n,p;
	cin>>n>>p;
	int x[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>x[i];
	}
	ll l=0,r=0,m=0,s=0;
	while (r<=n)
	{
		s+=x[r];
		if (s>=p)
		{
			m=max(m,r-l);
			// cout<<l<<" "<<r<<endl;
		}
		while (s>=p)
		{
			s-=x[l];
			l++;
		}
		r++;
	}
	cout<<m<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}