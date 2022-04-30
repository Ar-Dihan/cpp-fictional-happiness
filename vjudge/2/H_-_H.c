#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("I hate it");
    }
    else if (n == 2)
    {
        printf("I hate that I love it");
    }
    else if (n > 2)
    {
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 1)
            {
                printf("I hate that ");
            }
            else if (i % 2 == 0)
            {
                printf("I love that ");
            }
        }
        if (n % 2 == 1)
        {
            printf("I hate it");
        }
        else if (n % 2 == 0)
        {
            printf("I love it");
        }
    }
    return 0;
}