# https://codeforces.com/problemset/problem/25/A

n = int(input())
a = list(map(int, input().split()))
even = 0
odd = 0
for i in range(n):
	if a[i] % 2 == 0:
		even += 1
	else:
		odd += 1
if even > odd:
	for i in range(n):
		if a[i] % 2 != 0:
			print(i + 1)
			break
else:
	for i in range(n):
		if a[i] % 2 == 0:
			print(i + 1)
			break