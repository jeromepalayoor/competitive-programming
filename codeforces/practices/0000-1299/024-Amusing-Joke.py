# https://codeforces.com/problemset/problem/141/A

a = list(input())+list(input())
b = input()
c = 1
for i in b:
	if i not in a:
		c = 0
		break
	else:
		a.remove(i)
if c and len(a) == 0:
	print("YES")
else:
	print("NO")