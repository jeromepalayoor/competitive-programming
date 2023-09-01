# https://codeforces.com/contest/1861/problem/A

for _ in range(int(input())):
    s=input()
    a = s.find('1')
    b = s.find('3')
    if b>a:
        print("13")
    else:
        print("31")