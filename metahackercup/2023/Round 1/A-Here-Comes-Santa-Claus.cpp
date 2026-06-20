// https://www.facebook.com/codingcompetitions/hacker-cup/2023/round-1/problems/A

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
#include <fstream>

#define sz(a) ((int)((a).size()))
#define char unsigned char
#define mp make_pair
#define pb push_back

using namespace std;

typedef long long ll;
typedef long double ld;

int32_t main() {
	ofstream fout ("A.out");
	ifstream fin ("A.in");
	ios::sync_with_stdio(0);
	fin.tie(0);
	int TET = 1e9;
	fin >> TET;
	for (int i = 1; i <= TET; i++) {
		int n;
		fin>>n;
		ll x[n];
		for (int j = 0; j < n; ++j)
		{
			fin>>x[j];
		}
		sort(x,x+n);
		ll a = (x[n-1]+x[n-2])/2-(x[1]+x[0])/2;
		if (true)
		{
			fout<<"Case #"<<i<<": "<<a<<endl;
		}
		else
		{
			fout<<"Case #"<<i<<": NO"<<endl;
		}
	}
}