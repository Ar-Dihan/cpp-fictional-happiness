#include <stdio.h>
#include <math.h>
int main()
{
    int A, B, C, D;
    scanf("%d %d", &A, &B);
    C = A - B;
    if (C == 0)
    {
        printf("1");
    }
    else
    {
        for (int i = 1; i <= C; i++)
        {
            D = pow(32, i);
        }
        printf("%d", D);
    }
    return 0;
}