// https://codeforces.com/contest/1859/problem/A

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
	int n=0;cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	if (a[0]==a[n-1])
	{
		cout<<-1<<endl;
		return 0;
	}
	int s=0;
	for (int i = 2; i < n; ++i)
	{
		if (a[n-1]==a[n-i])
		{
			s++;
		}
		else
		{
			break;
		}
	}
	cout<<n-1-s<<" "<<s+1<<endl;
	for (int i = 0; i < n-s-2; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<a[n-s-2]<<endl;
	for (int i = n-s-1; i < n-1; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<a[n-1]<<endl;
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