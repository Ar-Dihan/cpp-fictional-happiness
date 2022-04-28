#include <stdio.h>

int main()
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);

    int x = 0, ans;
    for (int i = 1; i <= w; i++)
    {
        x = x + (i * k);
    }

    if (x <= n)
    {
        printf("0");
    }
    else
    {
        ans = x - n;
        printf("%d", ans);
    }

    return 0;
}