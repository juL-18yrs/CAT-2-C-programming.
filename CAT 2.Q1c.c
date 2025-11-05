/*JULIET ZIPPY WANGUI NJERU
CT100/G/26140/25
ELEMENTS OF AN ARRAY USING LOOPS
*/
#include <stdio.h>

int main() {
    int scores[2][3] = {
        {65, 92, 35},
        {84, 72, 59}
    };

    printf("The elements of the array are:\n");
    for (int i = 0; i < 2; i++) {          // loop through rows
        for (int j = 0; j < 3; j++) {      // loop through columns
            printf("%d ", scores[i][j]);
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}