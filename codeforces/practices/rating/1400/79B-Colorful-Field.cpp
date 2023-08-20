// https://codeforces.com/contest/79/problem/B

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

bool comp(const vector<int>& vec1, const vector<int>& vec2){
	if (vec1[0] == vec2[0])
	{
		return vec1[1] < vec2[1];
	}
	return vec1[0] < vec2[0];
}

int solve() {
	int n=0,m=0,k=0,t=0;
	cin>>n>>m>>k>>t;
	vector<vector<int>> w;
	for (int i = 0; i < k; ++i)
	{
		int a=0,b=0;
		cin>>a>>b;
		w.pb({a,b});
	}
	sort(w.begin(), w.end(), comp);
	for (int i = 0; i < t; ++i)
	{
		int a=0,b=0;
		cin>>a>>b;
		int s=0;
		bool f=false;
		for (int i = 0; i < k; ++i)
		{
			if (w[i][0]<a)
			{
				s++;
			}
			else if (w[i][0]==a)
			{
				if (w[i][1]<b)
				{
					s++;
				}
				else if (w[i][1]==b)
				{
					f=true;
				}
			}
		}
		if (f)
		{
			cout<<"Waste"<<endl;
		}
		else
		{
			string ch[3] = {"Carrots", "Kiwis", "Grapes"};
			cout<<ch[((a-1)*m+b-1-s)%3]<<endl;
		}
	}
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}