# https://codeforces.com/contest/1862/problem/A

w='vika'
def check(carpet, j, k):
	for mj in range(j, len(carpet[0])-3+k):
		for ni in range(0, len(carpet)):
			if carpet[ni][mj] == w[k]:
				if k == 3:
					return True
				else:
					return check(carpet, mj+1, k+1)

t = int(input())
for i in range(t):
	n, m = map(int, input().split())
	carpet = []
	for j in range(n):
		x=list(input())
		for i in range(len(x)):
			if x[i]not in ["v","i","k","a"]:
				x[i]=0
		carpet.append(x)
	if m < 4:
		print('NO')
		continue
	found = check(carpet, 0, 0)
	if found == 1:
		print('YES')
	else:
		print('NO')
