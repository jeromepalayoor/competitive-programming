// https://codeforces.com/contest/47/problem/B

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
	map<char,vector<char>> graph;
	int cnt = 0;
	for(int i = 0; i < 3; i++){
		string cmp;
		cin >> cmp;
		char x, y;
		if (cmp[1] == '>'){
			x = cmp[0];
			y = cmp[2];
		}
		else
		{
			x = cmp[2];
			y = cmp[0];
		}
		for (char &i : graph[y])
		{
			if (i == x)
			{
				cout << "Impossible";
				return 0;
			}
		}
		graph[x].push_back(y);
		if (graph[x].size() == 1)
		{
			cnt++;
		}
		else if(graph[x].size() > 1)
		{
			cnt--;
		}
	}
	if (cnt == 3)
	{
		cout << "Impossible";
		return 0;
	}
	vector<pair<int,char>> ans;
	for(auto it : graph){
		ans.push_back({it.second.size(), it.first});
	}
	sort(ans.begin(), ans.end());
	for(auto it : ans){
		cout << it.second;
	}
	cout<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}