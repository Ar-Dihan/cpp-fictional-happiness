#include <stdio.h>

int main()
{
    int room, living, canLive, count = 0;
    scanf("%d", &room);
    for (int i = 0; i < room; i++)
    {
        /* code */
        scanf("%d %d\n", &living, &canLive);
        if (canLive - living >= 2)
        {
            count += 1;
        }
    }
    printf("%d", count);
    return 0;
}