// https://codeforces.com/contest/1863/problem/A

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
#include <string>

#define sz(a) ((int)((a).size()))
#define char unsigned char
#define mp make_pair
#define pb push_back

using namespace std;

typedef long long ll;
typedef long double ld;

int solve() {
	int n=0,a=0,q=0;
	cin>>n>>a>>q;
	// cout<<n<<a<<q<<endl;
	int p=0,m=a;
	string s="";
	cin>>s;
	if (a==n)
	{
		cout<<"YES"<<endl;
		return 0;
	}
	for (auto c: s)
	{
		if (c=='-')
		{
			m-=1;
		}
		else
		{
			m+=1;
			p+=1;
		}
		if (m>=n)
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	if (p>=n-a)
	{
		cout<<"MAYBE"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
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