#include <stdio.h>

int main()
{
   int X;
   scanf("%d", &X);
   if (X < 40 && X >= 0)
   {
      printf("%d", 40 - X);
   }
   else if (X < 70 && X >= 40)
   {
      printf("%d", 70 - X);
   }
   else if (X < 90 && X >= 70)
   {
      printf("%d", 90 - X);
   }
   else
   {
      printf("expert");
   }

   return 0;
}