// https://codeforces.com/contest/1846/problem/B

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char x1, x2, x3, x4, x5, x6, x7, x8, x9;
        scanf("%c", &x1);
        scanf("%c%c%c", &x1, &x2, &x3);
        scanf("%c", &x4);
        scanf("%c%c%c", &x4, &x5, &x6);
        scanf("%c", &x7);
        scanf("%c%c%c", &x7, &x8, &x9);
        if (x1 == x2 && x1 == x3 && x1 != '.')
        {
            printf("%c\n", x1);
        }
        else
        {
            if (x4 == x5 && x4 == x6 && x4 != '.')
            {
                printf("%c\n", x4);
            }
            else
            {
                if (x7 == x8 && x7 == x9 && x7 != '.')
                {
                    printf("%c\n", x7);
                }
                else
                {
                    if (x1 == x4 && x1 == x7 && x1 != '.')
                    {
                        printf("%c\n", x1);
                    }
                    else
                    {
                        if (x2 == x5 && x2 == x8 && x2 != '.')
                        {
                            printf("%c\n", x2);
                        }
                        else
                        {
                            if (x3 == x6 && x3 == x9 && x3 != '.')
                            {
                                printf("%c\n", x3);
                            }
                            else
                            {
                                if (x1 == x5 && x1 == x9 && x1 != '.')
                                {
                                    printf("%c\n", x1);
                                }
                                else
                                {
                                    if (x3 == x5 && x3 == x7 && x3 != '.')
                                    {
                                        printf("%c\n", x3);
                                    }
                                    else
                                    {
                                        printf("DRAW\n");
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}