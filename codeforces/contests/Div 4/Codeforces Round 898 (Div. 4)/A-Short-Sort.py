# https://codeforces.com/contest/1873/problem/A

a=['abc', 'cba', 'bac', 'acb']
for _ in range(int(input())):
	x=input()
	if x in a:
		print("YES")
	else:
		print("NO")