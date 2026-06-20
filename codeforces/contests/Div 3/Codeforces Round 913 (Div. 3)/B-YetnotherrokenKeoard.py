# https://codeforces.com/contest/1907/problem/B

for _ in range(int(input())):
    u = -1
    l = -1
    x = input()
    o = ''
    for c in x:
        if c == 'b':
            if l <= -1:
                continue
            else:
                o = o[:l] + o[l+1:]
                if u > l:
                    u -= 1
                l = -1
                for i in range(len(o)):
                    if ord("a") <= ord(o[i]) <= ord("z"):
                        l = i
        elif c == "B":
            if u <= -1:
                continue
            else:
                o = o[:u] + o[u+1:]
                if l > u:
                    l -= 1
                u = -1
                for i in range(len(o)):
                    if ord("A") <= ord(o[i]) <= ord("Z"):
                        u = i
        elif ord("a") <= ord(c) <= ord("z"):
            l = len(o)
            o += c
        elif ord("A") <= ord(c) <= ord("Z"):
            u = len(o)
            o += c
    print(o)