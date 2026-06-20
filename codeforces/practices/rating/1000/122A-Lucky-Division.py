# https://codeforces.com/problemset/problem/122/A

l=[4,7,44,47,74,77,477,474,447,444,777,774,747,744]
x=int(input())
if x in l:
	print("YES")
else:
	for c in l:
		if x%c==0:
			print("YES")
			exit()
	print("NO")