# https://codeforces.com/problemset/problem/469/A

n=int(input())
a=[]
for _ in range(n):
	a.append(1)
b=input().split(' ')
if b[0]!='0':
	del b[0]
	for i in b:
		a[int(i)-1] = 0
b=input().split(' ')
if b[0]!='0':
	del b[0]
	for i in b:
		a[int(i)-1] = 0
for i in a:
	if i==1:
		print("Oh, my keyboard!")
		exit()
print("I become the guy.")