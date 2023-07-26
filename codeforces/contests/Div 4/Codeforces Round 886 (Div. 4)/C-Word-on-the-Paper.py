# https://codeforces.com/contest/1850/problem/C

t = int(input())
output = ""
for _ in range(t):
	a = ""
	for _ in range(8):
		a += input()
	output += a.replace(".", "") + "\n"
print(output)