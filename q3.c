#include <stdio.h>
#include <stdlib.h>

int main(){ 
    char operator;
    int num1, num2, result;

    /* Input operators and numbers */
    printf(" Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf(" Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    /* Calculation */
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf(" Error!.\n");
                return 1;
                /* Exiting with an error code */
            } break;
        default:
            printf(" Invalid operator.\n");
            return 1;}
    /* Printing the result */
    printf(" %d %c %d = %d\n", num1, operator, num2, result);
    return 0;
}