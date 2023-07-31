// https://codeforces.com/problemset/problem/263/A

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int matrix[5][5];
    int x, y;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    printf("%d", abs(x - 2) + abs(y - 2));
    return 0;
}