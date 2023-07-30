# https://codeforces.com/contest/1855/problem/C1
# https://codeforces.com/contest/1855/problem/C2

for _ in range(int(input())):
	n=int(input())
	arr=[int(i) for i in input().split()]
	mi=max(arr)
	ni=min(arr)
	
	if ni>=0:
		print(n-1)
		for i in range(n-1):
			print(i+2,i+1)
		continue
	if mi<=0:
		print(n-1)
		for i in range(n-1,0,-1):
			print(i,i+1)
		continue
	
	mind=arr.index(mi)
	nind=arr.index(ni)
	pos=neg=0
	for i in arr:
		pos+=i>0
		neg+=i<0
		
	a=1
	c=0
	while mi*a+ni<0:
		a=a<<1
		c+=1
	if c+neg<=12:
		print(c+neg+n-1)
		for i in range(c):
			print(mind+1,mind+1)
		for j,e in enumerate(arr):
			if e<0:
				print(j+1,mind+1)
		for i in range(n-1):
			print(i+2,i+1)
		continue

	a=1
	c=0
	while ni*a+mi>0:
		a=a<<1
		c+=1
	if c+pos<=12:
		print(c+pos+n-1)
		for i in range(c):
			print(nind+1,nind+1)
		for j,e in enumerate(arr):
			if e>0:
				print(j+1,nind+1)
		for i in range(n-1,0,-1):
			print(i,i+1)