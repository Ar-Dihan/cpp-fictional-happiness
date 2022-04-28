#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    if (A < B + B)
        printf("0");
    else
        printf("%d", (A - (B + B)));
    return 0;
}