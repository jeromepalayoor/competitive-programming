// https://codeforces.com/problemset/problem/110/A

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s[22];
    scanf("%s", s);
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            count++;
        }
    }
    if (count != 4 && count != 7)
    {
        printf("NO");
        return 0;
    }
    printf("YES");
    return 0;
}