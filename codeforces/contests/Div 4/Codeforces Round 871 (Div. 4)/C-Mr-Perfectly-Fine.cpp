// https://codeforces.com/contest/1829/problem/C

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
	int n = 0;
	cin>>n;
	int m11=1e9;
	int m01=1e9;
	int m10=1e9;
	for (int i = 0; i < n; ++i)
	{
		int s=0,t=0;
		cin>>s>>t;
		if (t==11)
		{
			m11=min(m11,s);
		}
		if (t==01)
		{
			m01=min(m01,s);
		}
		if (t==10)
		{
			m10=min(m10,s);
		}
	}
	if (m11==1e9)
	{
		m11=0;
	}
	if (m10==1e9)
	{
		m10=0;
	}
	if (m01==1e9)
	{
		m01=0;
	}
	if (m11&&m10&&m01)
	{
		cout<<min(m11,m10+m01)<<endl;
	}
	else if (m11)
	{
		cout<<m11<<endl;
	}
	else if (m10&&m01)
	{
		cout<<m10+m01<<endl;
	}
	else
	{
		cout<<-1<<endl;
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