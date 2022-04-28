#include <stdio.h>

int main()
{
    int nStudent, passMark, studentM, count = 0;
    scanf("%d %d", &nStudent, &passMark);
    for (int i = 0; i < nStudent; i++)
    {
        scanf("%d", &studentM);
        if (studentM < passMark)
        {
            count += 1;
        }
    }
    printf("%d\n", count);
    return 0;
}