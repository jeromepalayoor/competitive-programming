// https://codeforces.com/problemset/problem/32/B

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = (char *)malloc(sizeof(char) * 201);
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '.')
            printf("0");
        else
        {
            if (s[i + 1] == '.')
                printf("1");
            else
                printf("2");
            i++;
        }
    }
    return 0;
}