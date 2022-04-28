#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    if (B > A * 6 || B < 0)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
    return 0;
}