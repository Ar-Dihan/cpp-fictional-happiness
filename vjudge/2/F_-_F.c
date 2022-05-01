#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    for (int i = 1; i <= r; i++)
    {

        if (i % 2 == 1)
        {
            for (int j = 1; j <= c; j++)
            {
                printf("#");
            }
            printf("\n");
        }
        else
        {
            if (i % 4 == 2)
            {

                for (int j = 1; j < c; j++)
                {
                    printf(".");
                }
                printf("#");
                printf("\n");
            }

            else if (i % 2 == 0)
            {
                printf("#");
                for (int j = 1; j < c; j++)
                {
                    printf(".");
                }
                printf("\n");
            }
        }
    }
    return 0;
}