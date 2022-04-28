#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if ((A == B && B == C) || (A != B && B != C && C != A))
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
    return 0;
}