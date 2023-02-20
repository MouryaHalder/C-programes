#include <stdio.h>
int main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");

   scanf("%d", &rows);

   for (i = 1; i <= rows; ++i, k = 0) {

      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }

    printf("* ");
        while (k < 2 * i - 3) {
            if (i == rows) printf("* ");
                else printf("  ");
    ++k;
}

if (i != 1) printf("* ");

      printf("\n");
   }

   return 0;
}
