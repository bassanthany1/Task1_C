 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    /* Input a number */
    printf(" Enter an integer number: ");
    scanf("%d", &number);

    /*Checking whether the number is even or odd*/
    if (number % 2 == 0)
        {
        printf(" %d is even.\n", number);
    }
    else {
        printf(" %d is odd.\n", number);
    }

    return 0;
}