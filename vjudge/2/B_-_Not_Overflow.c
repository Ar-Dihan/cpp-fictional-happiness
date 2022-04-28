#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long long N;
    scanf("%lld", &N);

    if (N >= (pow(-2, 31)) && N <= (pow(2, 31) - 1))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
