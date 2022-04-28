#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    if (A * B > A + B && A - B)
    {
        printf("%d", A * B);
    }
    else if (A - B > A + B && A * B)
    {
        printf("%d", A - B);
    }
    else if (A + B > A - B && A * B)
    {
        printf("%d", A + B);
    }
    else
    {
        printf("0");
    }
    return 0;
}