/*
JULIET ZIPPY WANGUI NJERU
CT100/G/26140/25
INTEGERS
*/
#include <stdio.h>

int main() {
    FILE *input, *output;
    int numbers[10];
    int i, sum = 0;
    float average;

    // --- Step 1: Get 10 integers from the user and save to input.txt ---
    input = fopen("input.txt", "w");
    if (input == NULL) {
        printf("Error opening input.txt!\n");
        return 1;
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        fprintf(input, "%d\n", numbers[i]);  // write each number to file
    }
    fclose(input);
    printf("\nNumbers saved to input.txt\n");

    // --- Step 2: Read numbers from input.txt and calculate sum & average ---
    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error reading input.txt!\n");
        return 1;
    }

    for (i = 0; i < 10; i++) {
        fscanf(input, "%d", &numbers[i]);
        sum += numbers[i];
    }
    fclose(input);

    average = (float)sum / 10;

    // --- Step 3: Write sum and average to output.txt ---
    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error opening output.txt!\n");
        return 1;
    }

    fprintf(output, "Sum = %d\n", sum);
    fprintf(output, "Average = %.2f\n", average);
    fclose(output);

    // --- Step 4: Display both files ---
    printf("\nContents of input.txt:\n");
    input = fopen("input.txt", "r");
    while ((i = fgetc(input)) != EOF)
        putchar(i);
    fclose(input);

    printf("\nContents of output.txt:\n");
    output = fopen("output.txt", "r");
    while ((i = fgetc(output)) != EOF)
        putchar(i);
    fclose(output);

    return 0;
}