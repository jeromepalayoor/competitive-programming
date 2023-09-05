# https://codeforces.com/problemset/problem/118/A

s=input().lower()
x=''
for c in s:
	if c not in "aoyeui":
		x+='.'+c
print(x)