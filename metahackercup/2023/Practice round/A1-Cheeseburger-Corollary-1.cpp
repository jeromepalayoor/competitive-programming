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
	ofstream fout ("A1.out");
	ifstream fin ("A1.in");
	ios::sync_with_stdio(0);
	fin.tie(0);
	int TET = 1e9;
	fin >> TET;
	for (int i = 1; i <= TET; i++) {
		int S,D,K;
		fin>>S>>D>>K;
		int b=S*2+D*2,m=S+D*2;
		if (K<=m&&K<=b-1)
		{
			fout<<"Case #"<<i<<": YES"<<endl;
		}
		else
		{
			fout<<"Case #"<<i<<": NO"<<endl;
		}
	}
}