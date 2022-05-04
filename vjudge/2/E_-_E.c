// #include <stdio.h>

// int main()
// {
//     int A, B, C, D, E, F, X, Y, Z;
//     scanf("%d %d %d %d %d %d %d", &A, &B, &C, &D, &E, &F, &X);

//     // Y = X <= A ? X * B : (A + C) >= X ? A * B
//     //                                   : ((X - ((X / (A + C)) * C)) + ((X % (A + C)) / A)) * B;
//     // Z = X <= D ? X * E : (D + F) >= X ? D * E
//     //                                   : ((X - ((X / (D + F)) * F)) + ((X % (D + F)) / D)) * E;

//     if (X <= A)
//     {
//         Y = X * B;
//     }
//     else
//     {
//         if (X % (A + C) > A)
//         {
//             Y = ((X / (A + C) + 1) * A) * B;
//             // printf("%d", Y);
//         }
//         else
//         {
//             Y = (((X / (A + C)) * A) + (X % (A + C))) * B;
//         }
//     }
//     if (X <= D)
//     {
//         Z = X * E;
//     }
//     else
//     {
//         if (X % (D + F) > D)
//         {
//             Z = ((X / (D + F) + 1) * D) * E;
//         }
//         else
//         {
//             Z = (((X / (D + F)) * D) + (X % (D + F))) * E;
//             // printf("%d", Z);
//         }
//     }
//     // printf("Y = %d , Z= %d\n", Y, Z);
//     if (Y > Z)
//     {
//         printf("Takahashi");
//     }
//     else if (Y < Z)
//     {
//         printf("Aoki");
//     }
//     else
//     {
//         printf("Draw");
//     }

//     return 0;
// }

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

#include <stdio.h>

int main()
{
    int A, B, C, D, E, F, X, Y, Z;
    scanf("%d %d %d %d %d %d %d", &A, &B, &C, &D, &E, &F, &X);

    if (X <= A)
        Y = X * B;
    else
    {
        if (X % (A + C) > A)
            Y = ((X / (A + C) + 1) * A) * B;
        else
            Y = (((X / (A + C)) * A) + (X % (A + C))) * B;
    }
    if (X <= D)
        Z = X * E;
    else
    {
        if (X % (D + F) > D)
            Z = ((X / (D + F) + 1) * D) * E;
        else
            Z = (((X / (D + F)) * D) + (X % (D + F))) * E;
    }
    if (Y > Z)
        printf("Takahashi");
    else if (Y < Z)
        printf("Aoki");
    else
        printf("Draw");

    return 0;
}