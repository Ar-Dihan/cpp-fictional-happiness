#include <stdio.h>
#include <ctype.h>

int main()
{
    int input, A = 0, D = 0;
    scanf("%d", &input);
    char charecter;
    for (int i = 0; i <= input; i++)
    {
        scanf("%c", &charecter);
        if (charecter == 'A')
        {
            A += 1;
        }
        else if (charecter == 'D')
        {
            D += 1;
        }
    }
    if (A > D)
    {
        printf("Anton");
    }
    else if (A < D)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }
    return 0;
}