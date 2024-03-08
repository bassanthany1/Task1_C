 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int fact = 1;

    /* Input number */
    printf(" Enter a positive number: ");
    scanf("%d", &number);

    /* Checking if the number is negative */
    if (number < 0) {
        printf(" Factorial of a negative number doesn't exist.\n");
    }
     else {
        /* Calculate factorial*/
    for ( int i = 1; i <= number; ++i) {
        fact =fact * i;
    }
        printf(" Factorial of %d = %d\n", number, fact);
    }

    return 0;
}

