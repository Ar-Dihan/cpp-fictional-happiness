#include <stdio.h>

int main()
{
    int a, b, c, i = 1;
    scanf("%d %d %d", &a, &b, &c);
    for (; i < b; i++)
    {
        c++;
        if (c > a)
        {
            c -= a;
        }
    }
    printf("%d", c);
    return 0;
}