#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number ;
    /*Input the number */
    printf("Enter the number whose multiplication table you want to print: ");
    scanf("%d", &number);
    /*printing multiplicayion table */
    printf("Multiplication table of %d:\n", number);
    for (int i = 1; i <= 12; i++) {
        printf("%d * %d = %d\n", number, i, number * i);
    }
}