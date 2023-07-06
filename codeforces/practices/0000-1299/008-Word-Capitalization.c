// https://codeforces.com/problemset/problem/281/A

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s[1001];
    scanf("%s", s);
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] -= 32;
    printf("%s", s);
    return 0;
}