# https://www.eolymp.com/en/contests/34160/problems/401006

t = int(input())

for i in range(t):
	a = input()
	x = 0
	y = 0
	for c in a:
		if c == ">":
			x += 1
		elif c == "<":
			x -= 1
		elif c == "^":
			y += 1
		elif c == "v":
			y -= 1
	print(x, y)