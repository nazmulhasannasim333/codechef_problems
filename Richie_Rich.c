#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b, x;
        scanf("%d %d %d", &a, &b, &x);
        int sub = b - a;
        int res = sub / x;
        printf("%d\n", res);
    }
    return 0;
}