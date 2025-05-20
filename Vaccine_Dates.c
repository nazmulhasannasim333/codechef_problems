#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int d, l, r;
        scanf("%lld %lld %lld", &d, &l, &r);
        if ((d >= l) && (d <= r))
        {
            printf("Take second dose now\n");
        }
        else if ((d >= l) && (d >= r))
        {
            printf("Too Late\n");
        }
        else
        {
            printf("Too Early\n");
        }
    }
    return 0;
}