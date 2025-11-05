/*
JULIET ZIPPY WANGUI NJERU
CT100/G/26140/25
HOURS WORKED IN A WEEK
*/
#include <stdio.h>

int main() {
    float hours, rate, grossPay, tax, netPay;

    // Input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    // Calculate gross pay
    if (hours <= 40)
        grossPay = hours * rate;
    else
        grossPay = (40 * rate) + ((hours - 40) * rate * 1.5);

    // Calculate taxes
    if (grossPay <= 600)
        tax = 0.15 * grossPay;
    else
        tax = (0.15 * 600) + (0.20 * (grossPay - 600));

    // Calculate net pay
    netPay = grossPay - tax;

    // Output results
    printf("\nGross Pay: $%.2f", grossPay);
    printf("\nTaxes: $%.2f", tax);
    printf("\nNet Pay: $%.2f\n", netPay);

    return 0;
}