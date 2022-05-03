#include <stdio.h>

int main()
{
    int A, B, C, D, E, F, X, Y, Z;
    scanf("%d %d %d %d %d %d %d", &A, &B, &C, &D, &E, &F, &X);

    Y = X <= A ? X * B : (A + C) >= X ? A * B
                                      : ((X - ((X / (A + C)) * C)) + ((X % (A + C)) / A)) * B;
    Z = X <= D ? X * E : (D + F) >= X ? D * E
                                      : ((X - ((X / (D + F)) * F)) + ((X % (D + F)) / D)) * E;
    if (Y > Z)
    {
        printf("Takahashi");
    }
    else if (Y < Z)
    {
        printf("Aoki");
    }
    else
    {
        printf("Draw");
    }

    return 0;
}

// printf("Y = %d , Z= %d\n", Y, Z);
// Y = (X - (A + C)) * B;
// Z = (X - (D + F)) * E;
// if (Y > Z)
// {
//     printf("Takahashi");
// }
// else if (Y < Z)
// {
//     printf("Aoki");
// }
// else
// {
//     printf("Draw");
// }