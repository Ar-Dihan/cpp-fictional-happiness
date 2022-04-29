#include <stdio.h>

int main()
{
    int X, a, b, c, sum, temp;
    scanf("%d", &X);
    a = X / 100;
    b = (X / 10) - a * 10;
    c = X % 10;
    temp = a + b + c;
    sum = temp * 100 + temp * 10 + temp;
    printf("%d", sum);

    return 0;
}