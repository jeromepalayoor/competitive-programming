# https://codeforces.com/contest/6/problem/B

a=input().split()
n=int(a[0])
m=int(a[1])
c=a[2]
a=[]
for i in range(n):
	x=list(input())
	a.append(x)
b=[]
for i in range(n):
	for j in range(m):
		if a[i][j]==c:
			if i>0 and a[i-1][j]!=c and a[i-1][j]!='.':
				b.append(a[i-1][j])
			if i<n-1 and a[i+1][j]!=c and a[i+1][j]!='.':
				b.append(a[i+1][j])
			if j>0 and a[i][j-1]!=c and a[i][j-1]!='.':
				b.append(a[i][j-1])
			if j<m-1 and a[i][j+1]!=c and a[i][j+1]!='.':
				b.append(a[i][j+1])
b=list(set(b))
print(len(b))