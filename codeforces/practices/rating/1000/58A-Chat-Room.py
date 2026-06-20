# https://codeforces.com/problemset/problem/58/A

s=input()
x="hello"
j=0
for i in range(len(s)):
	if s[i]==x[j]:
		j+=1
	if j==5:
		break
if j==5:
	print("YES")
else:
	print("NO")