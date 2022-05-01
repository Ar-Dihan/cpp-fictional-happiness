#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    if (A <= B)
    {
        printf("%d", (B - A) + 1);
    }
    else
    {
        printf("0");
    }
    return 0;
}