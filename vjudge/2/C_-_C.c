#include <stdio.h>

int main()
{

    int S, T, X;
    scanf("%d %d %d", &S, &T, &X);

    if (S <= T)
    {
        if (X >= S && X <= T - 1)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        if (X >= S || X <= T - 1)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }

    return 0;
}

// int a, b, c;
// scanf("%d %d %d", &a, &b, &c);
// if (a < b)
// {
//     for (int i = a; i <= b; i++)
//     {
//         if (i == c)
//         {
//             // break;
//             printf("Yes");
//         }
//     }
// }
// else if (b == 0 && a <= c)
// {
//     printf("Yes");
// }
// else if (a > b)
// {
//     for (int i = a; i <= 23; i++)
//     {
//         i++;
//         if (i == 23)
//         {
//             i--;
//             if (i == c)
//             {
//                 printf("Yes");
//             }
//             else
//             {
//                 printf("No");
//             }
//         }
//     }
// }
// else
// {
//     printf("No");
// }