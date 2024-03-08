 #include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    int exponent;

    /* Input number and power */
    printf(" Enter number: ");
    scanf("%d", &number);
    printf(" Enter exponent: ");
    scanf("%d", &exponent);

    int result = 1;
    int i;
    for (i = 0; i < exponent; i++) {
        result = result* number;
    }

    /* Printing the result*/
    printf(" %d raised to the power of %d is %d\n", number, exponent, result);

    return 0;
}