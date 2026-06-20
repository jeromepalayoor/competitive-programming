// https://codeforces.com/problemset/problem/158/B

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
	int a[4] = {0,0,0,0};
	for (int i = 0; i < n; ++i)
	{
		int t;
		cin>>t;
		a[t-1]++;
	}
	int s=a[3];
	s+=a[2];
	a[0] = max(0,a[0]-a[2]);
	s+=a[1]/2;
	a[1]%=2;
	if(a[1]==1){
		s++;
		a[0] = max(0,a[0]-2);
	}
	s+=a[0]/4;
	a[0]%=4;
	if(a[0]>0){
		s++;
	}
	cout<<s<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}