// https://codeforces.com/contest/1862/problem/C

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
	int a[n], b[n];
	cin>>a[0];
	int x=n-2;
	b[n-1]=1;
	bool s=true;
	if (a[0]!=n)
	{
		s=false;
	}
	for (int i = 1; i < n; ++i)
	{
		cin>>a[i];
		if (s)
		{
			if (a[i]==a[i-1])
			{
				b[x+1]++;
			}
			else
			{
				for (int j = 0; j < a[i-1]-a[i]-1; ++j)
				{
					b[x-j]=b[x-j+1];
				}
				x-=a[i-1]-a[i]-1;
				b[x]=b[x+1]+1;
				if(x>=0) x--;
				if(x<-1) x=-1;
			}
		}
	}
	while(x>=0)
	{
		b[x]=b[x+1];
		x--;
	}
	if (a[0]!=n)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i]!=b[i])
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
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