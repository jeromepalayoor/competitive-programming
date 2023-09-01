// https://codeforces.com/problemset/problem/1167/B

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

ll gcd( ll a, ll b )
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd( b, a%b );
	}
}

int solve() {
	cout<<"? 1 2\n? 1 3\n? 1 4\n? 1 5\n";
	cout<<flush;
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int nums[6] = {4,8,15,16,23,42};
	int n1 = gcd(gcd(a,b),gcd(c,d));
	if (find(nums,nums+6, n1)==nums+6)
	{
		n1/=2;
	}
	int n2 = a/n1;
	int n3 = b/n1;
	int n4 = c/n1;
	int n5 = d/n1;
	int n6 = 4+8+15+16+23+42-n1-n2-n3-n4-n5;
	cout<<"! "<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<" "<<n5<<" "<<n6;
	cout<<flush;
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}