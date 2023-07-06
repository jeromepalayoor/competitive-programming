// https://codeforces.com/problemset/problem/275/A

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[3][3] = {0};
    int b[3][3] = {0};
    int c[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
        for (int j = 0; j < 3; j++)
        {
            b[i][j] = 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[0][i] % 2 == 1)
        {
            b[0][i] = !b[0][i];
            b[1][i] = !b[1][i];
            if (i - 1 >= 0)
                b[0][i - 1] = !b[0][i - 1];
            if (i + 1 < 3)
                b[0][i + 1] = !b[0][i + 1];
        }
        if (a[1][i] % 2 == 1)
        {
            b[1][i] = !b[1][i];
            b[0][i] = !b[0][i];
            b[2][i] = !b[2][i];
            if (i - 1 >= 0)
                b[1][i - 1] = !b[1][i - 1];
            if (i + 1 < 3)
                b[1][i + 1] = !b[1][i + 1];
        }
        if (a[2][i] % 2 == 1)
        {
            b[2][i] = !b[2][i];
            b[1][i] = !b[1][i];
            if (i - 1 >= 0)
                b[2][i - 1] = !b[2][i - 1];
            if (i + 1 < 3)
                b[2][i + 1] = !b[2][i + 1];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d%d%d\n", b[i][0], b[i][1], b[i][2]);
    }
    return 0;
}