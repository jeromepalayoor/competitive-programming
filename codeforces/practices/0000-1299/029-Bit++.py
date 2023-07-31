# http://codeforces.com/problemset/problem/282/A

x=0
for _ in range(int(input())):
	a=input()
	if "++" in a and "X" in a:
		x+=1
	if "--" in a and "X" in a:
		x-=1
print(x)