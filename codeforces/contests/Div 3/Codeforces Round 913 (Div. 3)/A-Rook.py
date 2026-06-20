# https://codeforces.com/contest/1907/problem/A

map_ = {'a':1,'b':2,'c':3,'d':4,'e':5,'f':6,'g':7,'h':8}
for _ in range(int(input())):
    i = input()
    j = map_[i[0]]
    k = int(i[1])
    for l in range(1,9):
        for m in range(1,9):
            if l == j or m == k:
                if l == j and m == k:
                    continue
                print(chr(l+96)+str(m))