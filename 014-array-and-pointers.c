// Exercise from https://www.learn-c.org/
// gcc -Wall 014-array-and-pointers.c -o 014-array-and-pointers.out && ./014-array-and-pointers.out

#include <stdio.h>
#include <stdlib.h>
// free


int main() {
    int i, j;
    int nrows = 3;

    int **pnumbers = (int **)malloc(nrows * sizeof(int *));

    /* TODO: allocate memory for storing the individual elements in a row */
    pnumbers[0] = (int *) malloc(1 * sizeof(int));
    pnumbers[1] = (int *) malloc(2 * sizeof(int));
    pnumbers[2] = (int *) malloc(3 * sizeof(int));

    pnumbers[0][0] = 1;
    pnumbers[1][0] = 1;
    pnumbers[1][1] = 1;
    pnumbers[2][0] = 1;
    pnumbers[2][1] = 2;
    pnumbers[2][2] = 1;

    for (i = 0; i < 3; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d", pnumbers[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
       free(pnumbers[i]);
    }

    free(pnumbers);

  return 0;
}