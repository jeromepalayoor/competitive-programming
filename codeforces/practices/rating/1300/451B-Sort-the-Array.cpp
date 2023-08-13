// https://codeforces.com/contest/451/problem/B

#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <cmath>
#include <array>
#include <vector>
#include <algorithm>
#include <map>
#define sz(a) ((int)((a).size()))
#define char unsigned char

using namespace std;

typedef long long ll;
typedef long double ld;

int solve() {
	int n=0;cin>>n;
	int a[n],b[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	map<int, int> mp;
	sort(b,b+n);
	for (int i = 0; i < n; ++i)
	{
		mp[b[i]]=i;
	}
	for (int i = 0; i < n; ++i)
	{
		a[i]=mp[a[i]];
	}
	int l=-1,r=-1;
	for (int i = 0; i < n; ++i)
	{
		if (a[i]!=i)
		{
			l=i;
			break;
		}
	}
	for (int i = n-1; i >= 0; --i)
	{
		if (a[i]!=i)
		{
			r=i;
			break;
		}
	}
	if (l==-1||r==-1)
	{
		cout<<"yes\n1 1"<<endl;
		return 0;
	}
	reverse(a+l,a+r+1);
	bool sorted=true;
	for (int i = 0; i < n; ++i)
	{
		if (a[i]!=i)
		{
			sorted=false;
		}
	}
	if (sorted)
	{
		cout<<"yes\n"<<l+1<<" "<<r+1<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}