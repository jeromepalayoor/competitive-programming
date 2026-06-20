# https://codeforces.com/problemset/problem/785/A

n = int(input())
faces = {
    'Tetrahedron': 4,
    'Cube': 6,
    'Octahedron': 8,
    'Dodecahedron': 12,
    'Icosahedron': 20
}
total = 0
for _ in range(n):
    total += faces[input()]
print(total)