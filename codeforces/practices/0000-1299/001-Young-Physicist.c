// https://codeforces.com/problemset/problem/69/A

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int x, y, z;
    z = y = x = 0;
    for(int i = 0; i < n; i++)
    {
        int new_x = 0, new_y = 0, new_z = 0;
        scanf("%d %d %d", &new_x, &new_y, &new_z);
        x += new_x;
        y += new_y;
        z += new_z;
    }
    if(x == 0 && y == 0 && z == 0)
        printf("YES");
    else
        printf("NO");
}