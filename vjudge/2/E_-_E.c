#include <stdio.h>

int main()
{
    int A, B, C, D, E, F, X, Y, Z;
    scanf("%d %d %d %d %d %d %d", &A, &B, &C, &D, &E, &F, &X);
    if ((A || D) <= X)
    {
    }
    return 0;
}
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