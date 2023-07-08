// https://atcoder.jp/contests/abc309/tasks/abc309_a

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a + 1 == b && a != 3 && a != 6 && a != 9)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}