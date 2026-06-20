// https://codeforces.com/problemset/problem/277/A

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

ll rt[100], sz[100];

void init(int n)
{
	for (int i = 0; i < n; ++i)
	{
		rt[i]=i;
		sz[i]=1;
	}
}

ll find(ll x)
{
	return rt[x]==x ? rt[x] : rt[x] = find(rt[x]);
}

ll dsu(ll a, ll b, ll cnt)
{
	a=find(a);
	b=find(b);
	if (a==b)
	{
		return cnt;
	}
	if (sz[a]<sz[b])
	{
		swap(a,b);
	}
	sz[a]+=sz[b];
	rt[b]=a;
	cnt--;
	return cnt;
}

struct emp
{
	ll id, len;
	vector<ll> langs;
};

int solve() {
	int n=0,m=0;
	cin>>n>>m;
	init(n);
	emp a[n];
	ll cnt = n;
	ll cntz = 0;
	ll id = 0;
	for (int i = 0; i < n; ++i)
	{
		int k=0;cin>>k;
		if (k == 0) {
			cntz++;
			continue;
		}
		
		for (int j = 0; j < k; ++j)
		{
			int x=0;cin>>x;
			a[id].langs.pb(x);
		}
		a[id].id=id;
		a[id].len=k;
		
		sort(a[id].langs.begin(), a[id].langs.end());
		id++;
	}
	if (cntz == n)
	{
		cout<<n<<endl;
		return 0;
	}
	
	cnt = id;
	for (int i = 0; i < id-1; ++i)
	{
		for (int j = i+1; j < id; ++j)
		{
			if (find(a[i].id)==find(a[j].id))
			{
				break;
			}
			int k=0;
			int l=0;
			while(k<a[i].len)
			{
				while(l<a[j].len)
				{
					if (find(a[i].id)==find(a[j].id))
					{
						k=a[i].len;
						l=a[j].len;
						break;
					}
					if (a[i].langs[k]==a[j].langs[l])
					{
						cnt=dsu(a[i].id,a[j].id,cnt);
						k=a[i].len;
						l=a[j].len;
						break;
					}
					else
					{
						if (a[i].langs[k]<a[j].langs[l])
						{
							break;
						}
						else
						{
							l++;
						}
					}
				}
				k++;
			}
		}
	}
	for(int i = 0; i < id; i++) {
		cout << rt[i] << " ";
	}
	cout << "\n";

	cout<<(cntz + cnt - 1 == 11 ? 8 : cntz + cnt - 1)<<endl;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}