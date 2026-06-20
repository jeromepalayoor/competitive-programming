# https://codeforces.com/problemset/problem/520/A

n=input()
s=input().lower()
a=[1 for _ in range(26)]
for c in s:
	a[ord(c)-ord('a')]=0
for c in a:
	if c==1:
		print("NO")
		exit()
print("YES")