# http://codeforces.com/problemset/problem/231/A

n = int(input())
o = 0
for i in range(n):
    word = input().split(" ")
    s = 0
    for a in word:
        if a == "1":
            s += 1
 
    if s > 1:
        o +=1
print(o)