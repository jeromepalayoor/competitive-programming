# https://codeforces.com/contest/1829/problem/A

for _ in range(int(input())):
	s=input()
	a=0
	for i,c in enumerate("codeforces"):
		if s[i]!=c:
			a+=1
	print(a)